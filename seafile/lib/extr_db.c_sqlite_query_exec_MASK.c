
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (int *,char const*,int *,int *,char**) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (sqlite3 *VAR_1, const char *VAR_2)
{
    char *VAR_3 = ((void*)0);
    int VAR_4;

    VAR_4 = FUNC_1 (VAR_1, VAR_2, ((void*)0), ((void*)0), &VAR_3);

    if (VAR_4 != VAR_0) {
        if (VAR_3 != ((void*)0)) {
            FUNC_0 ("SQL error: %d - %s\n:\t%s\n", VAR_4, VAR_3, VAR_2);
            FUNC_2 (VAR_3);
        }
        return -1;
    }

    return 0;
}
