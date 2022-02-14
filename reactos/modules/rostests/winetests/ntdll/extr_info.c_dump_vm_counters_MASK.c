
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* PeakVirtualSize; char const* VirtualSize; char const* PageFaultCount; char const* PeakWorkingSetSize; char const* WorkingSetSize; char const* QuotaPeakPagedPoolUsage; char const* QuotaPagedPoolUsage; char const* QuotaPeakNonPagedPoolUsage; char const* QuotaNonPagedPoolUsage; char const* PagefileUsage; char const* PeakPagefileUsage; } ;
typedef TYPE_1__ VM_COUNTERS ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const VM_COUNTERS *VAR_1)
{
    FUNC_0("%s:\n", VAR_0);
    FUNC_0("PeakVirtualSize           : %lu\n", VAR_1->PeakVirtualSize);
    FUNC_0("VirtualSize               : %lu\n", VAR_1->VirtualSize);
    FUNC_0("PageFaultCount            : %u\n", VAR_1->PageFaultCount);
    FUNC_0("PeakWorkingSetSize        : %lu\n", VAR_1->PeakWorkingSetSize);
    FUNC_0("WorkingSetSize            : %lu\n", VAR_1->WorkingSetSize);
    FUNC_0("QuotaPeakPagedPoolUsage   : %lu\n", VAR_1->QuotaPeakPagedPoolUsage);
    FUNC_0("QuotaPagedPoolUsage       : %lu\n", VAR_1->QuotaPagedPoolUsage);
    FUNC_0("QuotaPeakNonPagePoolUsage : %lu\n", VAR_1->QuotaPeakNonPagedPoolUsage);
    FUNC_0("QuotaNonPagePoolUsage     : %lu\n", VAR_1->QuotaNonPagedPoolUsage);
    FUNC_0("PagefileUsage             : %lu\n", VAR_1->PagefileUsage);
    FUNC_0("PeakPagefileUsage         : %lu\n", VAR_1->PeakPagefileUsage);
}
