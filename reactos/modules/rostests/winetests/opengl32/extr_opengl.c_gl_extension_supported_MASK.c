
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static BOOL FUNC_3(const char *VAR_2, const char *VAR_3)
{
    size_t VAR_4 = FUNC_2(VAR_3);

    while (*VAR_2)
    {
        const char *VAR_5;
        size_t VAR_6;

        while (FUNC_0(*VAR_2))
            ++VAR_2;
        VAR_5 = VAR_2;
        while (!FUNC_0(*VAR_2) && *VAR_2)
            ++VAR_2;

        VAR_6 = VAR_2 - VAR_5;
        if (!VAR_6)
            continue;

        if (VAR_6 == VAR_4 && !FUNC_1(VAR_5, VAR_3, VAR_4))
        {
            return VAR_1;
        }
    }
    return VAR_0;
}
