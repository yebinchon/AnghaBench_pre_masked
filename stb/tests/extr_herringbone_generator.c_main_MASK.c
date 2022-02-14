
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_corner; int num_vary_x; int num_vary_y; void** num_color; void* short_side_len; int member_0; } ;
typedef TYPE_1__ stbhw_config ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,unsigned char*,int,int,int) ;
 int FUNC_7 (char*,int,int,int,unsigned char*,int) ;
 int VAR_0 ;

int FUNC_8(int VAR_1, char **VAR_2)
{
   stbhw_config VAR_3 = { 0 };
   int VAR_4,VAR_5, VAR_6,VAR_7;
   unsigned char *VAR_8;

   if (VAR_1 == 1) goto usage;
   if (VAR_1 < 3) goto error;

   switch (VAR_2[2][0]) {
      case 'c':
         if (VAR_1 < 8 || VAR_1 > 10)
            goto error;
         VAR_6 = 4;
         VAR_3.is_corner = 1;
         break;

      case 'e':
         if (VAR_1 < 10 || VAR_1 > 12)
            goto error;
         VAR_6 = 6;
         VAR_3.is_corner = 0;
         break;

      default:
         goto error;
   }

   VAR_3.short_side_len = FUNC_0(VAR_2[3]);
   for (VAR_7=0; VAR_7 < VAR_6; ++VAR_7)
      VAR_3.num_color[VAR_7] = FUNC_0(VAR_2[4+VAR_7]);

   VAR_3.num_vary_x = 1;
   VAR_3.num_vary_y = 1;

   if (VAR_1 > 4+VAR_7)
      VAR_3.num_vary_x = FUNC_0(VAR_2[4+VAR_7]);
   if (VAR_1 > 5+VAR_7)
      VAR_3.num_vary_y = FUNC_0(VAR_2[5+VAR_7]);

   FUNC_5(&VAR_3, &VAR_4, &VAR_5);

   VAR_8 = (unsigned char *) FUNC_3(VAR_4*VAR_5*3);

   if (FUNC_6(&VAR_3, VAR_8, VAR_4, VAR_5, VAR_4*3))
      FUNC_7(VAR_2[1], VAR_4, VAR_5, 3, VAR_8, VAR_4*3);
   else
      FUNC_1(VAR_0, "Error: %s\n", FUNC_4());
   return 0;

 error:
   FUNC_2("Invalid command-line arguments\n\n", VAR_0);
 usage:
   FUNC_2("Usage (see source for corner & edge type definitions):\n\n", VAR_0);
   FUNC_2("herringbone_generator {outfile} c {sidelen} {c0} {c1} {c2} {c3} [{vx} {vy}]\n"
         "     {outfile}  -- filename that template will be written to as PNG\n"
         "     {sidelen}  -- length of short side of rectangle in pixels\n"
         "     {c0}       -- number of colors for corner type 0\n"
         "     {c1}       -- number of colors for corner type 1\n"
         "     {c2}       -- number of colors for corner type 2\n"
         "     {c3}       -- number of colors for corner type 3\n"
         "     {vx}       -- number of color-duplicating variations horizontally in template\n"
         "     {vy}       -- number of color-duplicating variations vertically in template\n"
         "\n"
         , VAR_0);
   FUNC_2("herringbone_generator {outfile} e {sidelen} {e0} {e1} {e2} {e3} {e4} {e5} [{vx} {vy}]\n"
         "     {outfile}  -- filename that template will be written to as PNG\n"
         "     {sidelen}  -- length of short side of rectangle in pixels\n"
         "     {e0}       -- number of colors for edge type 0\n"
         "     {e1}       -- number of colors for edge type 1\n"
         "     {e2}       -- number of colors for edge type 2\n"
         "     {e3}       -- number of colors for edge type 3\n"
         "     {e4}       -- number of colors for edge type 4\n"
         "     {e5}       -- number of colors for edge type 5\n"
         "     {vx}       -- number of color-duplicating variations horizontally in template\n"
         "     {vy}       -- number of color-duplicating variations vertically in template\n"
         , VAR_0);
   return 1;
}
