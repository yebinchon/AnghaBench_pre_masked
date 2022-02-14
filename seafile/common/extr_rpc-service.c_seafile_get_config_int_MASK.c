
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*,int *) ;

int
FUNC_2 (const char *VAR_4, GError **VAR_5)
{
    gboolean VAR_6 = VAR_2;

    int VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_6);

    if (!VAR_6) {
        FUNC_0 (VAR_5, VAR_0, VAR_1, "Config not exists");
        return -1;
    }

    return VAR_7;
}
