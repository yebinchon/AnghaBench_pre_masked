
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*) ;

gboolean
FUNC_5 (sqlite3 *VAR_4, const char *VAR_5)
{
    sqlite3_stmt *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_4 (VAR_4, VAR_5);
    if (!VAR_6)
        return VAR_0;

    VAR_7 = FUNC_3 (VAR_6);
    if (VAR_7 == VAR_1) {
        const gchar *VAR_8 = FUNC_1 (VAR_4);

        FUNC_0 ("Couldn't execute query, error: %d->'%s'\n",
                   VAR_7, VAR_8 ? VAR_8 : "no error given");
        FUNC_2 (VAR_6);
        return VAR_0;
    }
    FUNC_2 (VAR_6);

    if (VAR_7 == VAR_2)
        return VAR_3;
    return VAR_0;
}
