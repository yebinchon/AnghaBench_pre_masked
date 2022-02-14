
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TEST_STATUS ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

TEST_STATUS FUNC_6(UINT VAR_4)
{
    TEST_STATUS VAR_5 = VAR_3;
    HGLOBAL VAR_6 = 0;
    FUNC_2("Testing the GlobalAlloc and GlobalFree calls");
    FUNC_3("Allocate a buffer");

    FUNC_5(VAR_4);

    VAR_5 = VAR_0;
    VAR_6 = FUNC_0(VAR_4, VAR_1);
    if (0 != VAR_6)
    {
        if (0 == FUNC_1(VAR_6))
        {
            VAR_5 = VAR_2;
        }
    }

    FUNC_3("Result for this run:");
    FUNC_4(VAR_5);
    FUNC_3("");

    return VAR_5;
}
