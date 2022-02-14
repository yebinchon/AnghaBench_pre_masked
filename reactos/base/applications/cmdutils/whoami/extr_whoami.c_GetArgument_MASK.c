
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

BOOL FUNC_1(WCHAR* VAR_2, int VAR_3, WCHAR* VAR_4[])
{
    int VAR_5;

    if (!VAR_2)
        return VAR_0;

    for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
    {
        if (FUNC_0(VAR_4[VAR_5], VAR_2) == 0)
            return VAR_1;
    }

    return VAR_0;
}
