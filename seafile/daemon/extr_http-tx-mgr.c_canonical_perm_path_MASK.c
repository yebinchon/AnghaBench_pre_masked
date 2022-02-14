
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,int *) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_0)
{
    int VAR_1 = FUNC_3(VAR_0);
    char *VAR_2, *VAR_3;

    if (FUNC_2 (VAR_0, "/") == 0)
        return FUNC_1(VAR_0);

    if (VAR_0[0] == '/' && VAR_0[VAR_1-1] != '/')
        return FUNC_1(VAR_0);

    VAR_2 = FUNC_1(VAR_0);

    if (VAR_2[VAR_1-1] == '/')
        VAR_2[VAR_1-1] = 0;

    if (VAR_2[0] != '/')
        VAR_3 = FUNC_0 ("/", VAR_2, ((void*)0));
    else
        VAR_3 = VAR_2;

    return VAR_3;
}
