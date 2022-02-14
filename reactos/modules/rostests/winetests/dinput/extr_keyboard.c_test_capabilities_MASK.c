
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int caps ;
struct TYPE_3__ {int dwSize; int dwFlags; int dwDevType; } ;
typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int HWND ;
typedef int HRESULT ;
typedef TYPE_1__ DIDEVCAPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_9(IDirectInputA *VAR_6, HWND VAR_7)
{
    HRESULT VAR_8;
    IDirectInputDeviceA *VAR_9 = ((void*)0);
    DIDEVCAPS VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_8 = FUNC_5(VAR_6, &VAR_5, &VAR_9, ((void*)0));
    FUNC_8(FUNC_7(VAR_8), "IDirectInput_CreateDevice() failed: %08x\n", VAR_8);
    if (FUNC_0(VAR_8)) return;

    VAR_10.dwSize = sizeof(VAR_10);
    VAR_8 = FUNC_4(VAR_9, &VAR_10);

    FUNC_8 (FUNC_7(VAR_8), "GetCapabilities failed: 0x%08x\n", VAR_8);
    FUNC_8 (VAR_10.dwFlags & VAR_0, "GetCapabilities dwFlags: 0x%08x\n", VAR_10.dwFlags);
    FUNC_8 (FUNC_2(VAR_10.dwDevType) == VAR_4,
        "GetCapabilities invalid device type for dwDevType: 0x%08x\n", VAR_10.dwDevType);
    VAR_11 = FUNC_3(0);
    VAR_12 = FUNC_3(1);
    VAR_13 = FUNC_1(VAR_10.dwDevType);
    if (VAR_11 == 4 || (VAR_11 == 7 && VAR_12 == 0))
        FUNC_8 (VAR_13 == VAR_2,
            "GetCapabilities invalid device subtype for dwDevType: 0x%08x (%04x:%04x)\n",
            VAR_10.dwDevType, VAR_11, VAR_12);
    else if (VAR_11 == 7 && VAR_12 == 2)
        FUNC_8 (VAR_13 == VAR_1,
            "GetCapabilities invalid device subtype for dwDevType: 0x%08x (%04x:%04x)\n",
            VAR_10.dwDevType, VAR_11, VAR_12);
    else
        FUNC_8 (VAR_13 != VAR_3,
            "GetCapabilities invalid device subtype for dwDevType: 0x%08x (%04x:%04x)\n",
            VAR_10.dwDevType, VAR_11, VAR_12);

    FUNC_6(VAR_9);
}
