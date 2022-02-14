
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0("test1.txt");
    FUNC_0("test2.txt");
    FUNC_0("test3.txt");
    FUNC_0("test_5.txt");
    FUNC_0("one.txt");
    FUNC_0("test4.txt\\test1.txt");
    FUNC_0("test4.txt\\test2.txt");
    FUNC_0("test4.txt\\test3.txt");
    FUNC_0("test4.txt\\one.txt");
    FUNC_0("test4.txt\\nested\\two.txt");
    FUNC_1("test4.txt\\nested");
    FUNC_1("test4.txt");
    FUNC_0("testdir2\\one.txt");
    FUNC_0("testdir2\\test1.txt");
    FUNC_0("testdir2\\test2.txt");
    FUNC_0("testdir2\\test3.txt");
    FUNC_0("testdir2\\test4.txt\\test1.txt");
    FUNC_0("testdir2\\nested\\two.txt");
    FUNC_1("testdir2\\test4.txt");
    FUNC_1("testdir2\\nested");
    FUNC_1("testdir2");
    FUNC_1("c:\\testdir3");
    FUNC_0("nonexistent\\notreal\\test2.txt");
    FUNC_1("nonexistent\\notreal");
    FUNC_1("nonexistent");
}
