
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct shared_struct {int value; int * handle; } ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,...) ;
 int * FUNC_5 (struct shared_struct*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 struct shared_struct* FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (struct shared_struct*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(DWORD VAR_0, HANDLE VAR_1)
{
    struct shared_struct VAR_2, *VAR_3;
    HANDLE VAR_4;
    BOOL VAR_5;


    VAR_3 = FUNC_7(VAR_1, VAR_0);
    FUNC_4(VAR_3 != ((void*)0) || FUNC_3(VAR_3 == ((void*)0)) , "SHLockShared failed: %u\n", FUNC_1());
    if (VAR_3 == ((void*)0))
    {
        FUNC_10("Subprocess failed to modify shared memory, skipping test\n");
        return;
    }

    FUNC_4(VAR_3->value == 0x12345678, "Wrong value in shared memory: %d instead of %d\n", VAR_3->value, 0x12345678);
    VAR_3->value++;

    VAR_2.value = 0xDEADBEEF;
    VAR_2.handle = 0;
    VAR_3->handle = FUNC_5(&VAR_2, sizeof(VAR_2), VAR_0);
    FUNC_4(VAR_3->handle != ((void*)0), "SHAllocShared failed: %u\n", FUNC_1());

    VAR_5 = FUNC_9(VAR_3);
    FUNC_4(VAR_5, "SHUnlockShared failed: %u\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_8(((void*)0), VAR_0, FUNC_0(), 0, 0);
    FUNC_4(VAR_4 == ((void*)0), "expected NULL, got new handle\n");
    FUNC_4(FUNC_1() == 0xdeadbeef, "last error should not have changed, got %u\n", FUNC_1());

    VAR_4 = FUNC_8(VAR_1, VAR_0, FUNC_0(), 0, 0);



    FUNC_4(VAR_4 != ((void*)0) || FUNC_3(VAR_4 == ((void*)0)),
       "SHMapHandle failed: %u\n", FUNC_1());
    if (VAR_4 == ((void*)0))
    {
        FUNC_10("Subprocess failed to map shared memory, skipping test\n");
        return;
    }

    VAR_3 = FUNC_7(VAR_4, FUNC_0());
    FUNC_4(VAR_3 != ((void*)0), "SHLockShared failed: %u\n", FUNC_1());

    if (VAR_3 != ((void*)0))
        FUNC_4(VAR_3->value == 0x12345679, "Wrong value in shared memory: %d instead of %d\n", VAR_3->value, 0x12345679);

    VAR_5 = FUNC_9(VAR_3);
    FUNC_4(VAR_5, "SHUnlockShared failed: %u\n", FUNC_1());

    VAR_5 = FUNC_6(VAR_4, FUNC_0());
    FUNC_4(VAR_5, "SHFreeShared failed: %u\n", FUNC_1());
}
