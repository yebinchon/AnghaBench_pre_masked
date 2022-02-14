
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void
FUNC_1(char *VAR_0, const char VAR_1, const char VAR_2)
{
    FUNC_0(VAR_1 != '\0');
    while (*VAR_0)
    {
        if (*VAR_0 == VAR_1)
        {
            *VAR_0 = VAR_2;
        }
        else
        {
            break;
        }
        ++VAR_0;
    }
}
