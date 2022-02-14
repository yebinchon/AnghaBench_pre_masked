
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;
typedef int (* SqliteRowFunc ) (int *,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*) ;

int
FUNC_5 (sqlite3 *VAR_2, const char *VAR_3,
                             SqliteRowFunc VAR_4, void *VAR_5)
{
    sqlite3_stmt *VAR_6;
    int VAR_7;
    int VAR_8 = 0;

    VAR_6 = FUNC_4 (VAR_2, VAR_3);
    if (!VAR_6) {
        return -1;
    }

    while (1) {
        VAR_7 = FUNC_3 (VAR_6);
        if (VAR_7 != VAR_1)
            break;
        VAR_8++;
        if (!VAR_4 (VAR_6, VAR_5))
            break;
    }

    if (VAR_7 == VAR_0) {
        const gchar *VAR_9 = FUNC_1 (VAR_2);

        FUNC_0 ("Couldn't execute query, error: %d->'%s'\n",
                   VAR_7, VAR_9 ? VAR_9 : "no error given");
        FUNC_2 (VAR_6);
        return -1;
    }

    FUNC_2 (VAR_6);
    return VAR_8;
}
