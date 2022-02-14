
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VOID ;
typedef int ULONG_PTR ;
struct TYPE_8__ {int DosVersion; } ;
struct TYPE_7__ {scalar_t__ CurrentPsp; } ;
struct TYPE_6__ {int* Exit; scalar_t__ LastParagraph; scalar_t__ ParentPsp; int* FarCall; int DosVersion; int HandleTablePtr; int HandleTableSize; int HandleTable; int EnvBlock; void* CriticalAddress; void* BreakAddress; void* TerminateAddress; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef void** LPDWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

VOID FUNC_4(WORD VAR_5, WORD VAR_6)
{
    PDOS_PSP VAR_7 = FUNC_3(VAR_5);
    LPDWORD VAR_8 = (LPDWORD)((ULONG_PTR)VAR_0);

    FUNC_2(VAR_7, sizeof(*VAR_7));


    VAR_7->Exit[0] = 0xCD;
    VAR_7->Exit[1] = 0x20;


    VAR_7->LastParagraph = VAR_5 + VAR_6;


    VAR_7->TerminateAddress = VAR_8[0x22];
    VAR_7->BreakAddress = VAR_8[0x23];
    VAR_7->CriticalAddress = VAR_8[0x24];


    VAR_7->ParentPsp = VAR_4->CurrentPsp;

    if (VAR_4->CurrentPsp != VAR_3)
    {

        VAR_7->EnvBlock = FUNC_3(VAR_4->CurrentPsp)->EnvBlock;
    }
    FUNC_0(VAR_7->HandleTable);


    VAR_7->HandleTableSize = VAR_1;
    VAR_7->HandleTablePtr = FUNC_1(0x18, VAR_5);



    VAR_7->DosVersion = VAR_2->DosVersion;


    VAR_7->FarCall[0] = 0xCD;
    VAR_7->FarCall[1] = 0x21;
    VAR_7->FarCall[2] = 0xCB;
}
