
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__int32 ;
struct TYPE_6__ {int* out; int w; int h; int eflags; int* old_out; int start_x; int start_y; int max_x; int max_y; int line_size; int cur_x; int cur_y; int lflags; int step; int parse; int transparent; int* color_table; int flags; int** pal; void* delay; scalar_t__ lpal; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int* FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int*,int ) ;
 int FUNC_7 (int *,scalar_t__,int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int* FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static stbi_uc *FUNC_11(stbi__context *VAR_0, stbi__gif *VAR_1, int *VAR_2, int VAR_3)
{
   int VAR_4;
   stbi_uc *VAR_5 = 0;

   if (VAR_1->out == 0 && !FUNC_6(VAR_0, VAR_1, VAR_2,0))
      return 0;

   VAR_5 = VAR_1->out;
   VAR_1->out = (stbi_uc *) FUNC_8(4 * VAR_1->w * VAR_1->h);
   if (VAR_1->out == 0) return FUNC_2("outofmem", "Out of memory");

   switch ((VAR_1->eflags & 0x1C) >> 2) {
      case 0:
         FUNC_3(VAR_1, 0, 0, 4 * VAR_1->w, 4 * VAR_1->w * VAR_1->h);
         break;
      case 1:
         if (VAR_5) FUNC_1(VAR_1->out, VAR_5, 4 * VAR_1->w * VAR_1->h);
         VAR_1->old_out = VAR_5;
         break;
      case 2:
         if (VAR_5) FUNC_1(VAR_1->out, VAR_5, 4 * VAR_1->w * VAR_1->h);
         FUNC_3(VAR_1, VAR_1->start_x, VAR_1->start_y, VAR_1->max_x, VAR_1->max_y);
         break;
      case 3:
         if (VAR_1->old_out) {
            for (VAR_4 = VAR_1->start_y; VAR_4 < VAR_1->max_y; VAR_4 += 4 * VAR_1->w)
               FUNC_1(&VAR_1->out[VAR_4 + VAR_1->start_x], &VAR_1->old_out[VAR_4 + VAR_1->start_x], VAR_1->max_x - VAR_1->start_x);
         }
         break;
   }

   for (;;) {
      switch (FUNC_5(VAR_0)) {
         case 0x2C:
         {
            int VAR_6 = -1;
            stbi__int32 VAR_7, VAR_8, VAR_9, VAR_10;
            stbi_uc *VAR_11;

            VAR_7 = FUNC_4(VAR_0);
            VAR_8 = FUNC_4(VAR_0);
            VAR_9 = FUNC_4(VAR_0);
            VAR_10 = FUNC_4(VAR_0);
            if (((VAR_7 + VAR_9) > (VAR_1->w)) || ((VAR_8 + VAR_10) > (VAR_1->h)))
               return FUNC_2("bad Image Descriptor", "Corrupt GIF");

            VAR_1->line_size = VAR_1->w * 4;
            VAR_1->start_x = VAR_7 * 4;
            VAR_1->start_y = VAR_8 * VAR_1->line_size;
            VAR_1->max_x = VAR_1->start_x + VAR_9 * 4;
            VAR_1->max_y = VAR_1->start_y + VAR_10 * VAR_1->line_size;
            VAR_1->cur_x = VAR_1->start_x;
            VAR_1->cur_y = VAR_1->start_y;

            VAR_1->lflags = FUNC_5(VAR_0);

            if (VAR_1->lflags & 0x40) {
               VAR_1->step = 8 * VAR_1->line_size;
               VAR_1->parse = 3;
            } else {
               VAR_1->step = VAR_1->line_size;
               VAR_1->parse = 0;
            }

            if (VAR_1->lflags & 0x80) {
               FUNC_7(VAR_0,VAR_1->lpal, 2 << (VAR_1->lflags & 7), VAR_1->eflags & 0x01 ? VAR_1->transparent : -1);
               VAR_1->color_table = (stbi_uc *) VAR_1->lpal;
            } else if (VAR_1->flags & 0x80) {
               if (VAR_1->transparent >= 0 && (VAR_1->eflags & 0x01)) {
                  VAR_6 = VAR_1->pal[VAR_1->transparent][3];
                  VAR_1->pal[VAR_1->transparent][3] = 0;
               }
               VAR_1->color_table = (stbi_uc *) VAR_1->pal;
            } else
               return FUNC_2("missing color table", "Corrupt GIF");

            VAR_11 = FUNC_9(VAR_0, VAR_1);
            if (VAR_11 == ((void*)0)) return ((void*)0);

            if (VAR_6 != -1)
               VAR_1->pal[VAR_1->transparent][3] = (stbi_uc) VAR_6;

            return VAR_11;
         }

         case 0x21:
         {
            int VAR_12;
            if (FUNC_5(VAR_0) == 0xF9) {
               VAR_12 = FUNC_5(VAR_0);
               if (VAR_12 == 4) {
                  VAR_1->eflags = FUNC_5(VAR_0);
                  VAR_1->delay = FUNC_4(VAR_0);
                  VAR_1->transparent = FUNC_5(VAR_0);
               } else {
                  FUNC_10(VAR_0, VAR_12);
                  break;
               }
            }
            while ((VAR_12 = FUNC_5(VAR_0)) != 0)
               FUNC_10(VAR_0, VAR_12);
            break;
         }

         case 0x3B:
            return (stbi_uc *) VAR_0;

         default:
            return FUNC_2("unknown code", "Corrupt GIF");
      }
   }

   FUNC_0(VAR_3);
}
