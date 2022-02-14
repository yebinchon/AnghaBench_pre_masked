
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char** FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char const**) ;
 char** FUNC_3 (int ,int ,char const**,unsigned int) ;
 unsigned int VAR_0 ;
 char* FUNC_4 (char**) ;

__attribute__((used)) static const char **FUNC_5(char *VAR_1, unsigned int *VAR_2)
{
    const char **VAR_3, **VAR_4;
    const char *VAR_5;
    char *VAR_6;
    unsigned int VAR_7 = VAR_0;

    VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_3) * VAR_7);
    if (!VAR_3)
        return ((void*)0);

    *VAR_2 = 0;
    VAR_6 = VAR_1;
    while ((VAR_5 = FUNC_4(&VAR_6)))
    {
        if (*VAR_2 == VAR_7)
        {
            VAR_7 *= 2;
            VAR_4 = FUNC_3(FUNC_0(), 0, VAR_3, sizeof(*VAR_3) * VAR_7);
            if (!VAR_4)
            {
                FUNC_2(FUNC_0(), 0, VAR_3);
                return ((void*)0);
            }
            VAR_3 = VAR_4;
        }
        VAR_3[(*VAR_2)++] = VAR_5;
    }
    VAR_4 = FUNC_3(FUNC_0(), 0, VAR_3, *VAR_2 * sizeof(*VAR_3));
    if (!VAR_4)
        return VAR_3;
    return VAR_4;
}
