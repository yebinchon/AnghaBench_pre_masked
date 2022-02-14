
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double x; double y; } ;
typedef TYPE_1__ Point ;



__attribute__((used)) static int
FUNC_0(double VAR_0, bool VAR_1, Point *VAR_2)
{
 double VAR_3 = (VAR_1) ? VAR_2->x : VAR_2->y;

 if (VAR_0 == VAR_3)
  return 0;
 else if (VAR_0 > VAR_3)
  return 1;
 else
  return -1;
}
