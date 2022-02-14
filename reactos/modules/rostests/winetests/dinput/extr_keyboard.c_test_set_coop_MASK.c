
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
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_9(IDirectInputA *VAR_7, HWND VAR_8)
{
    HRESULT VAR_9;
    IDirectInputDeviceA *VAR_10 = ((void*)0);
    int VAR_11;
    HWND VAR_12;

    VAR_9 = FUNC_5(VAR_7, &VAR_0, &VAR_10, ((void*)0));
    FUNC_8(FUNC_7(VAR_9), "IDirectInput_CreateDevice() failed: %08x\n", VAR_9);
    if (FUNC_2(VAR_9)) return;

    for (VAR_11=0; VAR_11<16; VAR_11++)
    {
        VAR_9 = FUNC_4(VAR_10, ((void*)0), VAR_11);
        FUNC_8(VAR_9 == VAR_3[VAR_11], "SetCooperativeLevel(NULL, %d): %08x\n", VAR_11, VAR_9);
    }
    for (VAR_11=0; VAR_11<16; VAR_11++)
    {
        VAR_9 = FUNC_4(VAR_10, (HWND)0x400000, VAR_11);
        FUNC_8(VAR_9 == VAR_2[VAR_11], "SetCooperativeLevel(invalid, %d): %08x\n", VAR_11, VAR_9);
    }
    for (VAR_11=0; VAR_11<16; VAR_11++)
    {
        VAR_9 = FUNC_4(VAR_10, VAR_8, VAR_11);
        FUNC_8(VAR_9 == VAR_4[VAR_11], "SetCooperativeLevel(hwnd, %d): %08x\n", VAR_11, VAR_9);
    }

    VAR_12 = FUNC_0("static", "Title", VAR_5 | VAR_6, 10, 10, 50, 50, VAR_8, ((void*)0),
                          ((void*)0), ((void*)0));
    FUNC_8(VAR_12 != ((void*)0), "err: %d\n", FUNC_3());

    for (VAR_11=0; VAR_11<16; VAR_11++)
    {
        VAR_9 = FUNC_4(VAR_10, VAR_12, VAR_11);
        FUNC_8(VAR_9 == VAR_1[VAR_11], "SetCooperativeLevel(child, %d): %08x\n", VAR_11, VAR_9);
    }

    FUNC_1(VAR_12);
    if (VAR_10) FUNC_6(VAR_10);
}
