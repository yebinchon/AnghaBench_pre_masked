
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* stbi_uc ;
struct TYPE_7__ {int restart_interval; int s; TYPE_2__* huff_ac; int * fast_ac; TYPE_1__* huff_dc; void*** dequant; } ;
typedef TYPE_3__ stbi__jpeg ;
struct TYPE_6__ {void** values; } ;
struct TYPE_5__ {void** values; } ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 size_t* VAR_0 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(stbi__jpeg *VAR_1, int VAR_2)
{
   int VAR_3;
   switch (VAR_2) {
      case 128:
         return FUNC_2("expected marker","Corrupt JPEG");

      case 0xDD:
         if (FUNC_3(VAR_1->s) != 4) return FUNC_2("bad DRI len","Corrupt JPEG");
         VAR_1->restart_interval = FUNC_3(VAR_1->s);
         return 1;

      case 0xDB:
         VAR_3 = FUNC_3(VAR_1->s)-2;
         while (VAR_3 > 0) {
            int VAR_4 = FUNC_4(VAR_1->s);
            int VAR_5 = VAR_4 >> 4;
            int VAR_6 = VAR_4 & 15,VAR_7;
            if (VAR_5 != 0) return FUNC_2("bad DQT type","Corrupt JPEG");
            if (VAR_6 > 3) return FUNC_2("bad DQT table","Corrupt JPEG");
            for (VAR_7=0; VAR_7 < 64; ++VAR_7)
               VAR_1->dequant[VAR_6][VAR_0[VAR_7]] = FUNC_4(VAR_1->s);
            VAR_3 -= 65;
         }
         return VAR_3==0;

      case 0xC4:
         VAR_3 = FUNC_3(VAR_1->s)-2;
         while (VAR_3 > 0) {
            stbi_uc *VAR_8;
            int VAR_9[16],VAR_10,VAR_11=0;
            int VAR_12 = FUNC_4(VAR_1->s);
            int VAR_13 = VAR_12 >> 4;
            int VAR_14 = VAR_12 & 15;
            if (VAR_13 > 1 || VAR_14 > 3) return FUNC_2("bad DHT header","Corrupt JPEG");
            for (VAR_10=0; VAR_10 < 16; ++VAR_10) {
               VAR_9[VAR_10] = FUNC_4(VAR_1->s);
               VAR_11 += VAR_9[VAR_10];
            }
            VAR_3 -= 17;
            if (VAR_13 == 0) {
               if (!FUNC_1(VAR_1->huff_dc+VAR_14, VAR_9)) return 0;
               VAR_8 = VAR_1->huff_dc[VAR_14].values;
            } else {
               if (!FUNC_1(VAR_1->huff_ac+VAR_14, VAR_9)) return 0;
               VAR_8 = VAR_1->huff_ac[VAR_14].values;
            }
            for (VAR_10=0; VAR_10 < VAR_11; ++VAR_10)
               VAR_8[VAR_10] = FUNC_4(VAR_1->s);
            if (VAR_13 != 0)
               FUNC_0(VAR_1->fast_ac[VAR_14], VAR_1->huff_ac + VAR_14);
            VAR_3 -= VAR_11;
         }
         return VAR_3==0;
   }

   if ((VAR_2 >= 0xE0 && VAR_2 <= 0xEF) || VAR_2 == 0xFE) {
      FUNC_5(VAR_1->s, FUNC_3(VAR_1->s)-2);
      return 1;
   }
   return 0;
}
