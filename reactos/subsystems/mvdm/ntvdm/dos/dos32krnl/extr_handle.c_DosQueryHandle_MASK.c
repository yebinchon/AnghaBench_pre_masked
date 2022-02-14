
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_5__ {scalar_t__ CurrentPsp; } ;
struct TYPE_4__ {int HandleTablePtr; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef int* LPBYTE ;
typedef int BYTE ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

BYTE FUNC_3(WORD VAR_2)
{
    PDOS_PSP VAR_3;
    LPBYTE VAR_4;

    FUNC_0("DosQueryHandle: DosHandle 0x%04X\n", VAR_2);


    if (VAR_1->CurrentPsp == VAR_0) return 0xFF;


    VAR_3 = FUNC_2(VAR_1->CurrentPsp);
    VAR_4 = (LPBYTE)FUNC_1(VAR_3->HandleTablePtr);


    return VAR_4[VAR_2];
}
