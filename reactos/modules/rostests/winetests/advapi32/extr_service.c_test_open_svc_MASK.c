
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,char*,char*,scalar_t__*) ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;
 char* VAR_8 ;

__attribute__((used)) static void FUNC_9(void)
{
    SC_HANDLE VAR_9, VAR_10;
    CHAR VAR_11[4096];
    DWORD VAR_12;


    FUNC_5(0xdeadbeef);
    VAR_10 = FUNC_4(((void*)0), ((void*)0), 0);
    FUNC_7(!VAR_10, "Expected failure\n");
    FUNC_7(FUNC_1() == VAR_2, "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());




    VAR_9 = FUNC_3(((void*)0), ((void*)0), VAR_7);
    FUNC_5(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9, ((void*)0), VAR_5);
    FUNC_7(!VAR_10, "Expected failure\n");
    FUNC_7(FUNC_1() == VAR_1 ||
       FUNC_1() == VAR_3 ,
       "Expected ERROR_INVALID_ADDRESS or ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());
    FUNC_0(VAR_9);


    VAR_9 = FUNC_3(((void*)0), ((void*)0), VAR_7);
    FUNC_5(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9, "deadbeef", VAR_5);
    FUNC_7(!VAR_10, "Expected failure\n");
    FUNC_7(FUNC_1() == VAR_4, "Expected ERROR_SERVICE_DOES_NOT_EXIST, got %d\n", FUNC_1());
    FUNC_0(VAR_9);


    VAR_9 = FUNC_3(((void*)0), ((void*)0), VAR_7);
    FUNC_5(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9, VAR_8, VAR_6);
    if (!VAR_10 && (FUNC_1() == VAR_0))
        FUNC_8("Not enough rights to get a handle to the service\n");
    else
    {
        FUNC_7(VAR_10 != ((void*)0), "Expected success, got error %u\n", FUNC_1());
        FUNC_0(VAR_10);
    }




    VAR_12 = 0;
    FUNC_2(VAR_9, VAR_8, ((void*)0), &VAR_12);

    FUNC_2(VAR_9, VAR_8, VAR_11, &VAR_12);



    if (!FUNC_6(VAR_8, VAR_11))
    {
        FUNC_8("displayname equals servicename\n");
        FUNC_0(VAR_9);
        return;
    }

    FUNC_5(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9, VAR_11, VAR_5);
    FUNC_7(!VAR_10, "Expected failure\n");
    FUNC_7(FUNC_1() == VAR_4, "Expected ERROR_SERVICE_DOES_NOT_EXIST, got %d\n", FUNC_1());

    FUNC_0(VAR_10);

    FUNC_0(VAR_9);
}
