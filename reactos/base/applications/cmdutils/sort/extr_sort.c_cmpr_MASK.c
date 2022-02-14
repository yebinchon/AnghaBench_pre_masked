
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(const void *VAR_2, const void *VAR_3)
{
    char *VAR_4, *VAR_5;

    VAR_4 = *(char **) VAR_2;
    VAR_5 = *(char **) VAR_3;

    if (VAR_1 > 0)
    {
        if (FUNC_1(VAR_4) > VAR_1)
        {
            VAR_4 += VAR_1;
        }
        else
        {
            VAR_4 = "";
        }
        if (FUNC_1(VAR_5) > VAR_1)
        {
            VAR_5 += VAR_1;
        }
        else
        {
            VAR_5 = "";
        }
    }

    if (!VAR_0)
    {
        return FUNC_0(VAR_4, VAR_5);
    }
    else
    {
        return FUNC_0(VAR_5, VAR_4);
    }
}
