
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* items; scalar_t__ uNumItem; } ;
struct TYPE_9__ {int bottom; int top; int right; int left; } ;
struct TYPE_7__ {int bottom; int top; int right; int left; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
typedef int LRESULT ;
typedef TYPE_3__* LPRECT ;
typedef size_t INT ;
typedef TYPE_4__ HEADER_INFO ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_0 (const HEADER_INFO *VAR_2, INT VAR_3, LPRECT VAR_4)
{
    if ((VAR_3 < 0) || (VAR_3 >= (INT)VAR_2->uNumItem))
        return VAR_0;

    VAR_4->left = VAR_2->items[VAR_3].rect.left;
    VAR_4->right = VAR_2->items[VAR_3].rect.right;
    VAR_4->top = VAR_2->items[VAR_3].rect.top;
    VAR_4->bottom = VAR_2->items[VAR_3].rect.bottom;

    return VAR_1;
}
