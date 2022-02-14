
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int header_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(header_t *VAR_2, char *VAR_3)
{
    char *VAR_4 = VAR_3, *VAR_5 = VAR_3;
    BOOL VAR_6 = VAR_0, VAR_7 = VAR_0;

    while(*VAR_4)
    {
        if(!VAR_6 && *VAR_4 == ';')
        {
            *VAR_4 = '\0';
            if(VAR_7) FUNC_0(VAR_2, VAR_5);
            VAR_7 = VAR_1;
            VAR_5 = VAR_4 + 1;
        }
        else if(*VAR_4 == '"')
            VAR_6 = !VAR_6;
        VAR_4++;
    }
    if(VAR_7) FUNC_0(VAR_2, VAR_5);
}
