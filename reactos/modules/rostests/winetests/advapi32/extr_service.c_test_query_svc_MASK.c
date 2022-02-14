
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwCurrentState; scalar_t__ dwProcessId; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int *,int,int *,int,int*) ;
 int FUNC_12 (char*) ;
 int VAR_11 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    SC_HANDLE VAR_12, VAR_13;
    BOOL VAR_14;
    SERVICE_STATUS VAR_15;
    SERVICE_STATUS_PROCESS *VAR_16;
    DWORD VAR_17, VAR_18;


    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_7(((void*)0), ((void*)0));
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_3,
       "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());

    VAR_12 = FUNC_5(((void*)0), ((void*)0), VAR_6);




    VAR_13 = FUNC_6(VAR_12, VAR_11, VAR_10);
    if (!VAR_13)
    {
        FUNC_12("Spooler service doesn't exist\n");
        FUNC_0(VAR_12);
        return;
    }

    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_7(VAR_13, ((void*)0));
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_2 ||
       FUNC_1() == VAR_5 ,
       "Unexpected last error %d\n", FUNC_1());

    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_7(VAR_13, &VAR_15);
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_0,
       "Expected ERROR_ACCESS_DENIED, got %d\n", FUNC_1());




    FUNC_0(VAR_13);
    VAR_13 = FUNC_6(VAR_12, VAR_11, VAR_8);

    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_7(VAR_13, &VAR_15);
    FUNC_10(VAR_14, "Expected success, got error %u\n", FUNC_1());

    FUNC_0(VAR_13);


    if (!&FUNC_11)
    {
        FUNC_13( "QueryServiceStatusEx not available\n" );
        FUNC_0(VAR_12);
        return;
    }


    VAR_13 = FUNC_6(VAR_12, VAR_11, VAR_10);


    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(((void*)0), 1, ((void*)0), 0, ((void*)0));
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_4,
       "Expected ERROR_INVALID_LEVEL, got %d\n", FUNC_1());






    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(((void*)0), VAR_7, ((void*)0), 0, &VAR_18);

    if (FUNC_1() != VAR_3)
    {
        FUNC_10(!VAR_14, "Expected failure\n");
        FUNC_10(VAR_18 == sizeof(SERVICE_STATUS_PROCESS),
           "Needed buffersize is wrong : %d\n", VAR_18);
        FUNC_10(FUNC_1() == VAR_1,
           "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_1());
    }


    VAR_16 = FUNC_3(FUNC_2(), 0, sizeof(SERVICE_STATUS_PROCESS));
    VAR_17 = VAR_18;
    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(((void*)0), VAR_7, (BYTE*)VAR_16, VAR_17, &VAR_18);
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_3,
       "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());
    FUNC_4(FUNC_2(), 0, VAR_16);


    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(VAR_13, VAR_7, ((void*)0), 0, &VAR_18);

    if (FUNC_1() != VAR_5)
    {
        FUNC_10(!VAR_14, "Expected failure\n");
        FUNC_10(VAR_18 == sizeof(SERVICE_STATUS_PROCESS),
           "Needed buffersize is wrong : %d\n", VAR_18);
        FUNC_10(FUNC_1() == VAR_1,
           "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_1());
    }


    VAR_16 = FUNC_3(FUNC_2(), 0, sizeof(SERVICE_STATUS_PROCESS));
    VAR_17 = sizeof(SERVICE_STATUS_PROCESS);
    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(VAR_13, VAR_7, (BYTE*)VAR_16, VAR_17, &VAR_18);
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_1() == VAR_0,
       "Expected ERROR_ACCESS_DENIED, got %d\n", FUNC_1());
    FUNC_4(FUNC_2(), 0, VAR_16);


    FUNC_0(VAR_13);
    VAR_13 = FUNC_6(VAR_12, VAR_11, VAR_8);


    VAR_16 = FUNC_3(FUNC_2(), 0, sizeof(SERVICE_STATUS_PROCESS));
    VAR_17 = sizeof(SERVICE_STATUS_PROCESS);
    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(VAR_13, VAR_7, (BYTE*)VAR_16, VAR_17, &VAR_18);
    FUNC_10(VAR_14, "Expected success, got error %u\n", FUNC_1());
    if (VAR_16->dwCurrentState == VAR_9)
        FUNC_10(VAR_16->dwProcessId != 0,
           "Expect a process id for this running service\n");
    else
        FUNC_10(VAR_16->dwProcessId == 0,
           "Expect no process id for this stopped service\n");


    FUNC_8(0xdeadbeef);
    VAR_14 = FUNC_11(VAR_13, VAR_7, (BYTE*)VAR_16, VAR_17, ((void*)0));
    FUNC_10(!VAR_14, "Expected failure\n");
    FUNC_10(FUNC_9(FUNC_1() == VAR_5) ||
       FUNC_1() == VAR_2, "got %d\n", FUNC_1());

    FUNC_4(FUNC_2(), 0, VAR_16);

    FUNC_0(VAR_13);
    FUNC_0(VAR_12);
}
