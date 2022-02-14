
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xres; int yres; } ;
typedef TYPE_1__ fz_image ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(fz_image *VAR_2, int *VAR_3, int *VAR_4)
{
 *VAR_3 = VAR_2->xres;
 *VAR_4 = VAR_2->yres;
 if (*VAR_3 < 0 || *VAR_4 < 0 || (*VAR_3 == 0 && *VAR_4 == 0))
 {

  *VAR_3 = VAR_1; *VAR_4 = VAR_1;
 }
 else if (*VAR_3 == 0)
 {
  *VAR_3 = *VAR_4;
 }
 else if (*VAR_4 == 0)
 {
  *VAR_4 = *VAR_3;
 }


 if (*VAR_3 < VAR_1 || *VAR_4 < VAR_1 || *VAR_3 > VAR_0 || *VAR_4 > VAR_0)
 {
  if (*VAR_3 == *VAR_4)
  {
   *VAR_3 = VAR_1;
   *VAR_4 = VAR_1;
  }
  else if (*VAR_3 < *VAR_4)
  {
   *VAR_4 = *VAR_4 * VAR_1 / *VAR_3;
   *VAR_3 = VAR_1;
  }
  else
  {
   *VAR_3 = *VAR_3 * VAR_1 / *VAR_4;
   *VAR_4 = VAR_1;
  }
 }
}
