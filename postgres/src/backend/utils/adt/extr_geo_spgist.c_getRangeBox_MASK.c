
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int y; int x; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_14__ {TYPE_4__ high; TYPE_2__ low; } ;
struct TYPE_9__ {int high; int low; } ;
struct TYPE_11__ {int high; int low; } ;
struct TYPE_13__ {TYPE_1__ right; TYPE_3__ left; } ;
typedef TYPE_5__ RangeBox ;
typedef TYPE_6__ BOX ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static RangeBox *
FUNC_1(BOX *VAR_0)
{
 RangeBox *VAR_1 = (RangeBox *) FUNC_0(sizeof(RangeBox));

 VAR_1->left.low = VAR_0->low.x;
 VAR_1->left.high = VAR_0->high.x;

 VAR_1->right.low = VAR_0->low.y;
 VAR_1->right.high = VAR_0->high.y;

 return VAR_1;
}
