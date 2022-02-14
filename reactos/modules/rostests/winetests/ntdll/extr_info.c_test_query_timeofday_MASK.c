
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sti ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int LARGE_INTEGER ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct _SYSTEM_TIMEOFDAY_INFORMATION_PRIVATE*,int,int*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    NTSTATUS VAR_3;
    ULONG VAR_4;


    typedef struct _SYSTEM_TIMEOFDAY_INFORMATION_PRIVATE {
        LARGE_INTEGER liKeBootTime;
        LARGE_INTEGER liKeSystemTime;
        LARGE_INTEGER liExpTimeZoneBias;
        ULONG uCurrentTimeZoneId;
        DWORD dwUnknown1[5];
    } SYSTEM_TIMEOFDAY_INFORMATION_PRIVATE;

    SYSTEM_TIMEOFDAY_INFORMATION_PRIVATE VAR_5;
    VAR_3 = FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5), &VAR_4);

    if (VAR_3 == VAR_0)
    {
        FUNC_3("Windows version is NT, we have to cater for differences with W2K/WinXP\n");

        VAR_3 = FUNC_2(VAR_2, &VAR_5, 0, &VAR_4);
        FUNC_1( VAR_3 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_3);
        FUNC_1( 0 == VAR_4, "ReturnLength should be 0, it is (%d)\n", VAR_4);

        VAR_5.uCurrentTimeZoneId = 0xdeadbeef;
        VAR_3 = FUNC_2(VAR_2, &VAR_5, 28, &VAR_4);
        FUNC_1(VAR_3 == VAR_1 || FUNC_0(VAR_3 == VAR_0 ), "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( 0xdeadbeef == VAR_5.uCurrentTimeZoneId, "This part of the buffer should not have been filled\n");

        VAR_3 = FUNC_2(VAR_2, &VAR_5, 32, &VAR_4);
        FUNC_1( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( 32 == VAR_4, "ReturnLength should be 0, it is (%d)\n", VAR_4);
    }
    else
    {
        VAR_3 = FUNC_2(VAR_2, &VAR_5, 0, &VAR_4);
        FUNC_1( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( 0 == VAR_4, "ReturnLength should be 0, it is (%d)\n", VAR_4);

        VAR_5.uCurrentTimeZoneId = 0xdeadbeef;
        VAR_3 = FUNC_2(VAR_2, &VAR_5, 24, &VAR_4);
        FUNC_1( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( 24 == VAR_4, "ReturnLength should be 24, it is (%d)\n", VAR_4);
        FUNC_1( 0xdeadbeef == VAR_5.uCurrentTimeZoneId, "This part of the buffer should not have been filled\n");

        VAR_5.uCurrentTimeZoneId = 0xdeadbeef;
        VAR_3 = FUNC_2(VAR_2, &VAR_5, 32, &VAR_4);
        FUNC_1( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( 32 == VAR_4, "ReturnLength should be 32, it is (%d)\n", VAR_4);
        FUNC_1( 0xdeadbeef != VAR_5.uCurrentTimeZoneId, "Buffer should have been partially filled\n");

        VAR_3 = FUNC_2(VAR_2, &VAR_5, 49, &VAR_4);
        FUNC_1( VAR_3 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_3);
        FUNC_1( VAR_4 == 0 || VAR_4 == sizeof(VAR_5) ,
            "ReturnLength should be 0, it is (%d)\n", VAR_4);

        VAR_3 = FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5), &VAR_4);
        FUNC_1( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
        FUNC_1( sizeof(VAR_5) == VAR_4, "Inconsistent length %d\n", VAR_4);
    }


    FUNC_3("uCurrentTimeZoneId : (%d)\n", VAR_5.uCurrentTimeZoneId);
}
