
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8 ;
struct TYPE_22__ {int high; int low; } ;
struct TYPE_21__ {int high; int low; } ;
struct TYPE_23__ {TYPE_6__ right; TYPE_5__ left; } ;
struct TYPE_18__ {int high; int low; } ;
struct TYPE_17__ {int high; int low; } ;
struct TYPE_19__ {TYPE_2__ right; TYPE_1__ left; } ;
struct TYPE_25__ {TYPE_7__ range_box_y; TYPE_3__ range_box_x; } ;
struct TYPE_24__ {int high; int low; } ;
struct TYPE_20__ {int high; int low; } ;
struct TYPE_16__ {TYPE_8__ right; TYPE_4__ left; } ;
typedef TYPE_9__ RectBox ;
typedef TYPE_10__ RangeBox ;


 int FUNC_0 (TYPE_9__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static RectBox *
FUNC_2(RectBox *VAR_0, RangeBox *VAR_1, uint8 VAR_2)
{
 RectBox *VAR_3 = (RectBox *) FUNC_1(sizeof(RectBox));

 FUNC_0(VAR_3, VAR_0, sizeof(RectBox));

 if (VAR_2 & 0x8)
  VAR_3->range_box_x.left.low = VAR_1->left.low;
 else
  VAR_3->range_box_x.left.high = VAR_1->left.low;

 if (VAR_2 & 0x4)
  VAR_3->range_box_x.right.low = VAR_1->left.high;
 else
  VAR_3->range_box_x.right.high = VAR_1->left.high;

 if (VAR_2 & 0x2)
  VAR_3->range_box_y.left.low = VAR_1->right.low;
 else
  VAR_3->range_box_y.left.high = VAR_1->right.low;

 if (VAR_2 & 0x1)
  VAR_3->range_box_y.right.low = VAR_1->right.high;
 else
  VAR_3->range_box_y.right.high = VAR_1->right.high;

 return VAR_3;
}
