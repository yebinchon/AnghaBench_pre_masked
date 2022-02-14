
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SearpcClient ;


 int FUNC_0 (int *,char*,int *,int,char*,char const*,char*,char const*) ;

int
FUNC_1 (SearpcClient *VAR_0, const char *VAR_1, const char *VAR_2)
{
    if (!VAR_1 || !VAR_2)
        return -1;

    return FUNC_0 (
        VAR_0, "seafile_set_config", ((void*)0),
        2, "string", VAR_1, "string", VAR_2);
}
