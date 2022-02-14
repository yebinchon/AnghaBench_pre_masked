
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nameW ;
typedef int name ;
typedef int * LPWSTR ;
typedef int * LPSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,int,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    DWORD VAR_3;
    BOOL VAR_4;
    LPSTR VAR_5;
    LPWSTR VAR_6;
    DWORD VAR_7;
    int VAR_8;

    VAR_3 = 0;
    VAR_4 = FUNC_0((LPSTR)0xdeadbeef, &VAR_3);
    VAR_7 = FUNC_2();
    FUNC_7(!VAR_4 && VAR_7 == VAR_0, "GetComputerNameA should have failed with ERROR_BUFFER_OVERFLOW instead of %d\n", VAR_7);


    if (VAR_3 != 0)
    {
        VAR_3++;
        VAR_5 = FUNC_4(FUNC_3(), 0, VAR_3 * sizeof(VAR_5[0]));
        FUNC_7(VAR_5 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_2());
        VAR_4 = FUNC_0(VAR_5, &VAR_3);
        FUNC_7(VAR_4, "GetComputerNameA failed with error %d\n", FUNC_2());
        FUNC_5(FUNC_3(), 0, VAR_5);
    }

    VAR_3 = VAR_2 + 1;
    VAR_5 = FUNC_4(FUNC_3(), 0, VAR_3 * sizeof(VAR_5[0]));
    FUNC_7(VAR_5 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_2());
    VAR_4 = FUNC_0(VAR_5, &VAR_3);
    FUNC_7(VAR_4, "GetComputerNameA failed with error %d\n", FUNC_2());
    FUNC_9("computer name is \"%s\"\n", VAR_5);
    VAR_8 = FUNC_8(VAR_5);
    FUNC_7(VAR_3 == VAR_8, "size should be same as length, name_len=%d, size=%d\n", VAR_8, VAR_3);
    FUNC_5(FUNC_3(), 0, VAR_5);

    VAR_3 = 0;
    FUNC_6(0xdeadbeef);
    VAR_4 = FUNC_1((LPWSTR)0xdeadbeef, &VAR_3);
    VAR_7 = FUNC_2();
    if (VAR_7 == VAR_1)
        FUNC_10("GetComputerNameW is not implemented\n");
    else
    {
        FUNC_7(!VAR_4 && VAR_7 == VAR_0, "GetComputerNameW should have failed with ERROR_BUFFER_OVERFLOW instead of %d\n", VAR_7);
        VAR_3++;
        VAR_6 = FUNC_4(FUNC_3(), 0, VAR_3 * sizeof(VAR_6[0]));
        FUNC_7(VAR_6 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_2());
        VAR_4 = FUNC_1(VAR_6, &VAR_3);
        FUNC_7(VAR_4, "GetComputerNameW failed with error %d\n", FUNC_2());
        FUNC_5(FUNC_3(), 0, VAR_6);
    }
}
