
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int * HWND ;
typedef scalar_t__ HRESULT ;


 int * FUNC_0 (char*,char*,int,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_9(IDirectInputA *VAR_6, HWND VAR_7)
{
    HRESULT VAR_8;
    IDirectInputDeviceA *VAR_9 = ((void*)0);
    int VAR_10;
    HWND VAR_11;

    VAR_8 = FUNC_5(VAR_6, &VAR_0, &VAR_9, ((void*)0));
    FUNC_8(FUNC_7(VAR_8), "IDirectInput_CreateDevice() failed: %08x\n", VAR_8);
    if (FUNC_2(VAR_8)) return;

    for (VAR_10=0; VAR_10<16; VAR_10++)
    {
        VAR_8 = FUNC_4(VAR_9, ((void*)0), VAR_10);
        FUNC_8(VAR_8 == VAR_2[VAR_10], "SetCooperativeLevel(NULL, %d): %08x\n", VAR_10, VAR_8);
    }
    for (VAR_10=0; VAR_10<16; VAR_10++)
    {
        VAR_8 = FUNC_4(VAR_9, VAR_7, VAR_10);
        FUNC_8(VAR_8 == VAR_3[VAR_10], "SetCooperativeLevel(hwnd, %d): %08x\n", VAR_10, VAR_8);
    }

    VAR_11 = FUNC_0("static", "Title", VAR_4 | VAR_5, 10, 10, 50, 50, VAR_7, ((void*)0),
                          ((void*)0), ((void*)0));
    FUNC_8(VAR_11 != ((void*)0), "err: %d\n", FUNC_3());

    for (VAR_10=0; VAR_10<16; VAR_10++)
    {
        VAR_8 = FUNC_4(VAR_9, VAR_11, VAR_10);
        FUNC_8(VAR_8 == VAR_1[VAR_10], "SetCooperativeLevel(child, %d): %08x\n", VAR_10, VAR_8);
    }

    FUNC_1(VAR_11);
    if (VAR_9) FUNC_6(VAR_9);
}
