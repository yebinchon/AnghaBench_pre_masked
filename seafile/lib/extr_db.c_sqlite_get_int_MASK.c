
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char const*) ;

int FUNC_6 (sqlite3 *VAR_2, const char *VAR_3)
{
    int VAR_4 = -1;
    int VAR_5;
    sqlite3_stmt *VAR_6;

    if ( !(VAR_6 = FUNC_5(VAR_2, VAR_3)) )
        return 0;

    VAR_5 = FUNC_4 (VAR_6);
    if (VAR_5 == VAR_1) {
        VAR_4 = FUNC_1 (VAR_6, 0);
        FUNC_3 (VAR_6);
        return VAR_4;
    }

    if (VAR_5 == VAR_0) {
        const gchar *VAR_7 = FUNC_2 (VAR_2);
        FUNC_0 ("Couldn't execute query, error: %d->'%s'\n",
                   VAR_5, VAR_7 ? VAR_7 : "no error given");
        FUNC_3 (VAR_6);
        return -1;
    }

    FUNC_3(VAR_6);
    return VAR_4;
}
