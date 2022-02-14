
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_15__ {scalar_t__ high; } ;
struct TYPE_14__ {scalar_t__ low; } ;
struct TYPE_16__ {TYPE_5__ right; TYPE_4__ left; } ;
struct TYPE_12__ {scalar_t__ high; } ;
struct TYPE_11__ {scalar_t__ low; } ;
struct TYPE_13__ {TYPE_2__ right; TYPE_1__ left; } ;
struct TYPE_17__ {TYPE_6__ range_box_y; TYPE_3__ range_box_x; } ;
typedef TYPE_7__ RectBox ;
typedef TYPE_8__ Point ;


 double FUNC_0 (double,double) ;

__attribute__((used)) static double
FUNC_1(Point *VAR_0, RectBox *VAR_1)
{
 double VAR_2;
 double VAR_3;

 if (VAR_0->x < VAR_1->range_box_x.left.low)
  VAR_2 = VAR_1->range_box_x.left.low - VAR_0->x;
 else if (VAR_0->x > VAR_1->range_box_x.right.high)
  VAR_2 = VAR_0->x - VAR_1->range_box_x.right.high;
 else
  VAR_2 = 0;

 if (VAR_0->y < VAR_1->range_box_y.left.low)
  VAR_3 = VAR_1->range_box_y.left.low - VAR_0->y;
 else if (VAR_0->y > VAR_1->range_box_y.right.high)
  VAR_3 = VAR_0->y - VAR_1->range_box_y.right.high;
 else
  VAR_3 = 0;

 return FUNC_0(VAR_2, VAR_3);
}
