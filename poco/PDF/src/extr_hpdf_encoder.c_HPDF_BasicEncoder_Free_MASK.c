
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * attr; int mmgr; } ;
typedef TYPE_1__* HPDF_Encoder ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (HPDF_Encoder VAR_0)
{
    FUNC_1 ((" HPDF_BasicEncoder_Free\n"));

    FUNC_0 (VAR_0->mmgr, VAR_0->attr);
    VAR_0->attr = ((void*)0);
}
