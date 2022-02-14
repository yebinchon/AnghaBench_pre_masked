
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kbd_state ;
typedef int df ;
typedef int custom_state ;
typedef int UINT ;
struct TYPE_4__ {int dwSize; int dwObjSize; int dwDataSize; int dwNumObjs; scalar_t__* rgodf; int dwFlags; } ;
typedef int RAWINPUTDEVICE ;
typedef scalar_t__ LONG ;
typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int HWND ;
typedef int HRESULT ;
typedef int HKL ;
typedef scalar_t__ DIOBJECTDATAFORMAT ;
typedef TYPE_1__ DIDATAFORMAT ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,scalar_t__*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int **,int *) ;
 int FUNC_11 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ,int ) ;
 int VAR_14 ;
 int FUNC_13 (int) ;
 int VAR_15 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;
 TYPE_1__ VAR_16 ;
 int FUNC_18 (char,int ,int ,int ) ;
 int FUNC_19 (scalar_t__*,int,int) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;

__attribute__((used)) static void FUNC_23(IDirectInputA *VAR_17, HWND VAR_18)
{
    HRESULT VAR_19;
    IDirectInputDeviceA *VAR_20;
    BYTE VAR_21[256];
    LONG VAR_22[6];
    int VAR_23;
    DIOBJECTDATAFORMAT VAR_24[] =
        {
            { &VAR_10, sizeof(LONG) * 0, FUNC_2(VAR_5)|VAR_0, 0 },
            { &VAR_10, sizeof(LONG) * 1, FUNC_2(VAR_7)|VAR_0, 0 },
            { &VAR_10, sizeof(LONG) * 2, FUNC_2(VAR_4)|VAR_0, 0 },
            { &VAR_10, sizeof(LONG) * 4, FUNC_2(VAR_6)|VAR_0, 0 },
        };
    DIDATAFORMAT VAR_25;
    HKL VAR_26, VAR_27;
    UINT VAR_28, VAR_29;

    VAR_26 = FUNC_16(FUNC_12(VAR_13, VAR_14), &VAR_27);
    if (!VAR_26) return;

    VAR_25.dwSize = sizeof( VAR_25 );
    VAR_25.dwObjSize = sizeof( DIOBJECTDATAFORMAT );
    VAR_25.dwFlags = VAR_1;
    VAR_25.dwDataSize = sizeof( VAR_22 );
    VAR_25.dwNumObjs = FUNC_0(VAR_24);
    VAR_25.rgodf = VAR_24;

    VAR_19 = FUNC_10(VAR_17, &VAR_11, &VAR_20, ((void*)0));
    FUNC_20(FUNC_13(VAR_19), "IDirectInput_CreateDevice() failed: %08x\n", VAR_19);
    if (FUNC_3(VAR_19)) return;

    VAR_19 = FUNC_8(VAR_20, &VAR_16);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_SetDataFormat() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_7(VAR_20, ((void*)0), VAR_9 | VAR_8);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_SetCooperativeLevel() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, 10, VAR_21);
    FUNC_20(VAR_19 == VAR_3, "IDirectInputDevice_GetDeviceState(10,) should have failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, sizeof(VAR_21), VAR_21);
    FUNC_20(VAR_19 == VAR_3, "IDirectInputDevice_GetDeviceState() should have failed: %08x\n", VAR_19);
    VAR_19 = FUNC_9(VAR_20);
    FUNC_20(VAR_19 == VAR_15, "IDirectInputDevice_Unacquire() should have failed: %08x\n", VAR_19);
    VAR_19 = FUNC_5(VAR_20);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Acquire() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_5(VAR_20);
    FUNC_20(VAR_19 == VAR_15, "IDirectInputDevice_Acquire() should have failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, 10, VAR_21);
    FUNC_20(VAR_19 == VAR_2, "IDirectInputDevice_GetDeviceState(10,) should have failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, sizeof(VAR_21), VAR_21);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_GetDeviceState() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_9(VAR_20);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Uncquire() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_8( VAR_20 , &VAR_25 );
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_SetDataFormat() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_5(VAR_20);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Acquire() failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, sizeof(VAR_22), VAR_22);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_GetDeviceState(4,) failed: %08x\n", VAR_19);
    VAR_19 = FUNC_6(VAR_20, sizeof(VAR_21), VAR_21);
    FUNC_20(VAR_19 == VAR_2, "IDirectInputDevice_GetDeviceState(256,) should have failed: %08x\n", VAR_19);

    FUNC_19(VAR_22, 0x56, sizeof(VAR_22));
    FUNC_6(VAR_20, sizeof(VAR_22), VAR_22);
    for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_22); VAR_23++)
        FUNC_20(VAR_22[VAR_23] == 0, "Should be zeroed, got 0x%08x\n", VAR_22[VAR_23]);


    FUNC_14(VAR_18);
    FUNC_21();

    FUNC_18('Q', 0, 0, 0);
    VAR_19 = FUNC_6(VAR_20, sizeof(VAR_22), VAR_22);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_GetDeviceState() failed: %08x\n", VAR_19);
    if (!VAR_22[0])
        FUNC_22("Keyboard event not processed, skipping test\n");
    else
    {

        VAR_19 = FUNC_9(VAR_20);
        FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Unacquire() failed: %08x\n", VAR_19);
        VAR_19 = FUNC_5(VAR_20);
        FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Acquire() failed: %08x\n", VAR_19);
        VAR_19 = FUNC_6(VAR_20, sizeof(VAR_22), VAR_22);
        FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_GetDeviceState failed: %08x\n", VAR_19);
        for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_22); VAR_23++)
            FUNC_20(VAR_22[VAR_23] == 0, "Should be zeroed, got 0x%08x\n", VAR_22[VAR_23]);
    }
    FUNC_18('Q', 0, VAR_12, 0);

    VAR_28 = 0;
    FUNC_4(((void*)0), &VAR_28, sizeof(RAWINPUTDEVICE));
    FUNC_20(VAR_28 == 0 || FUNC_17(VAR_28 == 1) ,
       "Unexpected raw devices registered: %d\n", VAR_28);

    VAR_19 = FUNC_5(VAR_20);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Acquire() failed: %08x\n", VAR_19);

    VAR_29 = 0;
    FUNC_4(((void*)0), &VAR_29, sizeof(RAWINPUTDEVICE));
    FUNC_20(VAR_29 == VAR_28,
       "Unexpected raw devices registered: %d\n", VAR_29);

    VAR_19 = FUNC_9(VAR_20);
    FUNC_20(FUNC_13(VAR_19), "IDirectInputDevice_Unacquire() failed: %08x\n", VAR_19);

    if (VAR_20) FUNC_11(VAR_20);

    FUNC_1(VAR_27, 0);
    FUNC_15(VAR_26);
}
