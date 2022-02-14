
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, char **VAR_1, char **VAR_2 )
{
    const char *VAR_3;


    char *VAR_4 = FUNC_4(VAR_0, '/');
    char *VAR_5 = FUNC_4(VAR_0, '\\');

    if (VAR_4 || VAR_5)
        VAR_3 = FUNC_1(VAR_4, VAR_5) + 1;
    else
        VAR_3 = VAR_0;


    if (VAR_2)
        *VAR_2 = FUNC_3(VAR_3);


    while (VAR_3 > VAR_0 && (*(VAR_3-1) == '/' || *(VAR_3-1) == '\\'))
        VAR_3--;


    *VAR_1 = FUNC_0(VAR_3 - VAR_0 + 1);
    if (VAR_3 > VAR_0)
        FUNC_2(*VAR_1, VAR_0, VAR_3 - VAR_0);
    (*VAR_1)[VAR_3 - VAR_0] = '\0';
}
