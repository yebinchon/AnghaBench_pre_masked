
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_2;

    FUNC_1(VAR_1, VAR_0);
    VAR_2 = FUNC_3(VAR_0);

    if(VAR_2 && (VAR_0[VAR_2-1] == '\\'))
        VAR_0[VAR_2-1] = 0;

    FUNC_2("test1.txt");
    FUNC_2("test2.txt");
    FUNC_2("test3.txt");
    FUNC_2("test_5.txt");
    FUNC_0("test4.txt", ((void*)0));
    FUNC_0("testdir2", ((void*)0));
    FUNC_0("testdir2\\nested", ((void*)0));
    FUNC_2("testdir2\\one.txt");
    FUNC_2("testdir2\\nested\\two.txt");
}
