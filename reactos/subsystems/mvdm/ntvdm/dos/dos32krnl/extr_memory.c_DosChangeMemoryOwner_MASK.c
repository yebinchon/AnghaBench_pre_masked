
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ OwnerPsp; } ;
typedef TYPE_1__* PDOS_MCB ;


 TYPE_1__* FUNC_0 (scalar_t__) ;

VOID FUNC_1(WORD VAR_0, WORD VAR_1)
{
    PDOS_MCB VAR_2 = FUNC_0(VAR_0 - 1);
    VAR_2->OwnerPsp = VAR_1;
}
