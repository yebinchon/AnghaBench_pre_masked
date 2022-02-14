
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetZoneManager ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int*,int*,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int *,int **,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IInternetZoneManager *VAR_2 = ((void*)0);
    HRESULT VAR_3;
    DWORD VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;

    FUNC_7("testing zone enumerator...\n");

    VAR_3 = FUNC_6(((void*)0), &VAR_2, 0);
    FUNC_5(VAR_3 == VAR_1, "CoInternetCreateZoneManager result: 0x%x\n", VAR_3);
    if (FUNC_0(VAR_3))
        return;

    VAR_4=0xdeadbeef;
    VAR_3 = FUNC_1(VAR_2, &VAR_4, ((void*)0), 0);
    FUNC_5((VAR_3 == VAR_0) && (VAR_4 == 0xdeadbeef),
        "got 0x%x with 0x%x (expected E_INVALIDARG with 0xdeadbeef)\n", VAR_3, VAR_4);

    VAR_6=0xdeadbeef;
    VAR_3 = FUNC_1(VAR_2, ((void*)0), &VAR_6, 0);
    FUNC_5((VAR_3 == VAR_0) && (VAR_6 == 0xdeadbeef),
        "got 0x%x and 0x%x (expected E_INVALIDARG and 0xdeadbeef)\n", VAR_3, VAR_6);

    VAR_4=0xdeadbeef;
    VAR_6=0xdeadbeef;
    VAR_3 = FUNC_1(VAR_2, &VAR_4, &VAR_6, 0xffffffff);
    FUNC_5((VAR_3 == VAR_0) && (VAR_4 == 0xdeadbeef) && (VAR_6 == 0xdeadbeef),
        "got 0x%x with 0x%x and 0x%x (expected E_INVALIDARG with 0xdeadbeef and 0xdeadbeef)\n",
        VAR_3, VAR_4, VAR_6);

    VAR_4=0xdeadbeef;
    VAR_6=0xdeadbeef;
    VAR_3 = FUNC_1(VAR_2, &VAR_4, &VAR_6, 1);
    FUNC_5((VAR_3 == VAR_0) && (VAR_4 == 0xdeadbeef) && (VAR_6 == 0xdeadbeef),
        "got 0x%x with 0x%x and 0x%x (expected E_INVALIDARG with 0xdeadbeef and 0xdeadbeef)\n",
        VAR_3, VAR_4, VAR_6);

    VAR_4=0xdeadbeef;
    VAR_6=0xdeadbeef;

    VAR_3 = FUNC_1(VAR_2, &VAR_4, &VAR_6, 0);
    FUNC_5(VAR_3 == VAR_1, "got 0x%x (expected S_OK)\n", VAR_3);

    if (FUNC_4(VAR_3)) {
        VAR_5=0xdeadbeef;
        VAR_7=0xdeadbeef;
        VAR_3 = FUNC_1(VAR_2, &VAR_5, &VAR_7, 0);
        FUNC_5(VAR_3 == VAR_1, "got 0x%x (expected S_OK)\n", VAR_3);
        if (FUNC_4(VAR_3)) {

            VAR_3 = FUNC_2(VAR_2, VAR_5);
            FUNC_5(VAR_3 == VAR_1, "got 0x%x (expected S_OK)\n", VAR_3);
        }

        VAR_3 = FUNC_2(VAR_2, VAR_4);
        FUNC_5(VAR_3 == VAR_1, "got 0x%x (expected S_OK)\n", VAR_3);


        VAR_3 = FUNC_2(VAR_2, VAR_4);
        FUNC_5((VAR_3 == VAR_0), "got 0x%x (expected E_INVALIDARG)\n", VAR_3);
    }


    VAR_3 = FUNC_3(VAR_2);
    FUNC_5(VAR_3 == VAR_1, "got 0x%x (expected S_OK)\n", VAR_3);
}
