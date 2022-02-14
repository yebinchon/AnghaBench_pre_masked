
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int settings_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int const*,int *,int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int VAR_2 ;

BOOL
FUNC_3(const WCHAR *VAR_3, int VAR_4, WCHAR *VAR_5[], const settings_t *VAR_6)
{


    if (FUNC_2(VAR_5[0], L"--config") == 0
        && VAR_4 > 1
        && !FUNC_0(VAR_3, VAR_5[1], VAR_6)
        )
    {
        return VAR_0;
    }


    if (FUNC_1(VAR_5[0] + 2, VAR_2) == -1)
    {
        return VAR_0;
    }

    return VAR_1;
}
