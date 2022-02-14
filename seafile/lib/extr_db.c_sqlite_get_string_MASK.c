
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,int,char const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*) ;

char *FUNC_7 (sqlite3 *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = ((void*)0);
    int VAR_5;
    sqlite3_stmt *VAR_6;
    char *VAR_7;

    if ( !(VAR_6 = FUNC_6(VAR_2, VAR_3)) )
        return ((void*)0);

    VAR_5 = FUNC_5 (VAR_6);
    if (VAR_5 == VAR_1) {
        VAR_4 = (const char *)FUNC_2 (VAR_6, 0);
        VAR_7 = FUNC_0(VAR_4);
        FUNC_4 (VAR_6);
        return VAR_7;
    }

    if (VAR_5 == VAR_0) {
        const gchar *VAR_8 = FUNC_3 (VAR_2);
        FUNC_1 ("Couldn't execute query, error: %d->'%s'\n",
                   VAR_5, VAR_8 ? VAR_8 : "no error given");
        FUNC_4 (VAR_6);
        return ((void*)0);
    }

    FUNC_4(VAR_6);
    return ((void*)0);
}
