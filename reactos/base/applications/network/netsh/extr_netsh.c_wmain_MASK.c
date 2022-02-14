
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;

int FUNC_2(int VAR_0, WCHAR *VAR_1[])
{
    int VAR_2;

    FUNC_0("stub:");
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_0(" %s", FUNC_1(VAR_1[VAR_2]));
    FUNC_0("\n");

    return 0;
}
