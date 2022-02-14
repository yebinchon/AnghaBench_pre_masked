
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int const) ;

const char *
FUNC_2(const char *VAR_0, const char *VAR_1[])
{
    if (VAR_1)
    {
        int VAR_2;
        const int VAR_3 = FUNC_0(VAR_0);
        for (VAR_2 = 0; VAR_1[VAR_2]; ++VAR_2)
        {
            if (!FUNC_1(VAR_1[VAR_2], VAR_0, VAR_3))
            {
                const char *VAR_4 = VAR_1[VAR_2] + VAR_3;
                if (*VAR_4 == '=')
                {
                    return VAR_4 + 1;
                }
            }
        }
    }
    return ((void*)0);
}
