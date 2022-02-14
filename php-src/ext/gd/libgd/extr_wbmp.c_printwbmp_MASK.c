
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; scalar_t__* bitmap; } ;
typedef TYPE_1__ Wbmp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char) ;

void
FUNC_1 (Wbmp * VAR_1)
{
  int VAR_2, VAR_3;
  for (VAR_2 = 0; VAR_2 < VAR_1->height; VAR_2++)
    {
      for (VAR_3 = 0; VAR_3 < VAR_1->width; VAR_3++)
 {
   if (VAR_1->bitmap[VAR_1->width * VAR_2 + VAR_3] == VAR_0)
     {
       FUNC_0 ('#');
     }
   else
     {
       FUNC_0 (' ');
     }
 }
      FUNC_0 ('\n');
    }
}
