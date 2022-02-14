
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*,char) ;

int
FUNC_2(char *VAR_3, int VAR_4)
{
    char *VAR_5;
    int VAR_6 = 0;

    if (VAR_4)
    {
        VAR_6 = FUNC_0(VAR_3);
        if (!VAR_6 || (VAR_6 == -1 && VAR_2 == VAR_0))
            return 0;
    }

    if ((VAR_5 = FUNC_1(VAR_3, VAR_1)))
    {
        *VAR_5 = '\0';
        VAR_6 = FUNC_2(VAR_3, 1);
        *VAR_5 = VAR_1;
    }

    if (!VAR_6 && VAR_4)
        VAR_6 = FUNC_0(VAR_3);

    return VAR_6;
}
