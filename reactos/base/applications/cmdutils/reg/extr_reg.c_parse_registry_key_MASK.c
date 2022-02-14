
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int HKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (scalar_t__ const*) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,char) ;

BOOL FUNC_5(const WCHAR *VAR_3, HKEY *VAR_4, WCHAR **VAR_5, WCHAR **VAR_6)
{
    if (!FUNC_3(VAR_3))
        return VAR_0;

    *VAR_5 = FUNC_4(VAR_3, '\\');
    if (*VAR_5) (*VAR_5)++;

    *VAR_4 = FUNC_2(VAR_3);
    if (!*VAR_4)
    {
        if (*VAR_5) *(*VAR_5 - 1) = 0;
        FUNC_1(VAR_1, VAR_3);
        return VAR_0;
    }

    *VAR_6 = FUNC_0(*VAR_4, *VAR_5);

    return VAR_2;
}
