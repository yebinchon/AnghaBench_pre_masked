
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int,int **,int *) ;

sqlite3_stmt *
FUNC_3 (sqlite3 *VAR_1, const char *VAR_2)
{
    sqlite3_stmt *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_2 (VAR_1, VAR_2, -1, &VAR_3, ((void*)0));

    if (VAR_4 != VAR_0) {
        const gchar *VAR_5 = FUNC_1 (VAR_1);

        FUNC_0 ("Couldn't prepare query, error:%d->'%s'\n\t%s\n",
                   VAR_4, VAR_5 ? VAR_5 : "no error given", VAR_2);

        return ((void*)0);
    }

    return VAR_3;
}
