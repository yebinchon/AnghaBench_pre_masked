
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char*,char*) ;
 char* FUNC_1 (void*,char*) ;

__attribute__((used)) static char *FUNC_2(void *VAR_0, char **VAR_1, int VAR_2)
{
    char *VAR_3 = FUNC_1(VAR_0, "");
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 = FUNC_0(VAR_3, "%s%s", VAR_4 ? "\n" : "", VAR_1[VAR_4]);
    return VAR_3;
}
