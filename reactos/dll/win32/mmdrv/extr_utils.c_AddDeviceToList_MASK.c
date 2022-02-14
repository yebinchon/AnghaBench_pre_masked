
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {struct TYPE_3__* Next; int * DeviceInstanceData; int Name; void* CardIndex; void* DeviceType; } ;
typedef TYPE_1__* PDEVICE_LIST ;
typedef int LPWSTR ;
typedef void* DWORD ;
typedef int DEVICE_LIST ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

BOOL FUNC_5(PDEVICE_LIST* VAR_4, DWORD VAR_5, DWORD VAR_6,
                     LPWSTR VAR_7)
{
    PDEVICE_LIST VAR_8;

    FUNC_0("AddDeviceToList()\n");

    VAR_8 = (PDEVICE_LIST) FUNC_1(VAR_2, 0,
        sizeof(DEVICE_LIST) + FUNC_4(VAR_7) * sizeof(WCHAR));

    if ( !VAR_8 )
    {
        FUNC_2(VAR_0);
        return VAR_1;
    }

    VAR_8->DeviceType = VAR_5;
    VAR_8->CardIndex = VAR_6;
    FUNC_3(VAR_8->Name, VAR_7);
    VAR_8->DeviceInstanceData = ((void*)0);
    VAR_8->Next = *VAR_4;
    *VAR_4 = VAR_8;

    FUNC_0("Success!\n");

    return VAR_3;
}
