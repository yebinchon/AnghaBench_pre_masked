
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t iHotDivider; scalar_t__ uNumItem; int hwndSelf; TYPE_3__* items; } ;
struct TYPE_9__ {int bottom; int top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_11__ {TYPE_1__ rect; } ;
struct TYPE_10__ {scalar_t__ left; scalar_t__ right; int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef size_t INT ;
typedef TYPE_3__ HEADER_ITEM ;
typedef TYPE_4__ HEADER_INFO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 size_t FUNC_1 (TYPE_4__ const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const HEADER_INFO *VAR_1, RECT *VAR_2)
{
    INT VAR_3 = VAR_1->iHotDivider;
    if (VAR_1->uNumItem > 0)
    {
        HEADER_ITEM *VAR_4;

        if (VAR_3 < VAR_1->uNumItem)
        {
            VAR_4 = &VAR_1->items[VAR_3];
            VAR_2->left = VAR_4->rect.left - VAR_0/2;
            VAR_2->right = VAR_4->rect.left + VAR_0/2;
        }
        else
        {
            VAR_4 = &VAR_1->items[FUNC_1(VAR_1, VAR_1->uNumItem-1)];
            VAR_2->left = VAR_4->rect.right - VAR_0/2;
            VAR_2->right = VAR_4->rect.right + VAR_0/2;
        }
        VAR_2->top = VAR_4->rect.top;
        VAR_2->bottom = VAR_4->rect.bottom;
    }
    else
    {
        RECT VAR_5;
        FUNC_0(VAR_1->hwndSelf, &VAR_5);
        *VAR_2 = VAR_5;
        VAR_2->right = VAR_2->left + VAR_0/2;
    }
}
