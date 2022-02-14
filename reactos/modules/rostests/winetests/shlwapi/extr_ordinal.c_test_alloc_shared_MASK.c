
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int val ;
struct shared_struct {int value; int * handle; } ;
struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int * FUNC_6 (struct shared_struct*,int,int) ;
 int FUNC_7 (int *,int) ;
 struct shared_struct* FUNC_8 (int *,int) ;
 int FUNC_9 (struct shared_struct*) ;
 int FUNC_10 (char*,char*,char*,char*,int,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(int VAR_2, char **VAR_3)
{
    char VAR_4[VAR_1];
    PROCESS_INFORMATION VAR_5;
    STARTUPINFOA VAR_6 = { 0 };
    DWORD VAR_7;
    HANDLE VAR_8, VAR_9 = 0;
    struct shared_struct VAR_10, *VAR_11;
    BOOL VAR_12;

    VAR_7=FUNC_2();
    VAR_8=FUNC_6(((void*)0),10,VAR_7);
    FUNC_5(VAR_8!=((void*)0),"SHAllocShared(NULL...) failed: %u\n", FUNC_3());
    VAR_12 = FUNC_7(VAR_8, VAR_7);
    FUNC_5( VAR_12, "SHFreeShared failed: %u\n", FUNC_3());

    VAR_10.value = 0x12345678;
    VAR_10.handle = 0;
    VAR_8 = FUNC_6(&VAR_10, sizeof(VAR_10), VAR_7);
    FUNC_5(VAR_8!=((void*)0),"SHAllocShared(NULL...) failed: %u\n", FUNC_3());

    VAR_11=FUNC_8(VAR_8,VAR_7);
    FUNC_5(VAR_11!=((void*)0),"SHLockShared failed: %u\n", FUNC_3());
    if (VAR_11!=((void*)0))
        FUNC_5(VAR_11->value == 0x12345678, "Wrong value in shared memory: %d instead of %d\n", VAR_11->value, 0x12345678);
    VAR_12 = FUNC_9(VAR_11);
    FUNC_5( VAR_12, "SHUnlockShared failed: %u\n", FUNC_3());

    FUNC_10(VAR_4, "%s %s %d %p", VAR_3[0], VAR_3[1], VAR_7, VAR_8);
    VAR_12 = FUNC_1(((void*)0), VAR_4, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_6, &VAR_5);
    FUNC_5(VAR_12, "could not create child process error: %u\n", FUNC_3());
    if (VAR_12)
    {
        FUNC_11(VAR_5.hProcess);
        FUNC_0(VAR_5.hThread);
        FUNC_0(VAR_5.hProcess);

        VAR_11 = FUNC_8(VAR_8, VAR_7);
        FUNC_5(VAR_11 != ((void*)0),"SHLockShared failed: %u\n", FUNC_3());
        if (VAR_11 != ((void*)0) && VAR_11->value != 0x12345678)
        {
            FUNC_5(VAR_11->value == 0x12345679, "Wrong value in shared memory: %d instead of %d\n", VAR_11->value, 0x12345679);
            VAR_9 = VAR_11->handle;
            FUNC_5(VAR_9 != ((void*)0), "Expected handle in shared memory\n");
        }
        VAR_12 = FUNC_9(VAR_11);
        FUNC_5(VAR_12, "SHUnlockShared failed: %u\n", FUNC_3());
    }

    VAR_12 = FUNC_7(VAR_8, VAR_7);
    FUNC_5( VAR_12, "SHFreeShared failed: %u\n", FUNC_3());

    if (VAR_9)
    {
        VAR_11 = FUNC_8(VAR_9, VAR_7);
        FUNC_5(VAR_11 != ((void*)0),"SHLockShared failed: %u\n", FUNC_3());
        if (VAR_11 != ((void*)0))
            FUNC_5(VAR_11->value == 0xDEADBEEF, "Wrong value in shared memory: %d instead of %d\n", VAR_11->value, 0xDEADBEEF);
        VAR_12 = FUNC_9(VAR_11);
        FUNC_5(VAR_12, "SHUnlockShared failed: %u\n", FUNC_3());

        VAR_12 = FUNC_7(VAR_9, VAR_7);
        FUNC_5(VAR_12, "SHFreeShared failed: %u\n", FUNC_3());
    }

    FUNC_4(0xdeadbeef);
    VAR_12 = FUNC_7(((void*)0), VAR_7);
    FUNC_5(VAR_12, "SHFreeShared failed: %u\n", FUNC_3());
    FUNC_5(FUNC_3() == 0xdeadbeef, "last error should not have changed, got %u\n", FUNC_3());
}
