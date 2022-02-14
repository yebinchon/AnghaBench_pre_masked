
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char**,int,int *) ;
 int * FUNC_1 (void*,char*) ;

char **FUNC_2(void *VAR_0, char **VAR_1)
{
    char **VAR_2 = ((void*)0);
    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_1 && VAR_1[VAR_4]; VAR_4++)
        FUNC_0(VAR_0, VAR_2, VAR_3, FUNC_1(VAR_0, VAR_1[VAR_4]));
    if (VAR_2)
        FUNC_0(VAR_0, VAR_2, VAR_3, ((void*)0));
    return VAR_2;
}
