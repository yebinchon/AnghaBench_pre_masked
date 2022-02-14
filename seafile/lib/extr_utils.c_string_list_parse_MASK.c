
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GList ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 char** FUNC_4 (char const*,char const*,int ) ;

GList *
FUNC_5 (const char *VAR_0, const char *VAR_1)
{
    if (!VAR_0)
        return ((void*)0);

    GList *VAR_2 = ((void*)0);
    char **VAR_3 = FUNC_4 (VAR_0, VAR_1, 0);
    char **VAR_4;

    for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
        VAR_2 = FUNC_0 (VAR_2, FUNC_2(*VAR_4));
    }
    VAR_2 = FUNC_1 (VAR_2);

    FUNC_3 (VAR_3);
    return VAR_2;
}
