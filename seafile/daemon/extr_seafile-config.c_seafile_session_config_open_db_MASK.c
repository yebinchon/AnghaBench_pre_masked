
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 scalar_t__ FUNC_0 (char const*,int **) ;
 int FUNC_1 (int *,char*) ;

sqlite3 *
FUNC_2 (const char *VAR_0)
{
    sqlite3 *VAR_1;

    if (FUNC_0 (VAR_0, &VAR_1) < 0)
        return ((void*)0);






    char *VAR_2 = "CREATE TABLE IF NOT EXISTS Config ("
        "key TEXT PRIMARY KEY, "
        "value TEXT);";
    FUNC_1 (VAR_1, VAR_2);

    return VAR_1;
}
