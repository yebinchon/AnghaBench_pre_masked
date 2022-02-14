
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* firstChild; struct TYPE_5__* lastChild; struct TYPE_5__* prevSibling; struct TYPE_5__* nextSibling; struct TYPE_5__* parent; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(TREEVIEW_ITEM *VAR_0, TREEVIEW_ITEM *VAR_1,
       TREEVIEW_ITEM *VAR_2)
{
    FUNC_0(VAR_2 != ((void*)0));

    if (VAR_1 != ((void*)0))
    {
 FUNC_0(VAR_1->parent == VAR_2);

 if (VAR_1->nextSibling != ((void*)0))
     VAR_1->nextSibling->prevSibling = VAR_0;

 VAR_0->nextSibling = VAR_1->nextSibling;
 VAR_1->nextSibling = VAR_0;
    }
    else
       VAR_0->nextSibling = ((void*)0);

    VAR_0->prevSibling = VAR_1;

    if (VAR_2->lastChild == VAR_1)
 VAR_2->lastChild = VAR_0;

    if (VAR_2->firstChild == ((void*)0))
 VAR_2->firstChild = VAR_0;
}
