
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,int *,int *,int*) ;
 int FUNC_4 (int ,char*,int *,int*,int *,int*) ;
 int FUNC_5 (int ,int *,int ,char*,int) ;
 int FUNC_6 (int ,char*,int ,int ,int const*,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    CHAR VAR_5[VAR_2];
    HKEY VAR_6, VAR_7;
    DWORD VAR_8, VAR_9;
    LONG VAR_10, VAR_11;

    if(!&FUNC_9) {
        FUNC_10("Skipping RegDeleteTreeA tests, function not present\n");
        return;
    }

    VAR_11 = FUNC_1(VAR_4, "subkey", &VAR_6);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_1(VAR_6, "subkey2", &VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_5(VAR_6, ((void*)0), VAR_3, "data", 4);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_5(VAR_7, ((void*)0), VAR_3, "data2", 5);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_0(VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_9(VAR_6, "subkey2");
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    FUNC_8(FUNC_2(VAR_6, "subkey2", &VAR_7),
        "subkey2 was not deleted\n");
    VAR_10 = VAR_2;
    FUNC_8(!FUNC_3(VAR_6, ((void*)0), VAR_5, &VAR_10),
        "Default value of subkey no longer present\n");

    VAR_11 = FUNC_1(VAR_6, "subkey2", &VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_0(VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_9(VAR_4, "subkey\\subkey2");
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    FUNC_8(FUNC_2(VAR_6, "subkey2", &VAR_7),
        "subkey2 was not deleted\n");
    FUNC_8(!FUNC_3(VAR_6, ((void*)0), VAR_5, &VAR_10),
        "Default value of subkey no longer present\n");

    VAR_11 = FUNC_1(VAR_6, "subkey2", &VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_0(VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_1(VAR_6, "subkey3", &VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_0(VAR_7);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_5(VAR_6, ((void*)0), VAR_3, "data", 4);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_6(VAR_6, "value", 0, VAR_3, (const BYTE *)"data2", 5);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_9(VAR_6, ((void*)0));
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    FUNC_8(!FUNC_2(VAR_4, "subkey", &VAR_6),
        "subkey was deleted\n");
    FUNC_8(FUNC_2(VAR_6, "subkey2", &VAR_7),
        "subkey2 was not deleted\n");
    FUNC_8(FUNC_2(VAR_6, "subkey3", &VAR_7),
        "subkey3 was not deleted\n");
    VAR_10 = VAR_2;
    VAR_11 = FUNC_3(VAR_6, ((void*)0), VAR_5, &VAR_10);
    FUNC_8(VAR_11 == VAR_1,
        "Default value of subkey is not present\n");
    FUNC_8(!VAR_5[0], "Expected length 0 got length %u(%s)\n", FUNC_7(VAR_5), VAR_5);
    VAR_8 = VAR_2;
    FUNC_8(FUNC_4(VAR_6, "value", ((void*)0), &VAR_9, (BYTE *)VAR_5, &VAR_8),
        "Value is still present\n");
    VAR_11 = FUNC_0(VAR_6);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_2(VAR_4, "subkey", &VAR_6);
    FUNC_8(VAR_11 == VAR_1, "subkey was deleted\n");
    VAR_11 = FUNC_9(VAR_6, "");
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_11 = FUNC_0(VAR_6);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_2(VAR_4, "subkey", &VAR_6);
    FUNC_8(VAR_11 == VAR_1, "subkey was deleted\n");
    VAR_11 = FUNC_0(VAR_6);
    FUNC_8(VAR_11 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_9(VAR_4, "not-here");
    FUNC_8(VAR_11 == VAR_0,
        "Expected ERROR_FILE_NOT_FOUND, got %d\n", VAR_11);
}
