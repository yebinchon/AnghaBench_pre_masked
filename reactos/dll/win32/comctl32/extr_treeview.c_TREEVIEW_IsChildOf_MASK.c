
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_0(const TREEVIEW_ITEM *VAR_2, const TREEVIEW_ITEM *VAR_3)
{
    do
    {
 VAR_3 = VAR_3->parent;
 if (VAR_3 == VAR_2) return VAR_1;
    } while (VAR_3 != ((void*)0));

    return VAR_0;
}
