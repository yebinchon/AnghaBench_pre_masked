
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG_PTR ;
typedef scalar_t__ SIZE_T ;
typedef scalar_t__ PVOID ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;

VOID
FUNC_5(ULONG_PTR VAR_3, SIZE_T VAR_4, SIZE_T VAR_5)
{
    NTSTATUS VAR_6;
    PVOID VAR_7;
    SIZE_T VAR_8;


    VAR_7 = (PVOID)VAR_3;
    VAR_8 = VAR_4;
    VAR_6 = FUNC_1(FUNC_2(),
                                     &VAR_7,
                                     0,
                                     &VAR_8,
                                     VAR_1,
                                     VAR_2);
    FUNC_4(FUNC_0(VAR_6), "NtAllocateVirtualMemory failed!\n");
    FUNC_4(VAR_7 == (PVOID)(VAR_3 & ~((ULONG_PTR)0xFFFF)), "Got back wrong base address: %p\n", VAR_7);
    FUNC_4(VAR_8 == VAR_5, "Alloc of 0x%Ix: got back wrong size: 0x%Ix, expected 0x%Ix\n", VAR_4, VAR_8, VAR_5);
    VAR_6 = FUNC_3(FUNC_2(), &VAR_7, &VAR_8, VAR_0);
    FUNC_4(FUNC_0(VAR_6), "NtFreeVirtualMemory failed!\n");
}
