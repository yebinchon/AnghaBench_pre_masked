
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* img_comp; } ;
typedef TYPE_2__ jpeg ;
typedef int huffman ;
typedef int data ;
struct TYPE_6__ {int dc_pred; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 size_t* VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (short*,int ,int) ;

__attribute__((used)) static int FUNC_4(jpeg *VAR_1, short VAR_2[64], huffman *VAR_3, huffman *VAR_4, int VAR_5)
{
   int VAR_6,VAR_7,VAR_8;
   int VAR_9 = FUNC_0(VAR_1, VAR_3);
   if (VAR_9 < 0) return FUNC_1("bad huffman code","Corrupt JPEG");


   FUNC_3(VAR_2,0,64*sizeof(VAR_2[0]));

   VAR_6 = VAR_9 ? FUNC_2(VAR_1, VAR_9) : 0;
   VAR_7 = VAR_1->img_comp[VAR_5].dc_pred + VAR_6;
   VAR_1->img_comp[VAR_5].dc_pred = VAR_7;
   VAR_2[0] = (short) VAR_7;


   VAR_8 = 1;
   do {
      int VAR_10,VAR_11;
      int VAR_12 = FUNC_0(VAR_1, VAR_4);
      if (VAR_12 < 0) return FUNC_1("bad huffman code","Corrupt JPEG");
      VAR_11 = VAR_12 & 15;
      VAR_10 = VAR_12 >> 4;
      if (VAR_11 == 0) {
         if (VAR_12 != 0xf0) break;
         VAR_8 += 16;
      } else {
         VAR_8 += VAR_10;

         VAR_2[VAR_0[VAR_8++]] = (short) FUNC_2(VAR_1,VAR_11);
      }
   } while (VAR_8 < 64);
   return 1;
}
