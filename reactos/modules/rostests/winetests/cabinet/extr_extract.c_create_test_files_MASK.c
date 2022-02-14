
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

    FUNC_2("a.txt");
    FUNC_2("b.txt");
    FUNC_0("testdir", ((void*)0));
    FUNC_2("testdir\\c.txt");
    FUNC_2("testdir\\d.txt");
    FUNC_0("dest", ((void*)0));
}
