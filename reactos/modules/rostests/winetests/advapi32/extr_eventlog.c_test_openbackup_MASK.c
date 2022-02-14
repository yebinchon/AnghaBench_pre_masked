
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int * HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int * FUNC_6 (char*,char const*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char const*,int,int *,int *) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    HANDLE VAR_9, VAR_10, VAR_11;
    DWORD VAR_12;
    const char VAR_13[] = "backup.evt";
    const char VAR_14[] = "Just some text";

    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6(((void*)0), ((void*)0));
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_3, "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_5());

    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6(((void*)0), "idontexist.evt");
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_2, "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_5());

    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6("IDontExist", ((void*)0));
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_3, "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_5());

    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6("IDontExist", "idontexist.evt");
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_8 ||
       FUNC_5() == VAR_7,
       "Expected RPC_S_SERVER_UNAVAILABLE, got %d\n", FUNC_5());


    if (FUNC_9(VAR_13))
    {

        if (FUNC_4(VAR_13) == VAR_6)
        {
            FUNC_11("We don't have a backup eventlog to work with\n");
            return;
        }

        FUNC_7(0xdeadbeef);
        VAR_9 = FUNC_6("IDontExist", VAR_13);
        FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
        FUNC_10(FUNC_5() == VAR_8 ||
           FUNC_5() == VAR_7,
           "Expected RPC_S_SERVER_UNAVAILABLE, got %d\n", FUNC_5());


        VAR_9 = FUNC_6("", VAR_13);
        FUNC_10(VAR_9 != ((void*)0), "Expected a handle\n");
        FUNC_0(VAR_9);

        VAR_9 = FUNC_6(((void*)0), VAR_13);
        FUNC_10(VAR_9 != ((void*)0), "Expected a handle\n");


        VAR_10 = FUNC_6(((void*)0), VAR_13);
        FUNC_10(VAR_10 != ((void*)0), "Expected a handle\n");
        FUNC_10(VAR_10 != VAR_9, "Didn't expect the same handle\n");
        FUNC_0(VAR_10);

        FUNC_0(VAR_9);
        FUNC_3(VAR_13);
    }


    VAR_11 = FUNC_2(VAR_13, VAR_5, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_1(VAR_11);
    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6(((void*)0), VAR_13);
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_4 ||
       FUNC_5() == VAR_1,
       "Expected ERROR_NOT_ENOUGH_MEMORY, got %d\n", FUNC_5());
    FUNC_0(VAR_9);
    FUNC_3(VAR_13);

    VAR_11 = FUNC_2(VAR_13, VAR_5, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_8(VAR_11, VAR_14, sizeof(VAR_14), &VAR_12, ((void*)0));
    FUNC_1(VAR_11);
    FUNC_7(0xdeadbeef);
    VAR_9 = FUNC_6(((void*)0), VAR_13);
    FUNC_10(VAR_9 == ((void*)0), "Didn't expect a handle\n");
    FUNC_10(FUNC_5() == VAR_1, "Expected ERROR_EVENTLOG_FILE_CORRUPT, got %d\n", FUNC_5());
    FUNC_0(VAR_9);
    FUNC_3(VAR_13);
}
