
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(int VAR_0, TCHAR *VAR_1[])
{
    if(VAR_0 != 2)
    {
        FUNC_2(FUNC_0("Usage: %s <dir>\n"), VAR_1[0]);
        return -1;
    }

    FUNC_1(VAR_1[1]);

    return 0;
}
