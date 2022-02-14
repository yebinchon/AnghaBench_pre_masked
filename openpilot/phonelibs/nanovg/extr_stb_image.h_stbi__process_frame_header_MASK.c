
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_8__ {int img_h_max; int img_v_max; int img_mcu_w; int img_mcu_h; int img_mcu_x; int img_mcu_y; TYPE_1__* img_comp; scalar_t__ progressive; TYPE_3__* s; } ;
typedef TYPE_2__ stbi__jpeg ;
struct TYPE_9__ {int img_y; int img_x; int img_n; } ;
typedef TYPE_3__ stbi__context ;
struct TYPE_7__ {int id; int h; int v; int tq; int x; int y; int w2; int h2; int coeff_w; int coeff_h; short* coeff; scalar_t__ raw_coeff; int * linebuf; int * raw_data; int * data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 void* FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(stbi__jpeg *VAR_1, int VAR_2)
{
   stbi__context *VAR_3 = VAR_1->s;
   int VAR_4,VAR_5,VAR_6,VAR_7, VAR_8=1,VAR_9=1,VAR_10;
   VAR_4 = FUNC_3(VAR_3); if (VAR_4 < 11) return FUNC_2("bad SOF len","Corrupt JPEG");
   VAR_5 = FUNC_4(VAR_3); if (VAR_5 != 8) return FUNC_2("only 8-bit","JPEG format not supported: 8-bit only");
   VAR_3->img_y = FUNC_3(VAR_3); if (VAR_3->img_y == 0) return FUNC_2("no header height", "JPEG format not supported: delayed height");
   VAR_3->img_x = FUNC_3(VAR_3); if (VAR_3->img_x == 0) return FUNC_2("0 width","Corrupt JPEG");
   VAR_10 = FUNC_4(VAR_3);
   if (VAR_10 != 3 && VAR_10 != 1) return FUNC_2("bad component count","Corrupt JPEG");
   VAR_3->img_n = VAR_10;
   for (VAR_6=0; VAR_6 < VAR_10; ++VAR_6) {
      VAR_1->img_comp[VAR_6].data = ((void*)0);
      VAR_1->img_comp[VAR_6].linebuf = ((void*)0);
   }

   if (VAR_4 != 8+3*VAR_3->img_n) return FUNC_2("bad SOF len","Corrupt JPEG");

   for (VAR_6=0; VAR_6 < VAR_3->img_n; ++VAR_6) {
      VAR_1->img_comp[VAR_6].id = FUNC_4(VAR_3);
      if (VAR_1->img_comp[VAR_6].id != VAR_6+1)
         if (VAR_1->img_comp[VAR_6].id != VAR_6)
            return FUNC_2("bad component ID","Corrupt JPEG");
      VAR_7 = FUNC_4(VAR_3);
      VAR_1->img_comp[VAR_6].h = (VAR_7 >> 4); if (!VAR_1->img_comp[VAR_6].h || VAR_1->img_comp[VAR_6].h > 4) return FUNC_2("bad H","Corrupt JPEG");
      VAR_1->img_comp[VAR_6].v = VAR_7 & 15; if (!VAR_1->img_comp[VAR_6].v || VAR_1->img_comp[VAR_6].v > 4) return FUNC_2("bad V","Corrupt JPEG");
      VAR_1->img_comp[VAR_6].tq = FUNC_4(VAR_3); if (VAR_1->img_comp[VAR_6].tq > 3) return FUNC_2("bad TQ","Corrupt JPEG");
   }

   if (VAR_2 != VAR_0) return 1;

   if ((1 << 30) / VAR_3->img_x / VAR_3->img_n < VAR_3->img_y) return FUNC_2("too large", "Image too large to decode");

   for (VAR_6=0; VAR_6 < VAR_3->img_n; ++VAR_6) {
      if (VAR_1->img_comp[VAR_6].h > VAR_8) VAR_8 = VAR_1->img_comp[VAR_6].h;
      if (VAR_1->img_comp[VAR_6].v > VAR_9) VAR_9 = VAR_1->img_comp[VAR_6].v;
   }


   VAR_1->img_h_max = VAR_8;
   VAR_1->img_v_max = VAR_9;
   VAR_1->img_mcu_w = VAR_8 * 8;
   VAR_1->img_mcu_h = VAR_9 * 8;
   VAR_1->img_mcu_x = (VAR_3->img_x + VAR_1->img_mcu_w-1) / VAR_1->img_mcu_w;
   VAR_1->img_mcu_y = (VAR_3->img_y + VAR_1->img_mcu_h-1) / VAR_1->img_mcu_h;

   for (VAR_6=0; VAR_6 < VAR_3->img_n; ++VAR_6) {

      VAR_1->img_comp[VAR_6].x = (VAR_3->img_x * VAR_1->img_comp[VAR_6].h + VAR_8-1) / VAR_8;
      VAR_1->img_comp[VAR_6].y = (VAR_3->img_y * VAR_1->img_comp[VAR_6].v + VAR_9-1) / VAR_9;




      VAR_1->img_comp[VAR_6].w2 = VAR_1->img_mcu_x * VAR_1->img_comp[VAR_6].h * 8;
      VAR_1->img_comp[VAR_6].h2 = VAR_1->img_mcu_y * VAR_1->img_comp[VAR_6].v * 8;
      VAR_1->img_comp[VAR_6].raw_data = FUNC_5(VAR_1->img_comp[VAR_6].w2 * VAR_1->img_comp[VAR_6].h2+15);

      if (VAR_1->img_comp[VAR_6].raw_data == ((void*)0)) {
         for(--VAR_6; VAR_6 >= 0; --VAR_6) {
            FUNC_0(VAR_1->img_comp[VAR_6].raw_data);
            VAR_1->img_comp[VAR_6].raw_data = ((void*)0);
         }
         return FUNC_2("outofmem", "Out of memory");
      }

      VAR_1->img_comp[VAR_6].data = (stbi_uc*) (((size_t) VAR_1->img_comp[VAR_6].raw_data + 15) & ~15);
      VAR_1->img_comp[VAR_6].linebuf = ((void*)0);
      if (VAR_1->progressive) {
         VAR_1->img_comp[VAR_6].coeff_w = (VAR_1->img_comp[VAR_6].w2 + 7) >> 3;
         VAR_1->img_comp[VAR_6].coeff_h = (VAR_1->img_comp[VAR_6].h2 + 7) >> 3;
         VAR_1->img_comp[VAR_6].raw_coeff = FUNC_1(VAR_1->img_comp[VAR_6].coeff_w * VAR_1->img_comp[VAR_6].coeff_h * 64 * sizeof(short) + 15);
         VAR_1->img_comp[VAR_6].coeff = (short*) (((size_t) VAR_1->img_comp[VAR_6].raw_coeff + 15) & ~15);
      } else {
         VAR_1->img_comp[VAR_6].coeff = 0;
         VAR_1->img_comp[VAR_6].raw_coeff = 0;
      }
   }

   return 1;
}
