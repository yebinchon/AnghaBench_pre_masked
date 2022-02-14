
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int ,int*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    PVOID VAR_7 = ((void*)0), VAR_8;
    SIZE_T VAR_9 = VAR_4;
    NTSTATUS VAR_10;

    VAR_10 = FUNC_1(FUNC_2(),
                                     &VAR_7,
                                     0,
                                     &VAR_9,
                                     VAR_2,
                                     VAR_3);
    FUNC_4(FUNC_0(VAR_10), "NtAllocateVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(((ULONG_PTR)VAR_7 % VAR_4) == 0, "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_7,
                                 &VAR_9,
                                 VAR_0);
    FUNC_4(VAR_10 == VAR_5, "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);


    VAR_9++;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_7,
                                 &VAR_9,
                                 VAR_0);
    FUNC_4(VAR_10 == VAR_6, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);

    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_7,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(VAR_10 == VAR_6, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);


    VAR_9 = VAR_4;
    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+1);

    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_0);
    FUNC_4(VAR_10 == VAR_6, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);

    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+1);
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(VAR_10 == VAR_6, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);


    VAR_9 = VAR_4 - 1;
    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+1);

    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_0);
    FUNC_4(VAR_10 == VAR_5, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_8 == VAR_7, "NtFreeVirtualMemory set wrong buffer.\n");
    FUNC_4(VAR_9 == VAR_4, "NtFreeVirtualMemory did not round Length to PAGE_SIZE.\n");

    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+1);
    VAR_9 = VAR_4-1;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(VAR_10 == VAR_5, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_8 == VAR_7, "NtFreeVirtualMemory set wrong buffer.\n");
    FUNC_4(VAR_9 == VAR_4, "NtFreeVirtualMemory did not round Length to PAGE_SIZE.\n");


    VAR_9 = 2*VAR_4;
    VAR_10 = FUNC_1(FUNC_2(),
                                     &VAR_7,
                                     0,
                                     &VAR_9,
                                     VAR_2,
                                     VAR_3);
    FUNC_4(FUNC_0(VAR_10), "NtAllocateVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == 2*VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(((ULONG_PTR)VAR_7 % VAR_4) == 0, "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_8 = VAR_7;
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(FUNC_0(VAR_10), "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(VAR_8 == VAR_7, "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+VAR_4);
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(FUNC_0(VAR_10), "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(VAR_8 == (PVOID)((ULONG_PTR)VAR_7+VAR_4), "The buffer is not aligned to PAGE_SIZE.\n");


    VAR_9 = 2*VAR_4;
    VAR_10 = FUNC_1(FUNC_2(),
                                     &VAR_7,
                                     0,
                                     &VAR_9,
                                     VAR_2,
                                     VAR_3);
    FUNC_4(FUNC_0(VAR_10), "NtAllocateVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == 2*VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(((ULONG_PTR)VAR_7 % VAR_4) == 0, "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+VAR_4);
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(FUNC_0(VAR_10), "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(VAR_8 == (PVOID)((ULONG_PTR)VAR_7+VAR_4), "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_8 = VAR_7;
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(FUNC_0(VAR_10), "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(VAR_8 == VAR_7, "The buffer is not aligned to PAGE_SIZE.\n");


    VAR_9 = 2*VAR_4;
    VAR_10 = FUNC_1(FUNC_2(),
                                     &VAR_7,
                                     0,
                                     &VAR_9,
                                     VAR_2,
                                     VAR_3);
    FUNC_4(FUNC_0(VAR_10), "NtAllocateVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == 2*VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(((ULONG_PTR)VAR_7 % VAR_4) == 0, "The buffer is not aligned to PAGE_SIZE.\n");

    VAR_8 = (PVOID)((ULONG_PTR)VAR_7+1);
    VAR_9 = VAR_4;
    VAR_10 = FUNC_3(FUNC_2(),
                                 &VAR_8,
                                 &VAR_9,
                                 VAR_1);
    FUNC_4(FUNC_0(VAR_10), "NtFreeVirtualMemory failed : 0x%08lx\n", VAR_10);
    FUNC_4(VAR_9 == 2*VAR_4, "Length mismatch : 0x%08lx\n", (ULONG)VAR_9);
    FUNC_4(VAR_8 == VAR_7, "The buffer is not aligned to PAGE_SIZE.\n");
}
