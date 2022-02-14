
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; struct TYPE_4__* nextSibling; struct TYPE_4__* parent; struct TYPE_4__* firstChild; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;


 int VAR_0 ;

__attribute__((used)) static TREEVIEW_ITEM *
FUNC_0(const TREEVIEW_INFO *VAR_1, const TREEVIEW_ITEM *VAR_2)
{



    if ((VAR_2->state & VAR_0) && VAR_2->firstChild != ((void*)0))
    {
 return VAR_2->firstChild;
    }





    if (VAR_2->nextSibling)
 return VAR_2->nextSibling;




    while (VAR_2->parent)
    {
 VAR_2 = VAR_2->parent;

 if (VAR_2->nextSibling)
     return VAR_2->nextSibling;
    }

    return ((void*)0);
}
