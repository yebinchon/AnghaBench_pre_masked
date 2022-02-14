
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {unsigned int uNumItem; TYPE_3__* items; int hwndSelf; int bRectsValid; } ;
struct TYPE_8__ {int left; scalar_t__ right; int bottom; int top; } ;
struct TYPE_10__ {scalar_t__ cxy; TYPE_1__ rect; } ;
struct TYPE_9__ {int left; int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ HEADER_ITEM ;
typedef TYPE_4__ HEADER_INFO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 size_t FUNC_1 (TYPE_4__*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (HEADER_INFO *VAR_1)
{
    HEADER_ITEM *VAR_2;
    RECT VAR_3;
    unsigned int VAR_4;
    int VAR_5;

    VAR_1->bRectsValid = VAR_0;

    if (VAR_1->uNumItem == 0)
        return;

    FUNC_0 (VAR_1->hwndSelf, &VAR_3);

    VAR_5 = VAR_3.left;
    for (VAR_4 = 0; VAR_4 < VAR_1->uNumItem; VAR_4++) {
        VAR_2 = &VAR_1->items[FUNC_1(VAR_1,VAR_4)];
        VAR_2->rect.top = VAR_3.top;
        VAR_2->rect.bottom = VAR_3.bottom;
        VAR_2->rect.left = VAR_5;
        VAR_2->rect.right = VAR_2->rect.left + ((VAR_2->cxy>0)?VAR_2->cxy:0);
        VAR_5 = VAR_2->rect.right;
    }
}
