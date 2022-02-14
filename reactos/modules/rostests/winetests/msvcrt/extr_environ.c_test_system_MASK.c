
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0 = FUNC_1(((void*)0));
    FUNC_0(VAR_0 == 1, "Expected system to return 1, got %d\n", VAR_0);

    VAR_0 = FUNC_1("echo OK");
    FUNC_0(VAR_0 == 0, "Expected system to return 0, got %d\n", VAR_0);
}
