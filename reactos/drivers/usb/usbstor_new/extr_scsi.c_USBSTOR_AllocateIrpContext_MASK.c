
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cbw; } ;
typedef TYPE_1__* PIRP_CONTEXT ;
typedef scalar_t__ PCBW ;
typedef int IRP_CONTEXT ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

PIRP_CONTEXT
FUNC_2()
{
    PIRP_CONTEXT VAR_1;




    VAR_1 = (PIRP_CONTEXT)FUNC_0(VAR_0, sizeof(IRP_CONTEXT));
    if (!VAR_1)
    {



        return ((void*)0);
    }




    VAR_1->cbw = (PCBW)FUNC_0(VAR_0, 512);
    if (!VAR_1->cbw)
    {



        FUNC_1(VAR_1);
        return ((void*)0);
    }




    return VAR_1;

}
