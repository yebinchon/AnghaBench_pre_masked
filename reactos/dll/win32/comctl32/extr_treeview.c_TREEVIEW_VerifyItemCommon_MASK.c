
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ parent; struct TYPE_3__ const* nextSibling; struct TYPE_3__ const* prevSibling; struct TYPE_3__ const* lastChild; struct TYPE_3__ const* firstChild; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(TREEVIEW_INFO *VAR_0,
          const TREEVIEW_ITEM *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));


    FUNC_0((VAR_1->firstChild == ((void*)0)) == (VAR_1->lastChild == ((void*)0)));

    FUNC_0(VAR_1->firstChild != VAR_1);
    FUNC_0(VAR_1->lastChild != VAR_1);

    if (VAR_1->firstChild)
    {
 FUNC_0(VAR_1->firstChild->parent == VAR_1);
 FUNC_0(VAR_1->firstChild->prevSibling == ((void*)0));
    }

    if (VAR_1->lastChild)
    {
 FUNC_0(VAR_1->lastChild->parent == VAR_1);
 FUNC_0(VAR_1->lastChild->nextSibling == ((void*)0));
    }

    FUNC_0(VAR_1->nextSibling != VAR_1);
    if (VAR_1->nextSibling)
    {
 FUNC_0(VAR_1->nextSibling->parent == VAR_1->parent);
 FUNC_0(VAR_1->nextSibling->prevSibling == VAR_1);
    }

    FUNC_0(VAR_1->prevSibling != VAR_1);
    if (VAR_1->prevSibling)
    {
 FUNC_0(VAR_1->prevSibling->parent == VAR_1->parent);
 FUNC_0(VAR_1->prevSibling->nextSibling == VAR_1);
    }
}
