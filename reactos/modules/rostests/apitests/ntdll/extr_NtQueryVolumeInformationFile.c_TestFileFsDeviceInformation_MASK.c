
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int * HANDLE ;
typedef int FILE_FS_DEVICE_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static
VOID
FUNC_4(HANDLE VAR_6)
{
    IO_STATUS_BLOCK VAR_7;
    FILE_FS_DEVICE_INFORMATION VAR_8;
    NTSTATUS VAR_9;


    FUNC_2(0xdeadb33f);
    VAR_9 = FUNC_1(VAR_6, ((void*)0), &VAR_8, sizeof(FILE_FS_DEVICE_INFORMATION), VAR_0);
    FUNC_3(VAR_9 == VAR_1, "Expected STATUS_ACCESS_VIOLATION, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdeadb33f, "Expected 0xdeadb33f, got %lx\n", FUNC_0());

    FUNC_2(0xcacacaca);
    VAR_9 = FUNC_1(VAR_6, &VAR_7, ((void*)0), sizeof(FILE_FS_DEVICE_INFORMATION), VAR_0);
    FUNC_3(VAR_9 == VAR_1, "Expected STATUS_ACCESS_VIOLATION, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xcacacaca, "Expected 0xcacacaca, got %lx\n", FUNC_0());

    FUNC_2(0xdadadada);
    VAR_9 = FUNC_1(VAR_6, &VAR_7, &VAR_8, 0, VAR_0);
    FUNC_3(VAR_9 == VAR_2, "Expected STATUS_INFO_LENGTH_MISMATCH, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdadadada, "Expected 0xdadadada, got %lx\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_1(VAR_6, &VAR_7, &VAR_8, sizeof(FILE_FS_DEVICE_INFORMATION), 0);
    FUNC_3(VAR_9 == VAR_4, "Expected STATUS_INVALID_INFO_CLASS, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %lx\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_1(((void*)0), &VAR_7, &VAR_8, sizeof(FILE_FS_DEVICE_INFORMATION), VAR_0);
    FUNC_3(VAR_9 == VAR_3, "Expected STATUS_INVALID_HANDLE, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %lx\n", FUNC_0());


    FUNC_2(0xdeaddead);
    VAR_9 = FUNC_1((HANDLE)(-1), &VAR_7, &VAR_8, sizeof(FILE_FS_DEVICE_INFORMATION), VAR_0);
    FUNC_3(VAR_9 == VAR_5, "Expected STATUS_OBJECT_TYPE_MISMATCH, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdeaddead, "Expected 0xdeaddead, got %lx\n", FUNC_0());


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, VAR_0);
    FUNC_3(VAR_9 == VAR_2, "Expected STATUS_INFO_LENGTH_MISMATCH, got 0x%lx\n", VAR_9);
    FUNC_3(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %lx\n", FUNC_0());
}
