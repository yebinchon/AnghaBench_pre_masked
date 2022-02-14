
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * obj; scalar_t__ count; scalar_t__ block_siz; int mmgr; } ;
typedef TYPE_1__* HPDF_List ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (HPDF_List VAR_0)
{
    FUNC_1((" HPDF_List_Clear\n"));

    if (VAR_0->obj)
        FUNC_0 (VAR_0->mmgr, VAR_0->obj);

    VAR_0->block_siz = 0;
    VAR_0->count = 0;
    VAR_0->obj = ((void*)0);
}
