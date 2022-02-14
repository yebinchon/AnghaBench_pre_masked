
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    FILE* VAR_0;
    FUNC_4(FUNC_3("test_unlink") == 0, "unable to create test dir\n");
    VAR_0 = FUNC_2("test_unlink\\empty", "w");
    FUNC_4(VAR_0 != ((void*)0), "unable to create test file\n");
    if(VAR_0)
      FUNC_1(VAR_0);
    FUNC_4(FUNC_0("test_unlink") != 0, "unlinking a non-empty directory must fail\n");
    FUNC_6("test_unlink\\empty");
    FUNC_5("test_unlink");
}
