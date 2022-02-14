
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ DeviceInstanceData; struct TYPE_3__* Next; } ;
typedef TYPE_1__* PDEVICE_LIST ;
typedef int LPVOID ;
typedef int LPSTR ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

VOID FUNC_2()
{
    PDEVICE_LIST VAR_2;

    FUNC_0("FreeDeviceList()\n");

    while (VAR_0)
    {
        VAR_2 = VAR_0;
        VAR_0 = VAR_2->Next;

        if (VAR_2->DeviceInstanceData)
            FUNC_1(VAR_1, 0, (LPVOID)VAR_2->DeviceInstanceData);

        FUNC_1(VAR_1, 0, (LPSTR)VAR_2);
    }
}
