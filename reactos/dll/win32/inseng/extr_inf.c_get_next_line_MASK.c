
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char**,scalar_t__) ;

__attribute__((used)) static char *FUNC_1(char **VAR_2, char **VAR_3)
{
    BOOL VAR_4 = VAR_0;
    char *VAR_5, *VAR_6;

    VAR_5 = *VAR_2;
    if (!VAR_5 || !*VAR_5) return ((void*)0);

    for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
    {
        if (*VAR_6 == '\n' || *VAR_6 == '\r')
        {
            *VAR_6 = 0;
            VAR_4 = VAR_1;
        }
        else if (VAR_4)
        {
            break;
        }
    }

    *VAR_2 = VAR_6;
    return FUNC_0(VAR_5, VAR_3, VAR_0);
}
