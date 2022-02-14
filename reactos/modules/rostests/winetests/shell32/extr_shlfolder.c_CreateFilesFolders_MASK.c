
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0(".\\testdir", ((void*)0));
    FUNC_0(".\\testdir\\test.txt", ((void*)0));
    FUNC_1 (".\\testdir\\test1.txt ");
    FUNC_1 (".\\testdir\\test2.txt ");
    FUNC_1 (".\\testdir\\test3.txt ");
    FUNC_0(".\\testdir\\testdir2 ", ((void*)0));
    FUNC_0(".\\testdir\\testdir2\\subdir", ((void*)0));
}
