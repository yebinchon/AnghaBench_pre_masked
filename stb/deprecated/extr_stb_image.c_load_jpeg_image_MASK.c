
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hs; int vs; int ystep; int w_lores; scalar_t__ ypos; int* (* resample ) (int*,int ,int ,int,int) ;int line1; int line0; } ;
typedef TYPE_3__ stbi_resample ;
typedef int stbi__uint8 ;
struct TYPE_11__ {int img_h_max; int img_v_max; TYPE_2__* s; TYPE_1__* img_comp; } ;
typedef TYPE_4__ jpeg ;
struct TYPE_9__ {int img_n; int img_x; int img_y; } ;
struct TYPE_8__ {int* linebuf; int h; int v; scalar_t__ y; scalar_t__ w2; int data; } ;


 int FUNC_0 (int*,int*,int*,int*,int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int* FUNC_5 (int*,int ,int ,int,int) ;
 int* FUNC_6 (int*,int ,int ,int,int) ;
 int* FUNC_7 (int*,int ,int ,int,int) ;
 int* FUNC_8 (int*,int ,int ,int,int) ;
 int* FUNC_9 (int*,int ,int ,int,int) ;
 int FUNC_10 (int*,int*,int*,int*,int,int) ;
 int* FUNC_11 (int*,int ,int ,int,int) ;

__attribute__((used)) static stbi__uint8 *FUNC_12(jpeg *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   int VAR_5, VAR_6;

   if (VAR_4 < 0 || VAR_4 > 4) return FUNC_3("bad req_comp", "Internal error");
   VAR_0->s->img_n = 0;


   if (!FUNC_2(VAR_0)) { FUNC_1(VAR_0); return ((void*)0); }


   VAR_5 = VAR_4 ? VAR_4 : VAR_0->s->img_n;

   if (VAR_0->s->img_n == 3 && VAR_5 < 3)
      VAR_6 = 1;
   else
      VAR_6 = VAR_0->s->img_n;


   {
      int VAR_7;
      unsigned int VAR_8,VAR_9;
      stbi__uint8 *VAR_10;
      stbi__uint8 *VAR_11[4];

      stbi_resample VAR_12[4];

      for (VAR_7=0; VAR_7 < VAR_6; ++VAR_7) {
         stbi_resample *VAR_13 = &VAR_12[VAR_7];



         VAR_0->img_comp[VAR_7].linebuf = (stbi__uint8 *) FUNC_4(VAR_0->s->img_x + 3);
         if (!VAR_0->img_comp[VAR_7].linebuf) { FUNC_1(VAR_0); return FUNC_3("outofmem", "Out of memory"); }

         VAR_13->hs = VAR_0->img_h_max / VAR_0->img_comp[VAR_7].h;
         VAR_13->vs = VAR_0->img_v_max / VAR_0->img_comp[VAR_7].v;
         VAR_13->ystep = VAR_13->vs >> 1;
         VAR_13->w_lores = (VAR_0->s->img_x + VAR_13->hs-1) / VAR_13->hs;
         VAR_13->ypos = 0;
         VAR_13->line0 = VAR_13->line1 = VAR_0->img_comp[VAR_7].data;

         if (VAR_13->hs == 1 && VAR_13->vs == 1) VAR_13->resample = FUNC_5;
         else if (VAR_13->hs == 1 && VAR_13->vs == 2) VAR_13->resample = FUNC_9;
         else if (VAR_13->hs == 2 && VAR_13->vs == 1) VAR_13->resample = FUNC_7;
         else if (VAR_13->hs == 2 && VAR_13->vs == 2) VAR_13->resample = FUNC_8;
         else VAR_13->resample = FUNC_6;
      }


      VAR_10 = (stbi__uint8 *) FUNC_4(VAR_5 * VAR_0->s->img_x * VAR_0->s->img_y + 1);
      if (!VAR_10) { FUNC_1(VAR_0); return FUNC_3("outofmem", "Out of memory"); }


      for (VAR_9=0; VAR_9 < VAR_0->s->img_y; ++VAR_9) {
         stbi__uint8 *VAR_14 = VAR_10 + VAR_5 * VAR_0->s->img_x * VAR_9;
         for (VAR_7=0; VAR_7 < VAR_6; ++VAR_7) {
            stbi_resample *VAR_15 = &VAR_12[VAR_7];
            int VAR_16 = VAR_15->ystep >= (VAR_15->vs >> 1);
            VAR_11[VAR_7] = VAR_15->resample(VAR_0->img_comp[VAR_7].linebuf,
                                     VAR_16 ? VAR_15->line1 : VAR_15->line0,
                                     VAR_16 ? VAR_15->line0 : VAR_15->line1,
                                     VAR_15->w_lores, VAR_15->hs);
            if (++VAR_15->ystep >= VAR_15->vs) {
               VAR_15->ystep = 0;
               VAR_15->line0 = VAR_15->line1;
               if (++VAR_15->ypos < VAR_0->img_comp[VAR_7].y)
                  VAR_15->line1 += VAR_0->img_comp[VAR_7].w2;
            }
         }
         if (VAR_5 >= 3) {
            stbi__uint8 *VAR_17 = VAR_11[0];
            if (VAR_0->s->img_n == 3) {



               FUNC_0(VAR_14, VAR_17, VAR_11[1], VAR_11[2], VAR_0->s->img_x, VAR_5);

            } else
               for (VAR_8=0; VAR_8 < VAR_0->s->img_x; ++VAR_8) {
                  VAR_14[0] = VAR_14[1] = VAR_14[2] = VAR_17[VAR_8];
                  VAR_14[3] = 255;
                  VAR_14 += VAR_5;
               }
         } else {
            stbi__uint8 *VAR_18 = VAR_11[0];
            if (VAR_5 == 1)
               for (VAR_8=0; VAR_8 < VAR_0->s->img_x; ++VAR_8) VAR_14[VAR_8] = VAR_18[VAR_8];
            else
               for (VAR_8=0; VAR_8 < VAR_0->s->img_x; ++VAR_8) *VAR_14++ = VAR_18[VAR_8], *VAR_14++ = 255;
         }
      }
      FUNC_1(VAR_0);
      *VAR_1 = VAR_0->s->img_x;
      *VAR_2 = VAR_0->s->img_y;
      if (VAR_3) *VAR_3 = VAR_0->s->img_n;
      return VAR_10;
   }
}
