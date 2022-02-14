
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(void)
{

    FUNC_1(0 == FUNC_0(1000000), "GetAsyncKeyState did not return 0\n");
    FUNC_1(0 == FUNC_0(-1000000), "GetAsyncKeyState did not return 0\n");
}
