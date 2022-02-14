
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* nextSibling; struct TYPE_4__* firstChild; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;


 int FUNC_0 (int *,TYPE_1__ const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(TREEVIEW_INFO *VAR_0, const TREEVIEW_ITEM *VAR_1)
{
    const TREEVIEW_ITEM *VAR_2;
    FUNC_1(VAR_1 != ((void*)0));

    for (VAR_2 = VAR_1->firstChild; VAR_2 != ((void*)0); VAR_2 = VAR_2->nextSibling)
 FUNC_0(VAR_0, VAR_2);
}
