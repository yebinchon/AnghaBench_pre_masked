
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char const*,int **) ;

int
FUNC_4 (const char *VAR_0, sqlite3 **VAR_1)
{
    int VAR_2;
    const char *VAR_3;

    VAR_2 = FUNC_3 (VAR_0, VAR_1);
    if (VAR_2) {
        VAR_3 = FUNC_2 (*VAR_1);

        FUNC_0 ("Couldn't open database:'%s', %s\n",
                   VAR_0, VAR_3 ? VAR_3 : "no error given");

        FUNC_1 (*VAR_1);
        return -1;
    }

    return 0;
}
