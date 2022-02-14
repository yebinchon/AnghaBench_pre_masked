
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int uNumItems; } ;
struct TYPE_14__ {scalar_t__ pszText; scalar_t__ firstChild; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(TREEVIEW_INFO *VAR_5, TREEVIEW_ITEM *VAR_6)
{
    FUNC_0("%p, (%s)\n", VAR_6, FUNC_2(VAR_6));

    if (VAR_6->firstChild)
 FUNC_3(VAR_5, VAR_6);

    FUNC_4(VAR_5, VAR_4, VAR_1,
    VAR_2 | VAR_3, VAR_6, 0);

    FUNC_5(VAR_6);

    VAR_5->uNumItems--;

    if (VAR_6->pszText != VAR_0)
        FUNC_6(VAR_6->pszText);

    FUNC_1(VAR_5, VAR_6);
}
