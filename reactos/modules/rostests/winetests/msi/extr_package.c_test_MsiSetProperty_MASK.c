
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,int *,int*) ;
 int FUNC_4 (scalar_t__,char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_7 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    MSIHANDLE VAR_8, VAR_9, VAR_10;
    CHAR VAR_11[VAR_6];
    LPCSTR VAR_12;
    DWORD VAR_13;
    UINT VAR_14;

    VAR_14 = FUNC_9(FUNC_5(), &VAR_8);
    if (VAR_14 == VAR_2)
    {
        FUNC_10("Not enough rights to perform tests\n");
        FUNC_0(VAR_7);
        return;
    }
    FUNC_8(VAR_14 == VAR_5, "Expected a valid package %u\n", VAR_14);


    VAR_14 = FUNC_4(0, "Prop", "Val");
    FUNC_8(VAR_14 == VAR_3,
       "Expected ERROR_INVALID_HANDLE, got %d\n", VAR_14);


    VAR_14 = FUNC_4(0xdeadbeef, "Prop", "Val");
    FUNC_8(VAR_14 == VAR_3,
       "Expected ERROR_INVALID_HANDLE, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, ((void*)0), "Val");
    FUNC_8(VAR_14 == VAR_4,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, ((void*)0), ((void*)0));
    FUNC_8(VAR_14 == VAR_4,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, "", "Val");
    FUNC_8(VAR_14 == VAR_1,
       "Expected ERROR_FUNCTION_FAILED, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, "", ((void*)0));
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, "Prop", "Val");
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_13 = VAR_6;
    VAR_14 = FUNC_3(VAR_8, "Prop", VAR_11, &VAR_13);
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_8(!FUNC_7(VAR_11, "Val"), "Expected \"Val\", got \"%s\"\n", VAR_11);
    FUNC_8(VAR_13 == 3, "Expected 3, got %d\n", VAR_13);


    VAR_14 = FUNC_4(VAR_8, "Prop", "Nuvo");
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_13 = VAR_6;
    VAR_14 = FUNC_3(VAR_8, "Prop", VAR_11, &VAR_13);
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_8(!FUNC_7(VAR_11, "Nuvo"), "Expected \"Nuvo\", got \"%s\"\n", VAR_11);
    FUNC_8(VAR_13 == 4, "Expected 4, got %d\n", VAR_13);

    VAR_9 = FUNC_2(VAR_8);
    FUNC_8(VAR_9 != 0, "Expected a valid database handle\n");


    VAR_12 = "SELECT * FROM `_Property` WHERE `Property` = 'Prop'";
    VAR_14 = FUNC_6(VAR_9, VAR_12, &VAR_10);
    FUNC_8(VAR_14 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_14);


    VAR_12 = "SELECT * FROM `Property` WHERE `Property` = 'Prop'";
    VAR_14 = FUNC_6(VAR_9, VAR_12, &VAR_10);
    FUNC_8(VAR_14 == VAR_0,
       "Expected ERROR_BAD_QUERY_SYNTAX, got %d\n", VAR_14);

    FUNC_1(VAR_9);


    VAR_14 = FUNC_4(VAR_8, "Prop", "");
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_13 = VAR_6;
    VAR_14 = FUNC_3(VAR_8, "Prop", VAR_11, &VAR_13);
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_8(!FUNC_7(VAR_11, ""), "Expected \"\", got \"%s\"\n", VAR_11);
    FUNC_8(VAR_13 == 0, "Expected 0, got %d\n", VAR_13);


    VAR_14 = FUNC_4(VAR_8, "Prop", "BlueTap");
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_14 = FUNC_4(VAR_8, "Prop", ((void*)0));
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);


    VAR_13 = VAR_6;
    VAR_14 = FUNC_3(VAR_8, "Prop", VAR_11, &VAR_13);
    FUNC_8(VAR_14 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_14);
    FUNC_8(!FUNC_7(VAR_11, ""), "Expected \"\", got \"%s\"\n", VAR_11);
    FUNC_8(VAR_13 == 0, "Expected 0, got %d\n", VAR_13);

    FUNC_1(VAR_8);
    FUNC_0(VAR_7);
}
