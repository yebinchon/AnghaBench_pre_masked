
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,size_t,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;

size_t FUNC_4(char **VAR_0, size_t *VAR_1, FILE *VAR_2)
{
    char *VAR_3 = *VAR_0;
    size_t VAR_4 = *VAR_1;
    size_t VAR_5 = 0;

    if (!VAR_3)
    {
        VAR_4 = 64;
        VAR_3 = FUNC_2(VAR_4);
    }

    while (FUNC_0(&VAR_3[VAR_5], VAR_4 - VAR_5, VAR_2))
    {
        VAR_5 += FUNC_1(&VAR_3[VAR_5]);
        if (VAR_3[VAR_5 - 1] == '\n')
            break;
        else if (VAR_5 == VAR_4 - 1)
        {
            VAR_4 *= 2;
            VAR_3 = FUNC_3(VAR_3, VAR_4);
        }
    }

    *VAR_0 = VAR_3;
    *VAR_1 = VAR_4;
    return VAR_5;
}
