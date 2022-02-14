
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
typedef int SYSTEM_PERFORMANCE_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(void)
{
    NTSTATUS VAR_4;
    ULONG VAR_5;
    ULONGLONG VAR_6[sizeof(SYSTEM_PERFORMANCE_INFORMATION)/sizeof(ULONGLONG) + 5];
    DWORD VAR_7 = sizeof(SYSTEM_PERFORMANCE_INFORMATION);

    VAR_4 = FUNC_1(VAR_2, VAR_6, 0, &VAR_5);
    FUNC_0( VAR_4 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_7, &VAR_5);
    if (VAR_4 == VAR_0 && VAR_3)
    {

        VAR_7 += 16;
        VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_7, &VAR_5);
    }
    FUNC_0( VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    FUNC_0( VAR_5 == VAR_7, "Inconsistent length %d\n", VAR_5);

    VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_7 + 2, &VAR_5);
    FUNC_0( VAR_4 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
    FUNC_0( VAR_5 == VAR_7 || VAR_5 == VAR_7 + 2,
        "Inconsistent length %d\n", VAR_5);


}
