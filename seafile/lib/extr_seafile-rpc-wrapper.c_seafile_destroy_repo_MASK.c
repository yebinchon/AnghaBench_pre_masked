
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SearpcClient ;
typedef int GError ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int **,int,char*,char const*) ;

int
FUNC_2 (SearpcClient *VAR_0,
                      const char *VAR_1, GError **VAR_2)
{
    FUNC_0 (VAR_0 && VAR_1, -1);

    return FUNC_1 (
        VAR_0, "seafile_destroy_repo", VAR_2,
        1, "string", VAR_1);
}
