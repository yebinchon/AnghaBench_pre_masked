
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char*,int *) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static char *
FUNC_6 (const char *VAR_0)
{
    const char *VAR_1;
    char *VAR_2;
    char *VAR_3;
    char *VAR_4 = ((void*)0);


    if (FUNC_4(VAR_0) <= FUNC_4("http://"))
        return FUNC_2(VAR_0);


    VAR_1 = VAR_0 + FUNC_4("http://");

    VAR_2 = FUNC_5 (VAR_1, ':');
    if (VAR_2) {
        VAR_3 = FUNC_3(VAR_0, VAR_2 - VAR_0);
        VAR_4 = FUNC_1(VAR_3, ":8082", ((void*)0));
        FUNC_0 (VAR_3);
    } else {
        VAR_4 = FUNC_1(VAR_0, ":8082", ((void*)0));
    }

    return VAR_4;
}
