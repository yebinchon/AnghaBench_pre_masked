
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int (*) ()) ;
 char** FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 char** VAR_0 ;

char **FUNC_3(int *VAR_1, char *VAR_2[])
{
    int VAR_3, VAR_4 = *VAR_1;
    char **VAR_5 = VAR_0;

    FUNC_2();

    VAR_0 = FUNC_1(sizeof(*VAR_0) * (VAR_4 + 1), "argv copy");
    if (VAR_0 == ((void*)0))
        return ((void*)0);


    if (VAR_5 == ((void*)0))
        FUNC_0(FUNC_2);

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        VAR_0[VAR_3] = VAR_2[VAR_3];
    VAR_0[VAR_3] = ((void*)0);
    *VAR_1 = VAR_3;
    return VAR_0;
}
