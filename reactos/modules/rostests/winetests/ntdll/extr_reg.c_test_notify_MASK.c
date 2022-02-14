
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {int * ObjectName; int * RootDirectory; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int ,TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int *,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int *,int *,int *,int *,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_9 (int **,int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,int ,TYPE_2__*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_14(void)
{
    OBJECT_ATTRIBUTES VAR_9;
    LARGE_INTEGER VAR_10;
    IO_STATUS_BLOCK VAR_11;
    UNICODE_STRING VAR_12;
    HANDLE VAR_13, VAR_14[2], VAR_15;
    NTSTATUS VAR_16;

    FUNC_2(&VAR_9, &VAR_8, 0, 0, 0);
    VAR_16 = FUNC_9(&VAR_13, VAR_2, &VAR_9);
    FUNC_3(VAR_16 == VAR_5, "NtOpenKey Failed: 0x%08x\n", VAR_16);

    VAR_14[0] = FUNC_0(((void*)0), VAR_0, VAR_7, ((void*)0));
    FUNC_3(VAR_14[0] != ((void*)0), "CreateEvent failed: %u\n", FUNC_1());
    VAR_14[1] = FUNC_0(((void*)0), VAR_0, VAR_7, ((void*)0));
    FUNC_3(VAR_14[1] != ((void*)0), "CreateEvent failed: %u\n", FUNC_1());

    VAR_16 = FUNC_7(VAR_13, VAR_14[0], ((void*)0), ((void*)0), &VAR_11, VAR_3, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);
    VAR_16 = FUNC_7(VAR_13, VAR_14[1], ((void*)0), ((void*)0), &VAR_11, VAR_3, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);

    VAR_10.QuadPart = 0;
    VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_6, "NtWaitForSingleObject returned %x\n", VAR_16);
    VAR_16 = FUNC_10(VAR_14[1], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_6, "NtWaitForSingleObject returned %x\n", VAR_16);

    VAR_9.RootDirectory = VAR_13;
    VAR_9.ObjectName = &VAR_12;

    FUNC_11(&VAR_12, "test_subkey");
    VAR_16 = FUNC_5(&VAR_15, VAR_1, &VAR_9, 0, 0, 0, 0);
    FUNC_3(VAR_16 == VAR_5, "NtCreateKey failed: 0x%08x\n", VAR_16);
    FUNC_12(&VAR_12);

    VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);
    VAR_16 = FUNC_10(VAR_14[1], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);

    VAR_16 = FUNC_7(VAR_13, VAR_14[0], ((void*)0), ((void*)0), &VAR_11, 0, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);
    VAR_16 = FUNC_7(VAR_13, VAR_14[1], ((void*)0), ((void*)0), &VAR_11, 0, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);

    VAR_16 = FUNC_6(VAR_15);
    FUNC_3(VAR_16 == VAR_5, "NtDeleteSubkey failed: %x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);
    VAR_16 = FUNC_10(VAR_14[1], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);

    FUNC_4(VAR_15);

    VAR_16 = FUNC_7(VAR_13, VAR_14[0], ((void*)0), ((void*)0), &VAR_11, 0, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);
    VAR_16 = FUNC_7(VAR_13, VAR_14[1], ((void*)0), ((void*)0), &VAR_11, 0, VAR_0, ((void*)0), 0, VAR_7);
    FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);

    FUNC_4(VAR_13);

    VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);
    VAR_16 = FUNC_10(VAR_14[1], VAR_0, &VAR_10);
    FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);

    if (&FUNC_8)
    {
        FUNC_2(&VAR_9, &VAR_8, 0, 0, 0);
        VAR_16 = FUNC_9(&VAR_13, VAR_2, &VAR_9);
        FUNC_3(VAR_16 == VAR_5, "NtOpenKey Failed: 0x%08x\n", VAR_16);

        VAR_16 = FUNC_8(VAR_13, 0, ((void*)0), VAR_14[0], ((void*)0), ((void*)0), &VAR_11, VAR_3, VAR_0, ((void*)0), 0, VAR_7);
        FUNC_3(VAR_16 == VAR_4, "NtNotifyChangeKey returned %x\n", VAR_16);

        VAR_10.QuadPart = 0;
        VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
        FUNC_3(VAR_16 == VAR_6, "NtWaitForSingleObject returned %x\n", VAR_16);

        VAR_9.RootDirectory = VAR_13;
        VAR_9.ObjectName = &VAR_12;
        FUNC_11(&VAR_12, "test_subkey");
        VAR_16 = FUNC_5(&VAR_15, VAR_1, &VAR_9, 0, 0, 0, 0);
        FUNC_3(VAR_16 == VAR_5, "NtCreateKey failed: 0x%08x\n", VAR_16);
        FUNC_12(&VAR_12);

        VAR_16 = FUNC_10(VAR_14[0], VAR_0, &VAR_10);
        FUNC_3(VAR_16 == VAR_5, "NtWaitForSingleObject returned %x\n", VAR_16);

        VAR_16 = FUNC_6(VAR_15);
        FUNC_3(VAR_16 == VAR_5, "NtDeleteSubkey failed: %x\n", VAR_16);
        FUNC_4(VAR_15);
        FUNC_4(VAR_13);
    }
    else
    {
        FUNC_13("NtNotifyChangeMultipleKeys not available\n");
    }

    FUNC_4(VAR_14[0]);
    FUNC_4(VAR_14[1]);
}
