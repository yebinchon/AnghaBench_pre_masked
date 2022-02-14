
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mouse_state ;
typedef int m_state ;
typedef int di_op ;
struct TYPE_5__ {int dwSize; int dwHeaderSize; int dwObj; int dwHow; } ;
struct TYPE_4__ {int dwData; TYPE_3__ diph; } ;
typedef int LPCDIPROPHEADER ;
typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int * HWND ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int DIPROPHEADER ;
typedef TYPE_1__ DIPROPDWORD ;
typedef int DIMOUSESTATE ;
typedef int DIDEVICEOBJECTDATA ;


 int * FUNC_0 (char*,char*,int ,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int *,int*,int ) ;
 scalar_t__ FUNC_7 (int *,int,int *) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int *,int **,int *) ;
 int FUNC_14 (int *) ;
 int VAR_13 ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (TYPE_1__*,int ,int) ;
 int FUNC_19 (int ,int,int,int ,int ) ;
 int FUNC_20 (int,char*,scalar_t__,...) ;
 int FUNC_21 (char*) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_22(IDirectInputA *VAR_19, HWND VAR_20)
{
    HRESULT VAR_21;
    IDirectInputDeviceA *VAR_22 = ((void*)0);
    DIMOUSESTATE VAR_23;
    HWND VAR_24;
    DIPROPDWORD VAR_25;
    DIDEVICEOBJECTDATA VAR_26;
    DWORD VAR_27;
    int VAR_28;

    if (! FUNC_17(VAR_20))
    {
        FUNC_21("Not running as foreground app, skipping acquire tests\n");
        return;
    }

    VAR_21 = FUNC_13(VAR_19, &VAR_12, &VAR_22, ((void*)0));
    FUNC_20(FUNC_15(VAR_21), "IDirectInput_CreateDevice() failed: %08x\n", VAR_21);
    if (FUNC_3(VAR_21)) return;

    VAR_21 = FUNC_9(VAR_22, VAR_20, VAR_10 | VAR_9);
    FUNC_20(VAR_21 == VAR_15, "SetCooperativeLevel: %08x\n", VAR_21);

    FUNC_18(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.dwData = 5;
    VAR_25.diph.dwHow = VAR_6;
    VAR_25.diph.dwSize = sizeof(DIPROPDWORD);
    VAR_25.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_21 = FUNC_11(VAR_22, VAR_7, (LPCDIPROPHEADER)&VAR_25);
    FUNC_20(VAR_21 == VAR_15, "SetProperty() failed: %08x\n", VAR_21);

    VAR_21 = FUNC_10(VAR_22, &VAR_17);
    FUNC_20(FUNC_15(VAR_21), "IDirectInputDevice_SetDataFormat() failed: %08x\n", VAR_21);
    VAR_21 = FUNC_12(VAR_22);
    FUNC_20(VAR_21 == VAR_14, "IDirectInputDevice_Unacquire() should have failed: %08x\n", VAR_21);
    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(FUNC_15(VAR_21), "IDirectInputDevice_Acquire() failed: %08x\n", VAR_21);
    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(VAR_21 == VAR_14, "IDirectInputDevice_Acquire() should have failed: %08x\n", VAR_21);




    VAR_24 = FUNC_0("static", "Temporary", VAR_16, 10, 210, 200, 200, ((void*)0), ((void*)0), ((void*)0),
                          ((void*)0));
    FUNC_20(VAR_24 != ((void*)0), "CreateWindowA failed with %u\n", FUNC_4());

    VAR_21 = FUNC_7(VAR_22, sizeof(VAR_23), &VAR_23);
    FUNC_20(VAR_21 == VAR_1, "GetDeviceState() should have failed: %08x\n", VAR_21);

    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(VAR_21 == VAR_2, "Acquire() should have failed: %08x\n", VAR_21);

    FUNC_16( VAR_20 );
    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(VAR_21 == VAR_15, "Acquire() failed: %08x\n", VAR_21);

if (!VAR_18)
    FUNC_21("ROSTESTS-176/CORE-9710: Skipping randomly failing tests\n");
else {

    FUNC_19(VAR_13, 10, 10, 0, 0);
    VAR_27 = 1;
    VAR_21 = FUNC_6(VAR_22, sizeof(VAR_26), &VAR_26, &VAR_27, 0);
    FUNC_20(VAR_21 == VAR_15 && VAR_27 > 0, "GetDeviceData() failed: %08x cnt:%d\n", VAR_21, VAR_27);

    FUNC_19(VAR_13, 10, 10, 0, 0);
    VAR_21 = FUNC_12(VAR_22);
    FUNC_20(VAR_21 == VAR_15, "Failed: %08x\n", VAR_21);
    VAR_27 = 1;
    VAR_21 = FUNC_6(VAR_22, sizeof(VAR_26), &VAR_26, &VAR_27, 0);
    FUNC_20(VAR_21 == VAR_15 && VAR_27 > 0, "GetDeviceData() failed: %08x cnt:%d\n", VAR_21, VAR_27);

    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(VAR_21 == VAR_15, "Failed: %08x\n", VAR_21);
    FUNC_19(VAR_13, 10, 10, 0, 0);
    VAR_21 = FUNC_12(VAR_22);
    FUNC_20(VAR_21 == VAR_15, "Failed: %08x\n", VAR_21);

    VAR_21 = FUNC_5(VAR_22);
    FUNC_20(VAR_21 == VAR_15, "Failed: %08x\n", VAR_21);
    VAR_27 = 1;
    VAR_21 = FUNC_6(VAR_22, sizeof(VAR_26), &VAR_26, &VAR_27, 0);
    FUNC_20(VAR_21 == VAR_15 && VAR_27 > 0, "GetDeviceData() failed: %08x cnt:%d\n", VAR_21, VAR_27);


    for (VAR_28 = 0; VAR_28 < 6; VAR_28++)
        FUNC_19(VAR_13, 10 + VAR_28, 10 + VAR_28, 0, 0);

    VAR_27 = 1;
    VAR_21 = FUNC_6(VAR_22, sizeof(VAR_26), &VAR_26, &VAR_27, 0);
    FUNC_20(VAR_21 == VAR_11, "GetDeviceData() failed: %08x cnt:%d\n", VAR_21, VAR_27);
    VAR_27 = 1;
    VAR_21 = FUNC_6(VAR_22, sizeof(VAR_26), &VAR_26, &VAR_27, 0);
    FUNC_20(VAR_21 == VAR_11 && VAR_27 == 1, "GetDeviceData() failed: %08x cnt:%d\n", VAR_21, VAR_27);


    FUNC_18(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.diph.dwHow = VAR_5;
    VAR_25.diph.dwObj = VAR_3;
    VAR_25.diph.dwSize = sizeof(DIPROPDWORD);
    VAR_25.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_21 = FUNC_8(VAR_22, VAR_8, &VAR_25.diph);

    FUNC_20(VAR_21 == VAR_15 && VAR_25.dwData == 1, "GetProperty(): %08x, dwData: %i but should be 1.\n", VAR_21, VAR_25.dwData);


    FUNC_18(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.diph.dwHow = VAR_4;

    VAR_25.diph.dwObj = (FUNC_1(1) | VAR_0);
    VAR_25.diph.dwSize = sizeof(DIPROPDWORD);
    VAR_25.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_21 = FUNC_8(VAR_22, VAR_8, &VAR_25.diph);

    FUNC_20(VAR_21 == VAR_15 && VAR_25.dwData == 1, "GetProperty(): %08x, dwData: %i but should be 1.\n", VAR_21, VAR_25.dwData);
}
    if (VAR_22) FUNC_14(VAR_22);

    FUNC_2( VAR_24 );
}
