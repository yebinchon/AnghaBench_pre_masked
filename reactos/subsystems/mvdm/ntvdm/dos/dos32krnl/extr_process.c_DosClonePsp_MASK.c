
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int VOID ;
typedef int ULONG_PTR ;
struct TYPE_6__ {int HandleTableSize; int HandleTablePtr; scalar_t__ ParentPsp; void* CriticalAddress; void* BreakAddress; void* TerminateAddress; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef void** LPDWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int ) ;

VOID FUNC_4(WORD VAR_2, WORD VAR_3)
{
    PDOS_PSP VAR_4 = FUNC_3(VAR_2);
    PDOS_PSP VAR_5 = FUNC_3(VAR_3);
    LPDWORD VAR_6 = (LPDWORD)((ULONG_PTR)VAR_0);


    FUNC_2(VAR_4, VAR_5, sizeof(*VAR_4));


    VAR_4->TerminateAddress = VAR_6[0x22];
    VAR_4->BreakAddress = VAR_6[0x23];
    VAR_4->CriticalAddress = VAR_6[0x24];


    VAR_4->ParentPsp = 0;


    VAR_4->HandleTableSize = VAR_1;
    VAR_4->HandleTablePtr = FUNC_1(0x18, VAR_2);


    FUNC_2(FUNC_0(VAR_4->HandleTablePtr),
                  FUNC_0(VAR_5->HandleTablePtr),
                  VAR_1);
}
