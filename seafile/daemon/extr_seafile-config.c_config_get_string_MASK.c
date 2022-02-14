
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int sql ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char**) ;

__attribute__((used)) static char *
FUNC_2 (sqlite3 *VAR_1, const char *VAR_2)
{
    char VAR_3[256];
    char *VAR_4 = ((void*)0);

    FUNC_0 (VAR_3, sizeof(VAR_3),
              "SELECT value FROM Config WHERE key='%s';",
              VAR_2);
    if (FUNC_1 (VAR_1, VAR_3,
                                     VAR_0, &VAR_4) < 0)
        return ((void*)0);

    return VAR_4;
}
