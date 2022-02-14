
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IDirectInputA ;
typedef int * HWND ;
typedef scalar_t__ HRESULT ;
typedef int HINSTANCE ;
typedef int DWORD ;


 int * FUNC_0 (char*,char*,int,int,int,int,int,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ,int **,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;

__attribute__((used)) static void FUNC_19(DWORD VAR_11)
{
    HRESULT VAR_12;
    IDirectInputA *VAR_13 = ((void*)0);
    HINSTANCE VAR_14 = FUNC_4(((void*)0));
    HWND VAR_15;
    ULONG VAR_16 = 0;

    VAR_12 = FUNC_11(VAR_14, VAR_11, &VAR_13, ((void*)0));
    if (VAR_12 == VAR_0)
    {
        FUNC_13("Tests require a newer dinput version\n");
        return;
    }
    FUNC_10(FUNC_7(VAR_12), "DirectInputCreateA() failed: %08x\n", VAR_12);
    if (FUNC_2(VAR_12)) return;

    VAR_15 = FUNC_0("static", "Title", VAR_9 | VAR_10, 10, 10, 200, 200,
                         ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_10(VAR_15 != ((void*)0), "err: %d\n", FUNC_3());
    FUNC_8( VAR_15 );

    if (VAR_15)
    {
        FUNC_12();

        FUNC_9(VAR_13, VAR_15);
        FUNC_18(VAR_13, VAR_15);
        FUNC_17(VAR_13, VAR_15);
        FUNC_15(VAR_13, VAR_15);
        FUNC_14(VAR_13);

        FUNC_16(VAR_13, VAR_15, FUNC_6(VAR_1, VAR_5));
        FUNC_16(VAR_13, VAR_15, FUNC_6(VAR_2, VAR_6));
        FUNC_16(VAR_13, VAR_15, FUNC_6(VAR_3, VAR_7));
        FUNC_16(VAR_13, VAR_15, FUNC_6(VAR_4, VAR_8));
    }

    FUNC_1(VAR_15);
    if (VAR_13) VAR_16 = FUNC_5(VAR_13);
    FUNC_10(!VAR_16, "IDirectInput_Release() reference count = %d\n", VAR_16);
}
