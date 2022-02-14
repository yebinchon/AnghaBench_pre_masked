
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_12__ {scalar_t__ CurrentPsp; } ;
struct TYPE_11__ {int (* CloseRoutine ) (TYPE_3__*) ;} ;
struct TYPE_10__ {int DeviceInfo; int Win32Handle; int DevicePointer; int RefCount; } ;
struct TYPE_9__ {int HandleTablePtr; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef TYPE_2__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_3__* PDOS_DEVICE_NODE ;
typedef int* LPBYTE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;

BOOLEAN FUNC_7(WORD VAR_5)
{
    PDOS_PSP VAR_6;
    LPBYTE VAR_7;
    PDOS_FILE_DESCRIPTOR VAR_8;

    FUNC_1("DosCloseHandle: DosHandle 0x%04X\n", VAR_5);


    if (VAR_3->CurrentPsp == VAR_2) return VAR_0;


    VAR_6 = FUNC_5(VAR_3->CurrentPsp);
    VAR_7 = (LPBYTE)FUNC_4(VAR_6->HandleTablePtr);


    if (VAR_7[VAR_5] == 0xFF) return VAR_0;


    VAR_8 = FUNC_3(VAR_7[VAR_5]);
    if (VAR_8 == ((void*)0)) return VAR_0;


    VAR_8->RefCount--;


    if (!VAR_8->RefCount)
    {
        if (VAR_8->DeviceInfo & VAR_1)
        {
            PDOS_DEVICE_NODE VAR_9 = FUNC_2(VAR_8->DevicePointer);


            if (VAR_9->CloseRoutine) VAR_9->CloseRoutine(VAR_9);
        }
        else
        {

            FUNC_0(VAR_8->Win32Handle);
        }
    }


    VAR_7[VAR_5] = 0xFF;

    return VAR_4;
}
