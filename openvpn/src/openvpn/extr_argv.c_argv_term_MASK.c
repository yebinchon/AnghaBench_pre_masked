
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_5(const char **VAR_0)
{
    const char *VAR_1 = *VAR_0;
    const char *VAR_2 = ((void*)0);
    size_t VAR_3 = 0;

    if (*VAR_1 == '\0')
    {
        return ((void*)0);
    }

    while (1)
    {
        const int VAR_4 = *VAR_1;
        if (VAR_4 == '\0')
        {
            break;
        }
        if (VAR_2)
        {
            if (!FUNC_2(VAR_4))
            {
                ++VAR_3;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (!FUNC_2(VAR_4))
            {
                VAR_2 = VAR_1;
                VAR_3 = 1;
            }
        }
        ++VAR_1;
    }
    *VAR_0 = VAR_1;

    if (VAR_2)
    {
        char *VAR_5;
        FUNC_0(VAR_3 > 0);
        VAR_5 = FUNC_3(VAR_3 + 1);
        FUNC_1(VAR_5);
        FUNC_4(VAR_5, VAR_2, VAR_3);
        VAR_5[VAR_3] = '\0';
        return VAR_5;
    }
    else
    {
        return ((void*)0);
    }
}
