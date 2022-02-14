
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ DeviceType; struct TYPE_3__* Next; } ;
typedef TYPE_1__* PDEVICE_LIST ;
typedef int DWORD ;


 TYPE_1__* VAR_0 ;

DWORD FUNC_0(UINT VAR_1)
{
    int VAR_2;
    PDEVICE_LIST VAR_3;

    for (VAR_3 = VAR_0, VAR_2 = 0; VAR_3 != ((void*)0); VAR_3 = VAR_3->Next)
        if (VAR_3->DeviceType == VAR_1)
            VAR_2 ++;

    return VAR_2;
}
