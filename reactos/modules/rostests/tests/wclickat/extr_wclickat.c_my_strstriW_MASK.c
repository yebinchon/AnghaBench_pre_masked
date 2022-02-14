
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static const WCHAR* FUNC_1(const WCHAR* VAR_0, const WCHAR* VAR_1)
{
    const WCHAR *VAR_2,*VAR_3;
    WCHAR VAR_4;

    if (!*VAR_1)
        return VAR_0;




    VAR_4=FUNC_0(*VAR_1);
    VAR_1++;
    while (*VAR_0)
    {
        while (FUNC_0(*VAR_0)!=VAR_4 && *VAR_0)
            VAR_0++;

        VAR_2=VAR_0+1;
        VAR_3=VAR_1;
        while (FUNC_0(*VAR_2)==FUNC_0(*VAR_3) && *VAR_2)
        {
            VAR_2++;
            VAR_3++;
        }
        if (!*VAR_3)
            return VAR_0;
        VAR_0++;
    }
    return ((void*)0);
}
