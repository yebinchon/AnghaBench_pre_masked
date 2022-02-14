
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int *,int ,int,int *,int **,int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int ,int ,int const*,int) ;
 int * VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HKEY VAR_7;
    LONG VAR_8;

    if (!&FUNC_6)
    {
        FUNC_7("RegDeleteKeyValue is not available.\n");
        return;
    }

    VAR_8 = FUNC_6(((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_1, "got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_6, ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_0, "got %d\n", VAR_8);

    VAR_8 = FUNC_4(VAR_6, "test", 0, VAR_5, (const BYTE*)"value", 6);
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_6, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);


    VAR_8 = FUNC_6(VAR_6, ((void*)0), "test");
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_6, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_0, "got %d\n", VAR_8);


    VAR_8 = FUNC_1(VAR_6, "Subkey1", 0, ((void*)0), 0, VAR_4|VAR_3, ((void*)0), &VAR_7, ((void*)0));
    FUNC_5(!VAR_8, "failed with error %d\n", VAR_8);

    VAR_8 = FUNC_4(VAR_7, "test", 0, VAR_5, (const BYTE*)"value", 6);
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_7, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_6, "Subkey1", "test");
    FUNC_5(VAR_8 == VAR_2, "got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_7, "test", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_0, "got %d\n", VAR_8);


    VAR_8 = FUNC_4(VAR_7, "", 0, VAR_5, (const BYTE *)"value", 6);
    FUNC_5(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_7, "", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_6, "Subkey1", "" );
    FUNC_5(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_8);

    VAR_8 = FUNC_3(VAR_7, "", ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_8 == VAR_0, "expected ERROR_FILE_NOT_FOUND, got %d\n", VAR_8);

    FUNC_2(VAR_7, "");
    FUNC_0(VAR_7);
}
