
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int items; } ;
struct TYPE_10__ {scalar_t__ iLevel; struct TYPE_10__ const* parent; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 int FUNC_0 (int ,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void
FUNC_4(TREEVIEW_INFO *VAR_0, const TREEVIEW_ITEM *VAR_1)
{
    FUNC_3(VAR_1 != ((void*)0));

    FUNC_3(VAR_1->parent != ((void*)0));
    FUNC_3(VAR_1->parent != VAR_1);
    FUNC_3(VAR_1->iLevel == VAR_1->parent->iLevel + 1);

    FUNC_3(FUNC_0(VAR_0->items, VAR_1) != -1);

    FUNC_2(VAR_0, VAR_1);

    FUNC_1(VAR_0, VAR_1);
}
