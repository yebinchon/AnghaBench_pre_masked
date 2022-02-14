
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;
 char* FUNC_1 (char*) ;

char **
FUNC_2 (char **VAR_0, int VAR_1)
{
    char **VAR_2 = FUNC_0 (sizeof(char *) * VAR_1);
    int VAR_3 = 0;

    for (; VAR_3 < VAR_1; VAR_3++)
        VAR_2[VAR_3] = FUNC_1(VAR_0[VAR_3]);
    return VAR_2;
}
