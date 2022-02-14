
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {TYPE_2__ high; TYPE_1__ low; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ BOX ;


 double FUNC_0 (double,double) ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static double
FUNC_3(Point *VAR_0, BOX *VAR_1)
{
 double VAR_2,
    VAR_3;

 if (FUNC_2(VAR_0->x) || FUNC_2(VAR_1->low.x) ||
  FUNC_2(VAR_0->y) || FUNC_2(VAR_1->low.y))
  return FUNC_1();

 if (VAR_0->x < VAR_1->low.x)
  VAR_2 = VAR_1->low.x - VAR_0->x;
 else if (VAR_0->x > VAR_1->high.x)
  VAR_2 = VAR_0->x - VAR_1->high.x;
 else
  VAR_2 = 0.0;

 if (VAR_0->y < VAR_1->low.y)
  VAR_3 = VAR_1->low.y - VAR_0->y;
 else if (VAR_0->y > VAR_1->high.y)
  VAR_3 = VAR_0->y - VAR_1->high.y;
 else
  VAR_3 = 0.0;

 return FUNC_0(VAR_2, VAR_3);
}
