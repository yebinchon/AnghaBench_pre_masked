
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pszText; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;


 int * VAR_0 ;
 char const* FUNC_0 (int *) ;

__attribute__((used)) static const char *
FUNC_1(const TREEVIEW_ITEM *VAR_1)
{
    if (VAR_1 == ((void*)0)) return "<null item>";
    if (VAR_1->pszText == VAR_0) return "<callback>";
    if (VAR_1->pszText == ((void*)0)) return "<null>";
    return FUNC_0(VAR_1->pszText);
}
