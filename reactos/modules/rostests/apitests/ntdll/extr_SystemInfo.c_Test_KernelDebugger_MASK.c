
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int KernelDebuggerEnabled; int KernelDebuggerNotPresent; } ;
typedef int SYSTEM_KERNEL_DEBUGGER_INFORMATION ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PUCHAR ;
typedef TYPE_1__* PSYSTEM_KERNEL_DEBUGGER_INFORMATION ;
typedef int NTSTATUS ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,int*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static
void
FUNC_5(void)
{
    NTSTATUS VAR_6;
    ULONG VAR_7;
    ULONG VAR_8[2];
    PSYSTEM_KERNEL_DEBUGGER_INFORMATION VAR_9 = (PVOID)VAR_8;


    VAR_7 = 0x55555555;
    VAR_6 = FUNC_0(VAR_4, ((void*)0), 0, &VAR_7);
    FUNC_4(VAR_6 == VAR_1, "NtQuerySystemInformation returned %lx\n", VAR_6);
    FUNC_4(VAR_7 == 0 ||
       FUNC_3(VAR_7 == sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION)), "ReturnLength = %lu\n", VAR_7);

    VAR_7 = 0x55555555;
    FUNC_2(VAR_8, sizeof(VAR_8), 0x55);
    VAR_6 = FUNC_0(VAR_4, VAR_9, sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION) - 1, &VAR_7);
    FUNC_4(VAR_6 == VAR_1, "NtQuerySystemInformation returned %lx\n", VAR_6);
    FUNC_4(VAR_7 == 0 ||
       FUNC_3(VAR_7 == sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION)), "ReturnLength = %lu\n", VAR_7);
    FUNC_4(VAR_8[0] == 0x55555555, "Buffer[0] = %lx\n", VAR_8[0]);
    FUNC_4(VAR_8[1] == 0x55555555, "Buffer[1] = %lx\n", VAR_8[1]);

    VAR_7 = 0x55555555;
    FUNC_2(VAR_8, sizeof(VAR_8), 0x55);
    VAR_6 = FUNC_0(VAR_4, (PUCHAR)VAR_9 + 1, sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION), &VAR_7);
    FUNC_4(VAR_6 == VAR_3, "NtQuerySystemInformation returned %lx\n", VAR_6);
    FUNC_4(VAR_7 == sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION), "ReturnLength = %lu\n", VAR_7);
    FUNC_4((VAR_8[0] & 0x55fefe55) == 0x55000055, "Buffer[0] = %lx\n", VAR_8[0]);
    FUNC_4(VAR_8[1] == 0x55555555, "Buffer[1] = %lx\n", VAR_8[1]);

    VAR_7 = 0x55555555;
    FUNC_2(VAR_8, sizeof(VAR_8), 0x55);
    VAR_6 = FUNC_0(VAR_4, VAR_9, sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION), &VAR_7);
    FUNC_4(VAR_6 == VAR_3, "NtQuerySystemInformation returned %lx\n", VAR_6);
    FUNC_4(VAR_7 == sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION), "ReturnLength = %lu\n", VAR_7);
    FUNC_4(VAR_9->KernelDebuggerEnabled == VAR_0 ||
       VAR_9->KernelDebuggerEnabled == VAR_5, "KernelDebuggerEnabled = %u\n", VAR_9->KernelDebuggerEnabled);
    FUNC_4(VAR_9->KernelDebuggerNotPresent == VAR_0 ||
       VAR_9->KernelDebuggerNotPresent == VAR_5, "KernelDebuggerNotPresent = %u\n", VAR_9->KernelDebuggerNotPresent);


    VAR_9->KernelDebuggerEnabled = VAR_0;
    VAR_9->KernelDebuggerNotPresent = VAR_5;
    VAR_6 = FUNC_1(VAR_4, VAR_9, sizeof(SYSTEM_KERNEL_DEBUGGER_INFORMATION));
    FUNC_4(VAR_6 == VAR_2, "NtSetSystemInformation returned %lx\n", VAR_6);
}
