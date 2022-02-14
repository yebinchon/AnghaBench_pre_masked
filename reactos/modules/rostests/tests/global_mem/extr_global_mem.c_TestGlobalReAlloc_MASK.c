
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_STATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

TEST_STATUS FUNC_6()
{
    TEST_STATUS VAR_1 = VAR_0;
    FUNC_0("Testing GlobalReAlloc()");

    VAR_1 = FUNC_3(VAR_1, FUNC_4());
    VAR_1 = FUNC_3(VAR_1, FUNC_5());

    FUNC_1("GlobalReAlloc test result:");
    FUNC_2(VAR_1);
    return VAR_1;
}
