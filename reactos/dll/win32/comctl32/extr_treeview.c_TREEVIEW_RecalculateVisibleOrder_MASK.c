
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int maxVisibleOrder; TYPE_1__* root; } ;
struct TYPE_15__ {int visibleOrder; scalar_t__ iIntegral; } ;
struct TYPE_14__ {TYPE_2__* firstChild; } ;
typedef TYPE_2__ TREEVIEW_ITEM ;
typedef TYPE_3__ TREEVIEW_INFO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(TREEVIEW_INFO *VAR_0, TREEVIEW_ITEM *VAR_1)
{
    TREEVIEW_ITEM *VAR_2;
    int VAR_3;

    if (!VAR_1)
    {
 VAR_1 = VAR_0->root->firstChild;
 VAR_3 = 0;
    }
    else
 VAR_3 = VAR_1->visibleOrder;

    for (VAR_2 = VAR_1; VAR_2 != ((void*)0);
         VAR_2 = FUNC_3(VAR_0, VAR_2))
    {
 if (!FUNC_0(VAR_2) && VAR_3 > 0)
  FUNC_1(VAR_0, VAR_2);
 VAR_2->visibleOrder = VAR_3;
 VAR_3 += VAR_2->iIntegral;
    }

    VAR_0->maxVisibleOrder = VAR_3;

    for (VAR_2 = VAR_1; VAR_2 != ((void*)0);
  VAR_2 = FUNC_3(VAR_0, VAR_2))
    {
 FUNC_2(VAR_0, VAR_2);
    }
}
