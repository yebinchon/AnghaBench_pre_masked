
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int img_x; int img_y; } ;
typedef TYPE_1__ stbi__context ;
struct TYPE_9__ {int hsz; int bpp; int mr; int mg; int mb; int ma; scalar_t__ all_a; void* offset; } ;
typedef TYPE_2__ stbi__bmp_data ;


 void* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 char FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void *FUNC_4(stbi__context *VAR_0, stbi__bmp_data *VAR_1)
{
   int VAR_2;
   if (FUNC_3(VAR_0) != 'B' || FUNC_3(VAR_0) != 'M') return FUNC_0("not BMP", "Corrupt BMP");
   FUNC_2(VAR_0);
   FUNC_1(VAR_0);
   FUNC_1(VAR_0);
   VAR_1->offset = FUNC_2(VAR_0);
   VAR_1->hsz = VAR_2 = FUNC_2(VAR_0);

   if (VAR_2 != 12 && VAR_2 != 40 && VAR_2 != 56 && VAR_2 != 108 && VAR_2 != 124) return FUNC_0("unknown BMP", "BMP type not supported: unknown");
   if (VAR_2 == 12) {
      VAR_0->img_x = FUNC_1(VAR_0);
      VAR_0->img_y = FUNC_1(VAR_0);
   } else {
      VAR_0->img_x = FUNC_2(VAR_0);
      VAR_0->img_y = FUNC_2(VAR_0);
   }
   if (FUNC_1(VAR_0) != 1) return FUNC_0("bad BMP", "bad BMP");
   VAR_1->bpp = FUNC_1(VAR_0);
   if (VAR_1->bpp == 1) return FUNC_0("monochrome", "BMP type not supported: 1-bit");
   if (VAR_2 != 12) {
      int VAR_3 = FUNC_2(VAR_0);
      if (VAR_3 == 1 || VAR_3 == 2) return FUNC_0("BMP RLE", "BMP type not supported: RLE");
      FUNC_2(VAR_0);
      FUNC_2(VAR_0);
      FUNC_2(VAR_0);
      FUNC_2(VAR_0);
      FUNC_2(VAR_0);
      if (VAR_2 == 40 || VAR_2 == 56) {
         if (VAR_2 == 56) {
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
         }
         if (VAR_1->bpp == 16 || VAR_1->bpp == 32) {
            VAR_1->mr = VAR_1->mg = VAR_1->mb = 0;
            if (VAR_3 == 0) {
               if (VAR_1->bpp == 32) {
                  VAR_1->mr = 0xffu << 16;
                  VAR_1->mg = 0xffu << 8;
                  VAR_1->mb = 0xffu << 0;
                  VAR_1->ma = 0xffu << 24;
                  VAR_1->all_a = 0;
               } else {
                  VAR_1->mr = 31u << 10;
                  VAR_1->mg = 31u << 5;
                  VAR_1->mb = 31u << 0;
               }
            } else if (VAR_3 == 3) {
               VAR_1->mr = FUNC_2(VAR_0);
               VAR_1->mg = FUNC_2(VAR_0);
               VAR_1->mb = FUNC_2(VAR_0);

               if (VAR_1->mr == VAR_1->mg && VAR_1->mg == VAR_1->mb) {

                  return FUNC_0("bad BMP", "bad BMP");
               }
            } else
               return FUNC_0("bad BMP", "bad BMP");
         }
      } else {
         int VAR_4;
         if (VAR_2 != 108 && VAR_2 != 124)
            return FUNC_0("bad BMP", "bad BMP");
         VAR_1->mr = FUNC_2(VAR_0);
         VAR_1->mg = FUNC_2(VAR_0);
         VAR_1->mb = FUNC_2(VAR_0);
         VAR_1->ma = FUNC_2(VAR_0);
         FUNC_2(VAR_0);
         for (VAR_4=0; VAR_4 < 12; ++VAR_4)
            FUNC_2(VAR_0);
         if (VAR_2 == 124) {
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
            FUNC_2(VAR_0);
         }
      }
   }
   return (void *) 1;
}
