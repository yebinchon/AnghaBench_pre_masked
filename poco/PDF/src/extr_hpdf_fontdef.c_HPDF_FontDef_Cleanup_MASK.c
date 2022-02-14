
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * descriptor; int (* clean_fn ) (TYPE_1__*) ;} ;
typedef TYPE_1__* HPDF_FontDef ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (HPDF_FontDef VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0 ((" HPDF_FontDef_Cleanup\n"));

    if (VAR_0->clean_fn)
        VAR_0->clean_fn (VAR_0);

    VAR_0->descriptor = ((void*)0);
}
