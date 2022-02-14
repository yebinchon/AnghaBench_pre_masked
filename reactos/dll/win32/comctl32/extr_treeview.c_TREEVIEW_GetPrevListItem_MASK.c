
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ root; } ;
struct TYPE_8__ {int state; scalar_t__ parent; int * lastChild; struct TYPE_8__* prevSibling; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 TYPE_1__* FUNC_0 (TYPE_2__ const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static TREEVIEW_ITEM *
FUNC_1(const TREEVIEW_INFO *VAR_1, const TREEVIEW_ITEM *VAR_2)
{
    if (VAR_2->prevSibling)
    {

 TREEVIEW_ITEM *VAR_3 = VAR_2->prevSibling;

 if ((VAR_3->state & VAR_0) && VAR_3->lastChild != ((void*)0))
     return FUNC_0(VAR_1, VAR_3->lastChild);
 else
     return VAR_3;
    }
    else
    {

 return (VAR_2->parent != VAR_1->root) ? VAR_2->parent : ((void*)0);
    }
}
