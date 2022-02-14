
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char FUNC_0 (char) ;

void FUNC_1(char *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 1;

    for (VAR_2 = 0, VAR_3 = 0; VAR_1[VAR_2]; VAR_2++)
    {
        if (VAR_4)
        {
            if (VAR_1[VAR_2] != '/' && VAR_1[VAR_2] != '\\')
            {
                VAR_1[VAR_3++] = FUNC_0(VAR_1[VAR_2]);
                VAR_4 = 0;
            }
        }
        else
        {
            if (VAR_1[VAR_2] == '/' || VAR_1[VAR_2] == '\\')
            {
                VAR_4 = 1;
                VAR_1[VAR_3++] = VAR_0;
            }
            else
            {
                VAR_1[VAR_3++] = FUNC_0(VAR_1[VAR_2]);
            }
        }
    }
    VAR_1[VAR_3] = '\0';
}
