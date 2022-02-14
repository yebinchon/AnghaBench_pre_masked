
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

BOOL FUNC_2(DWORD *VAR_7)
{
    *VAR_7 = VAR_1;
    if (VAR_5 == (UINT)-1)
        return VAR_0;

    if (VAR_4 + 1 < VAR_3)
    {
        *VAR_7 = FUNC_0(VAR_4);
        FUNC_1(VAR_4);
        ++VAR_4;
        return VAR_2;
    }

    if (VAR_5 == 0 || VAR_6 < VAR_5)
    {
        *VAR_7 = FUNC_0(VAR_4);
        FUNC_1(VAR_4);
        VAR_4 = 0;
        ++VAR_6;
        return VAR_2;
    }

    return VAR_0;
}
