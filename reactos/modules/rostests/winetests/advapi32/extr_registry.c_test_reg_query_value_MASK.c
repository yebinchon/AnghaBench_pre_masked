
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valW ;
typedef int expected ;
typedef char WCHAR ;
typedef int LONG ;
typedef int * HKEY ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int **) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*,int*) ;
 int FUNC_5 (int *,int *,char*,int*) ;
 int FUNC_6 (int *,int *,int ,char*,int) ;
 int FUNC_7 (int *,int *,int ,char const*,int) ;
 int FUNC_8 (int) ;
 int * VAR_9 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    HKEY VAR_10;
    CHAR VAR_11[VAR_7];
    WCHAR VAR_12[5];
    LONG VAR_13, VAR_14;

    static const WCHAR VAR_15[] = {'d','a','t','a',0};

    VAR_14 = FUNC_2(VAR_9, "subkey", &VAR_10);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);

    VAR_14 = FUNC_6(VAR_10, ((void*)0), VAR_8, "data", 4);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    FUNC_8(0xdeadbeef);
    VAR_13 = VAR_7;
    VAR_14 = FUNC_4((HKEY)0xcafebabe, "subkey", VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_3 ||
       VAR_14 == VAR_1 ||
       VAR_14 == VAR_0,
       "Expected ERROR_INVALID_HANDLE or ERROR_BADKEY, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    FUNC_8(0xdeadbeef);
    VAR_13 = VAR_7;
    VAR_14 = FUNC_4(((void*)0), "subkey", VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_3 || VAR_14 == VAR_1,
       "Expected ERROR_INVALID_HANDLE or ERROR_BADKEY, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());


    VAR_13 = VAR_7;
    VAR_14 = FUNC_4(VAR_9, "subkey", ((void*)0), &VAR_13);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_12(VAR_13 == 5, "Expected 5, got %d\n", VAR_13);


    FUNC_8(0xdeadbeef);
    VAR_11[0] = '\0';
    VAR_14 = FUNC_4(VAR_9, "subkey", VAR_11, ((void*)0));
    FUNC_12(VAR_14 == VAR_4, "Expected ERROR_INVALID_PARAMETER, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
    FUNC_12(!VAR_11[0], "Expected val to be untouched, got %s\n", VAR_11);


    VAR_14 = FUNC_4(VAR_9, "subkey", ((void*)0), ((void*)0));
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    FUNC_8(0xdeadbeef);
    VAR_11[0] = '\0';
    VAR_13 = 1;
    VAR_14 = FUNC_4(VAR_9, "subkey", VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_5, "Expected ERROR_MORE_DATA, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
    FUNC_12(!VAR_11[0], "Expected val to be untouched, got %s\n", VAR_11);
    FUNC_12(VAR_13 == 5, "Expected 5, got %d\n", VAR_13);


    VAR_13 = VAR_7;
    VAR_14 = FUNC_4(VAR_9, "subkey", VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_12(!FUNC_9(VAR_11, "data"), "Expected 'data', got '%s'\n", VAR_11);
    FUNC_12(VAR_13 == 5, "Expected 5, got %d\n", VAR_13);


    VAR_13 = VAR_7;
    VAR_14 = FUNC_4(VAR_10, ((void*)0), VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_12(!FUNC_9(VAR_11, "data"), "Expected 'data', got '%s'\n", VAR_11);
    FUNC_12(VAR_13 == 5, "Expected 5, got %d\n", VAR_13);


    FUNC_8(0xdeadbeef);
    VAR_12[0] = '\0';
    VAR_13 = 0;
    VAR_14 = FUNC_5(VAR_10, ((void*)0), VAR_12, &VAR_13);
    if (FUNC_0() == VAR_2)
    {
        FUNC_13("RegQueryValueW is not implemented\n");
        goto cleanup;
    }
    FUNC_12(VAR_14 == VAR_5, "Expected ERROR_MORE_DATA, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
    FUNC_12(!VAR_12[0], "Expected valW to be untouched\n");
    FUNC_12(VAR_13 == sizeof(VAR_15), "Got wrong size: %d\n", VAR_13);


    FUNC_8(0xdeadbeef);
    VAR_13 = sizeof(VAR_12) / sizeof(WCHAR);
    VAR_14 = FUNC_5(VAR_10, ((void*)0), VAR_12, &VAR_13);
    FUNC_12(VAR_14 == VAR_5, "Expected ERROR_MORE_DATA, got %d\n", VAR_14);
    FUNC_12(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %d\n", FUNC_0());
    FUNC_12(!VAR_12[0], "Expected valW to be untouched\n");
    FUNC_12(VAR_13 == sizeof(VAR_15), "Got wrong size: %d\n", VAR_13);


    VAR_13 = sizeof(VAR_12);
    VAR_14 = FUNC_5(VAR_10, ((void*)0), VAR_12, &VAR_13);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_12(!FUNC_10(VAR_12, VAR_15), "Got wrong value\n");
    FUNC_12(VAR_13 == sizeof(VAR_15), "Got wrong size: %d\n", VAR_13);


    VAR_14 = FUNC_7(VAR_10, ((void*)0), VAR_8, VAR_15, sizeof(VAR_15)-sizeof(WCHAR));
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    FUNC_11(VAR_12, 'a', sizeof(VAR_12));
    VAR_13 = sizeof(VAR_12);
    VAR_14 = FUNC_5(VAR_10, ((void*)0), VAR_12, &VAR_13);
    FUNC_12(VAR_14 == VAR_6, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_12(!FUNC_10(VAR_12, VAR_15), "Got wrong value\n");
    FUNC_12(VAR_13 == sizeof(VAR_15), "Got wrong size: %d\n", VAR_13);

cleanup:
    FUNC_3(VAR_10, "");
    FUNC_1(VAR_10);
}
