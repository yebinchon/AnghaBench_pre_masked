
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* root; } ;
struct TYPE_6__ {int state; struct TYPE_6__* lastChild; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 int VAR_0 ;

__attribute__((used)) static TREEVIEW_ITEM *
FUNC_0(const TREEVIEW_INFO *VAR_1, TREEVIEW_ITEM *VAR_2)
{
    if (!VAR_2) return ((void*)0);

    while (VAR_2->lastChild)
    {
       if (VAR_2->state & VAR_0)
          VAR_2 = VAR_2->lastChild;
       else
          break;
    }

    if (VAR_2 == VAR_1->root)
        return ((void*)0);

    return VAR_2;
}
