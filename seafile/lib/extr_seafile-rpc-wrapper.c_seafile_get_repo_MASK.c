
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SearpcClient ;
typedef int GObject ;
typedef int GError ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int * FUNC_1 (int *,char*,int ,int **,int,char*,char const*) ;

GObject *
FUNC_2 (SearpcClient *VAR_1,
                  const char *VAR_2,
                  GError **VAR_3)
{
    FUNC_0 (VAR_1 && VAR_2, ((void*)0));

    return FUNC_1 (
        VAR_1, "seafile_get_repo", VAR_0, VAR_3,
        1, "string", VAR_2);
}
