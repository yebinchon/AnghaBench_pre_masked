
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ uIndent; int root; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT
FUNC_4(TREEVIEW_INFO *VAR_1, UINT VAR_2)
{
    FUNC_0("\n");

    if (VAR_2 < VAR_0)
 VAR_2 = VAR_0;

    if (VAR_1->uIndent != VAR_2)
    {
 VAR_1->uIndent = VAR_2;
 FUNC_3(VAR_1, VAR_1->root);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, ((void*)0));
    }

    return 0;
}
