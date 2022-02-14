
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_1;
    int VAR_2;

    if (!&FUNC_3)
    {
        FUNC_5("SystemFunction036 is not available\n");
        return;
    }

    VAR_1 = FUNC_3(((void*)0), 0);
    FUNC_2(VAR_1 == VAR_0, "Expected SystemFunction036 to return TRUE, got %d\n", VAR_1);


    if (0)
    {
        FUNC_1(0xdeadbeef);
        VAR_1 = FUNC_3(((void*)0), 5);
        FUNC_4("ret = %d, GetLastError() = %d\n", VAR_1, FUNC_0());
    }

    VAR_1 = FUNC_3(&VAR_2, 0);
    FUNC_2(VAR_1 == VAR_0, "Expected SystemFunction036 to return TRUE, got %d\n", VAR_1);

    VAR_1 = FUNC_3(&VAR_2, sizeof(int));
    FUNC_2(VAR_1 == VAR_0, "Expected SystemFunction036 to return TRUE, got %d\n", VAR_1);
}
