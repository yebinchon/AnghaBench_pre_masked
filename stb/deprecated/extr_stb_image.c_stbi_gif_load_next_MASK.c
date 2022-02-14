
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; int eflags; int line_size; int start_x; int start_y; int max_x; int max_y; int cur_x; int cur_y; int lflags; int step; int parse; int transparent; int flags; int** pal; int * color_table; scalar_t__ lpal; int * out; } ;
typedef TYPE_1__ stbi_gif ;
typedef int stbi__uint8 ;
typedef int stbi__int32 ;
typedef int stbi ;


 int * FUNC_0 (int *,int,int,int,int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*,int*,int ) ;
 int FUNC_9 (int *,scalar_t__,int,int) ;
 int * FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static stbi__uint8 *FUNC_11(stbi *VAR_0, stbi_gif *VAR_1, int *VAR_2, int VAR_3)
{
   int VAR_4;
   stbi__uint8 *VAR_5 = 0;

   if (VAR_1->out == 0) {
      if (!FUNC_8(VAR_0, VAR_1, VAR_2,0)) return 0;
      VAR_1->out = (stbi__uint8 *) FUNC_4(4 * VAR_1->w * VAR_1->h);
      if (VAR_1->out == 0) return FUNC_1("outofmem", "Out of memory");
      FUNC_7(VAR_1);
   } else {

      if (((VAR_1->eflags & 0x1C) >> 2) == 3) {
         VAR_5 = VAR_1->out;
         VAR_1->out = (stbi__uint8 *) FUNC_4(4 * VAR_1->w * VAR_1->h);
         if (VAR_1->out == 0) return FUNC_1("outofmem", "Out of memory");
         FUNC_5(VAR_1->out, VAR_5, VAR_1->w*VAR_1->h*4);
      }
   }

   for (;;) {
      switch (FUNC_3(VAR_0)) {
         case 0x2C:
         {
            stbi__int32 VAR_6, VAR_7, VAR_8, VAR_9;
            stbi__uint8 *VAR_10;

            VAR_6 = FUNC_2(VAR_0);
            VAR_7 = FUNC_2(VAR_0);
            VAR_8 = FUNC_2(VAR_0);
            VAR_9 = FUNC_2(VAR_0);
            if (((VAR_6 + VAR_8) > (VAR_1->w)) || ((VAR_7 + VAR_9) > (VAR_1->h)))
               return FUNC_1("bad Image Descriptor", "Corrupt GIF");

            VAR_1->line_size = VAR_1->w * 4;
            VAR_1->start_x = VAR_6 * 4;
            VAR_1->start_y = VAR_7 * VAR_1->line_size;
            VAR_1->max_x = VAR_1->start_x + VAR_8 * 4;
            VAR_1->max_y = VAR_1->start_y + VAR_9 * VAR_1->line_size;
            VAR_1->cur_x = VAR_1->start_x;
            VAR_1->cur_y = VAR_1->start_y;

            VAR_1->lflags = FUNC_3(VAR_0);

            if (VAR_1->lflags & 0x40) {
               VAR_1->step = 8 * VAR_1->line_size;
               VAR_1->parse = 3;
            } else {
               VAR_1->step = VAR_1->line_size;
               VAR_1->parse = 0;
            }

            if (VAR_1->lflags & 0x80) {
               FUNC_9(VAR_0,VAR_1->lpal, 2 << (VAR_1->lflags & 7), VAR_1->eflags & 0x01 ? VAR_1->transparent : -1);
               VAR_1->color_table = (stbi__uint8 *) VAR_1->lpal;
            } else if (VAR_1->flags & 0x80) {
               for (VAR_4=0; VAR_4 < 256; ++VAR_4)
                  VAR_1->pal[VAR_4][3] = 255;
               if (VAR_1->transparent >= 0 && (VAR_1->eflags & 0x01))
                  VAR_1->pal[VAR_1->transparent][3] = 0;
               VAR_1->color_table = (stbi__uint8 *) VAR_1->pal;
            } else
               return FUNC_1("missing color table", "Corrupt GIF");

            VAR_10 = FUNC_10(VAR_0, VAR_1);
            if (VAR_10 == ((void*)0)) return ((void*)0);

            if (VAR_3 && VAR_3 != 4)
               VAR_10 = FUNC_0(VAR_10, 4, VAR_3, VAR_1->w, VAR_1->h);
            return VAR_10;
         }

         case 0x21:
         {
            int VAR_11;
            if (FUNC_3(VAR_0) == 0xF9) {
               VAR_11 = FUNC_3(VAR_0);
               if (VAR_11 == 4) {
                  VAR_1->eflags = FUNC_3(VAR_0);
                  FUNC_2(VAR_0);
                  VAR_1->transparent = FUNC_3(VAR_0);
               } else {
                  FUNC_6(VAR_0, VAR_11);
                  break;
               }
            }
            while ((VAR_11 = FUNC_3(VAR_0)) != 0)
               FUNC_6(VAR_0, VAR_11);
            break;
         }

         case 0x3B:
            return (stbi__uint8 *) 1;

         default:
            return FUNC_1("unknown code", "Corrupt GIF");
      }
   }
}
