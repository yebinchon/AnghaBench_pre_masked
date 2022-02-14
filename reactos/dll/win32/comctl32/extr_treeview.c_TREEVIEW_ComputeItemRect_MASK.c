
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int uItemHeight; int clientWidth; TYPE_2__* firstVisible; } ;
struct TYPE_7__ {int top; int bottom; int right; scalar_t__ left; } ;
struct TYPE_9__ {int visibleOrder; int iIntegral; TYPE_1__ rect; } ;
struct TYPE_8__ {int visibleOrder; } ;
typedef TYPE_3__ TREEVIEW_ITEM ;
typedef TYPE_4__ TREEVIEW_INFO ;



__attribute__((used)) static VOID
FUNC_0(const TREEVIEW_INFO *VAR_0, TREEVIEW_ITEM *VAR_1)
{
    VAR_1->rect.top = VAR_0->uItemHeight *
 (VAR_1->visibleOrder - VAR_0->firstVisible->visibleOrder);

    VAR_1->rect.bottom = VAR_1->rect.top
 + VAR_0->uItemHeight * VAR_1->iIntegral - 1;

    VAR_1->rect.left = 0;
    VAR_1->rect.right = VAR_0->clientWidth;
}
