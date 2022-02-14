
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbi ;
typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int PPEB ;
typedef int NTSTATUS ;
typedef int DWORD_PTR ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,int,struct _PROCESS_BASIC_INFORMATION_PRIVATE*,int,int*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    NTSTATUS VAR_7;
    ULONG VAR_8;

    typedef struct _PROCESS_BASIC_INFORMATION_PRIVATE {
        DWORD_PTR ExitStatus;
        PPEB PebBaseAddress;
        DWORD_PTR AffinityMask;
        DWORD_PTR BasePriority;
        ULONG_PTR UniqueProcessId;
        ULONG_PTR InheritedFromUniqueProcessId;
    } PROCESS_BASIC_INFORMATION_PRIVATE;

    PROCESS_BASIC_INFORMATION_PRIVATE VAR_9;






    FUNC_3("Check nonexistent info class\n");
    VAR_7 = FUNC_2(((void*)0), -1, ((void*)0), 0, ((void*)0));
    FUNC_1( VAR_7 == VAR_4 || VAR_7 == VAR_5 ,
        "Expected STATUS_INVALID_INFO_CLASS or STATUS_NOT_IMPLEMENTED, got %08x\n", VAR_7);


    FUNC_3("Check NULL handle and buffer and zero-length buffersize\n");
    VAR_7 = FUNC_2(((void*)0), VAR_0, ((void*)0), 0, ((void*)0));
    FUNC_1( VAR_7 == VAR_2, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_7);


    FUNC_3("Check NULL handle and buffer\n");
    VAR_7 = FUNC_2(((void*)0), VAR_0, ((void*)0), sizeof(VAR_9), ((void*)0));
    FUNC_1( VAR_7 == VAR_1 || VAR_7 == VAR_3,
        "Expected STATUS_ACCESS_VIOLATION or STATUS_INVALID_HANDLE(W2K3), got %08x\n", VAR_7);


    FUNC_3("Check NULL handle\n");
    VAR_7 = FUNC_2(((void*)0), VAR_0, &VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_1( VAR_7 == VAR_3, "Expected STATUS_INVALID_HANDLE, got %08x\n", VAR_7);


    FUNC_3("Check NULL handle and too large buffersize\n");
    VAR_7 = FUNC_2(((void*)0), VAR_0, &VAR_9, sizeof(VAR_9) * 2, ((void*)0));
    FUNC_1( VAR_7 == VAR_2, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_7);


    FUNC_3("Check NULL ReturnLength\n");
    VAR_7 = FUNC_2(FUNC_0(), VAR_0, &VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_1( VAR_7 == VAR_6, "Expected STATUS_SUCCESS, got %08x\n", VAR_7);


    FUNC_3("Check with correct parameters\n");
    VAR_7 = FUNC_2(FUNC_0(), VAR_0, &VAR_9, sizeof(VAR_9), &VAR_8);
    FUNC_1( VAR_7 == VAR_6, "Expected STATUS_SUCCESS, got %08x\n", VAR_7);
    FUNC_1( sizeof(VAR_9) == VAR_8, "Inconsistent length %d\n", VAR_8);


    FUNC_3("Too large buffersize\n");
    VAR_7 = FUNC_2(FUNC_0(), VAR_0, &VAR_9, sizeof(VAR_9) * 2, &VAR_8);
    FUNC_1( VAR_7 == VAR_2, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_7);
    FUNC_1( sizeof(VAR_9) == VAR_8, "Inconsistent length %d\n", VAR_8);


    FUNC_3("ProcessID : %lx\n", VAR_9.UniqueProcessId);
    FUNC_1( VAR_9.UniqueProcessId > 0, "Expected a ProcessID > 0, got 0\n");
}
