
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

BOOL
FUNC_0(int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8)
{
 if (*VAR_5 + *VAR_7 > VAR_2 + VAR_1)
  *VAR_7 = VAR_2 + VAR_1 - *VAR_5;
 if (*VAR_6 + *VAR_8 > VAR_3 + VAR_0)
  *VAR_8 = VAR_3 + VAR_0 - *VAR_6;
 if (*VAR_5 < VAR_2)
 {
  *VAR_7 -= VAR_2 - *VAR_5;
  *VAR_5 = VAR_2;
 }
 if (*VAR_6 < VAR_3)
 {
  *VAR_8 -= VAR_3 - *VAR_6;
  *VAR_6 = VAR_3;
 }
 if (*VAR_7 < 0 || *VAR_8 < 0)
  *VAR_7 = *VAR_8 = 0;
 return (*VAR_7 > 0 && *VAR_8 > 0 && *VAR_5 < VAR_4->width && *VAR_6 < VAR_4->height);
}
