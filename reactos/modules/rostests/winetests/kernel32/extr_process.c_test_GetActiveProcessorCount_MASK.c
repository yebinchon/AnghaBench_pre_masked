
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_1;

    if (!&FUNC_3)
    {
        FUNC_4("GetActiveProcessorCount not available, skipping test\n");
        return;
    }

    VAR_1 = FUNC_3(0);
    FUNC_2(VAR_1, "GetActiveProcessorCount failed, error %u\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_3(101);
    FUNC_2(VAR_1 == 0, "Expeced GetActiveProcessorCount to fail\n");
    FUNC_2(FUNC_0() == VAR_0, "Expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0());
}
