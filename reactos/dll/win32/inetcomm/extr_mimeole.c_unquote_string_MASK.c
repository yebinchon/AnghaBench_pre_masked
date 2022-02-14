
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2)
{
    BOOL VAR_3 = VAR_0;
    char *VAR_4, *VAR_5;

    while(*VAR_2 == ' ' || *VAR_2 == '\t') VAR_2++;

    if(*VAR_2 == '"')
    {
        VAR_3 = VAR_1;
        VAR_2++;
    }
    VAR_4 = FUNC_2(VAR_2);
    for(VAR_5 = VAR_4; *VAR_5; VAR_5++)
    {
        if(*VAR_5 == '\\')
            FUNC_1(VAR_5, VAR_5 + 1, FUNC_3(VAR_5 + 1) + 1);
        else if(*VAR_5 == '"')
        {
            if(!VAR_3)
            {
                FUNC_0("quote in unquoted string\n");
            }
            else
            {
                *VAR_5 = '\0';
                break;
            }
        }
    }
    return VAR_4;
}
