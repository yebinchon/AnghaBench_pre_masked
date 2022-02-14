
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sbi ;
typedef int ULONG ;
struct TYPE_3__ {int NumberOfProcessors; } ;
typedef TYPE_1__ SYSTEM_BASIC_INFORMATION ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int,int*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    NTSTATUS VAR_7;
    ULONG VAR_8;
    SYSTEM_BASIC_INFORMATION VAR_9;






    FUNC_2("Check nonexistent info class\n");
    VAR_7 = FUNC_1(-1, ((void*)0), 0, ((void*)0));
    FUNC_0( VAR_7 == VAR_2 || VAR_7 == VAR_4 ,
        "Expected STATUS_INVALID_INFO_CLASS or STATUS_NOT_IMPLEMENTED, got %08x\n", VAR_7);


    FUNC_2("Check zero-length buffer\n");
    VAR_7 = FUNC_1(VAR_6, ((void*)0), 0, ((void*)0));
    FUNC_0( VAR_7 == VAR_1, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_7);


    FUNC_2("Check no SystemInformation buffer\n");
    VAR_7 = FUNC_1(VAR_6, ((void*)0), sizeof(VAR_9), ((void*)0));
    FUNC_0( VAR_7 == VAR_0 || VAR_7 == VAR_3 ,
        "Expected STATUS_ACCESS_VIOLATION or STATUS_INVALID_PARAMETER, got %08x\n", VAR_7);


    FUNC_2("Check no ReturnLength pointer\n");
    VAR_7 = FUNC_1(VAR_6, &VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_0( VAR_7 == VAR_5, "Expected STATUS_SUCCESS, got %08x\n", VAR_7);


    FUNC_2("Check a too large buffer size\n");
    VAR_7 = FUNC_1(VAR_6, &VAR_9, sizeof(VAR_9) * 2, &VAR_8);
    FUNC_0( VAR_7 == VAR_1, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_7);


    FUNC_2("Check with correct parameters\n");
    VAR_7 = FUNC_1(VAR_6, &VAR_9, sizeof(VAR_9), &VAR_8);
    FUNC_0( VAR_7 == VAR_5, "Expected STATUS_SUCCESS, got %08x\n", VAR_7);
    FUNC_0( sizeof(VAR_9) == VAR_8, "Inconsistent length %d\n", VAR_8);


    FUNC_2("Number of Processors : %d\n", VAR_9.NumberOfProcessors);
    FUNC_0( VAR_9.NumberOfProcessors > 0, "Expected more than 0 processors, got %d\n", VAR_9.NumberOfProcessors);
}
