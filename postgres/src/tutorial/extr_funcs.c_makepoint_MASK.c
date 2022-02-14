
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 scalar_t__ FUNC_0 (int) ;

Point *
FUNC_1(Point *VAR_0, Point *VAR_1)
{
 Point *VAR_2 = (Point *) FUNC_0(sizeof(Point));

 VAR_2->x = VAR_0->x;
 VAR_2->y = VAR_1->y;

 return VAR_2;
}
