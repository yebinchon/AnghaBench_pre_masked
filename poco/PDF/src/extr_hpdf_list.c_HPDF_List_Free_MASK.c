
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mmgr; } ;
typedef TYPE_1__* HPDF_List ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (HPDF_List VAR_0)
{
    FUNC_2((" HPDF_List_Free\n"));

    if (!VAR_0)
        return ;

    FUNC_1 (VAR_0);
    FUNC_0 (VAR_0->mmgr, VAR_0);
}
