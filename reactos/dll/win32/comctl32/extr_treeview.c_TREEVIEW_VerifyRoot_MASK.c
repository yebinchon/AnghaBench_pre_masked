
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* root; } ;
struct TYPE_8__ {int iLevel; int * prevSibling; int * parent; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(TREEVIEW_INFO *VAR_0)
{
    TREEVIEW_ITEM *VAR_1 = VAR_0->root;

    FUNC_2(VAR_1 != ((void*)0));
    FUNC_2(VAR_1->iLevel == -1);
    FUNC_2(VAR_1->parent == ((void*)0));
    FUNC_2(VAR_1->prevSibling == ((void*)0));

    FUNC_1(VAR_0, VAR_1);

    FUNC_0(VAR_0, VAR_1);
}
