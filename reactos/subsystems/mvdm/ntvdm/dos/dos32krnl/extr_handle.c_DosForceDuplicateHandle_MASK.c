
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_8__ {scalar_t__ CurrentPsp; } ;
struct TYPE_7__ {int RefCount; } ;
struct TYPE_6__ {int HandleTablePtr; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef TYPE_2__* PDOS_FILE_DESCRIPTOR ;
typedef int* LPBYTE ;
typedef int BYTE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,size_t,size_t) ;
 int FUNC_1 (size_t) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

BOOLEAN FUNC_5(WORD VAR_4, WORD VAR_5)
{
    BYTE VAR_6;
    PDOS_PSP VAR_7;
    LPBYTE VAR_8;
    PDOS_FILE_DESCRIPTOR VAR_9;

    FUNC_0("DosForceDuplicateHandle: OldHandle 0x%04X, NewHandle 0x%04X\n",
           VAR_4,
           VAR_5);


    if (VAR_2->CurrentPsp == VAR_1) return VAR_0;


    VAR_7 = FUNC_4(VAR_2->CurrentPsp);
    VAR_8 = (LPBYTE)FUNC_3(VAR_7->HandleTablePtr);


    if (VAR_8[VAR_4] == 0xFF) return VAR_0;


    if (VAR_8[VAR_5] != 0xFF)
    {

        FUNC_1(VAR_5);
    }

    VAR_6 = VAR_8[VAR_4];
    VAR_9 = FUNC_2(VAR_6);
    if (VAR_9 == ((void*)0)) return VAR_0;


    VAR_9->RefCount++;


    VAR_8[VAR_5] = VAR_6;


    return VAR_3;
}
