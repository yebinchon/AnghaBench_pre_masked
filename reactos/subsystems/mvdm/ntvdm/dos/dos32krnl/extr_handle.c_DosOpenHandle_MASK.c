
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
struct TYPE_6__ {size_t HandleTableSize; int HandleTablePtr; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef TYPE_2__* PDOS_FILE_DESCRIPTOR ;
typedef int* LPBYTE ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_0 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;

WORD FUNC_4(BYTE VAR_3)
{
    WORD VAR_4;
    PDOS_PSP VAR_5;
    LPBYTE VAR_6;
    PDOS_FILE_DESCRIPTOR VAR_7 = FUNC_1(VAR_3);

    FUNC_0("DosOpenHandle: DescriptorId 0x%02X\n", VAR_3);


    if (VAR_7 == ((void*)0)) return VAR_0;


    if (VAR_2->CurrentPsp == VAR_1) return VAR_0;


    VAR_5 = FUNC_3(VAR_2->CurrentPsp);
    VAR_6 = (LPBYTE)FUNC_2(VAR_5->HandleTablePtr);


    for (VAR_4 = 0; VAR_4 < VAR_5->HandleTableSize; VAR_4++)
    {
        if (VAR_6[VAR_4] == 0xFF) break;
    }


    if (VAR_4 == VAR_5->HandleTableSize) return VAR_0;


    VAR_7->RefCount++;


    VAR_6[VAR_4] = VAR_3;


    return VAR_4;
}
