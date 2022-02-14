
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SearpcClient ;
typedef int GError ;


 int FUNC_0 (int,int *) ;
 char* FUNC_1 (int *,char*,int **,int,char*,char const*,char*,char const*) ;

char *
FUNC_2 (SearpcClient *VAR_0,
                           const char *VAR_1,
                           const char *VAR_2,
                           GError **VAR_3)
{
    FUNC_0 (VAR_0 && VAR_1, ((void*)0));

    return FUNC_1 (
        VAR_0, "seafile_get_repo_property", VAR_3,
        2, "string", VAR_1, "string", VAR_2);
}
