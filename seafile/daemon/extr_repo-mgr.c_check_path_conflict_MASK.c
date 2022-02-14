
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gboolean ;
typedef int GError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int *) ;
 char* FUNC_1 (int ,char const*,int,int ,char*,int ,int **) ;

__attribute__((used)) static gboolean
FUNC_2 (const char *VAR_2, char **VAR_3)
{
    gboolean VAR_4 = VAR_0;
    GError *VAR_5 = ((void*)0);

    VAR_4 = FUNC_0 (VAR_1, VAR_2, 0, ((void*)0));
    if (VAR_4) {
        *VAR_3 = FUNC_1 (VAR_1, VAR_2, -1,
                                              0, "", 0, &VAR_5);
        if (!*VAR_3)
            VAR_4 = VAR_0;
    }

    return VAR_4;
}
