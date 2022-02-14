
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SearpcClient ;


 char* FUNC_0 (int *,char*,int *,int,char*,char const*) ;

char *
FUNC_1 (SearpcClient *VAR_0, const char *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    return FUNC_0 (
        VAR_0, "seafile_get_config", ((void*)0),
        1, "string", VAR_1);
}
