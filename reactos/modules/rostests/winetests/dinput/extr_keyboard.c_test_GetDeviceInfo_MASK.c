
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int instA ;
typedef int inst3A ;
struct TYPE_5__ {int dwSize; int dwDevType; int guidProduct; int guidInstance; } ;
struct TYPE_4__ {int dwSize; int dwDevType; int guidProduct; int guidInstance; } ;
typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int HRESULT ;
typedef TYPE_1__ DIDEVICEINSTANCE_DX3A ;
typedef TYPE_2__ DIDEVICEINSTANCEA ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int *,int **,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(IDirectInputA *VAR_1)
{
    HRESULT VAR_2;
    IDirectInputDeviceA *VAR_3 = ((void*)0);
    DIDEVICEINSTANCEA VAR_4;
    DIDEVICEINSTANCE_DX3A VAR_5;

    VAR_2 = FUNC_2(VAR_1, &VAR_0, &VAR_3, ((void*)0));
    FUNC_6(FUNC_5(VAR_2), "IDirectInput_CreateDevice() failed: %08x\n", VAR_2);
    if (FUNC_0(VAR_2)) return;

    VAR_4.dwSize = sizeof(VAR_4);
    VAR_2 = FUNC_1(VAR_3, &VAR_4);
    FUNC_6(FUNC_5(VAR_2), "got %08x\n", VAR_2);

    VAR_5.dwSize = sizeof(VAR_5);
    VAR_2 = FUNC_1(VAR_3, (DIDEVICEINSTANCEA *)&VAR_5);
    FUNC_6(FUNC_5(VAR_2), "got %08x\n", VAR_2);

    FUNC_6(VAR_4.dwSize != VAR_5.dwSize, "got %d, %d \n", VAR_4.dwSize, VAR_5.dwSize);
    FUNC_6(FUNC_4(&VAR_4.guidInstance, &VAR_5.guidInstance), "got %s, %s\n",
            FUNC_7(&VAR_4.guidInstance), FUNC_7(&VAR_5.guidInstance) );
    FUNC_6(FUNC_4(&VAR_4.guidProduct, &VAR_5.guidProduct), "got %s, %s\n",
            FUNC_7(&VAR_4.guidProduct), FUNC_7(&VAR_5.guidProduct) );
    FUNC_6(VAR_4.dwDevType == VAR_5.dwDevType, "got %d, %d\n", VAR_4.dwDevType, VAR_5.dwDevType);

    FUNC_3(VAR_3);
}
