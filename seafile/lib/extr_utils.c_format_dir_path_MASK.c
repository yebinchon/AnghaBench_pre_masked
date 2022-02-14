
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*,int *) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

char*
FUNC_3 (const char *VAR_0)
{
    int VAR_1 = FUNC_2 (VAR_0);
    char *VAR_2;
    if (VAR_0[0] != '/') {
        VAR_2 = FUNC_0 ("/", VAR_0, ((void*)0));
        VAR_1++;
    } else {
        VAR_2 = FUNC_1 (VAR_0);
    }
    while (VAR_1 > 1 && VAR_2[VAR_1-1] == '/') {
        VAR_2[VAR_1-1] = '\0';
        VAR_1--;
    }

    return VAR_2;
}
