
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int INT ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,size_t) ;

INT FUNC_2(WCHAR* VAR_0, size_t VAR_1, const WCHAR *VAR_2)
{
    size_t VAR_3 = 0;
    if(!VAR_0 || !VAR_1)
        return 22;

    VAR_0[0] = 0;

    if(!VAR_2)
        return 22;

    VAR_3 = FUNC_0(VAR_2) + 1;

    if(VAR_3 > VAR_1)
        return 34;

    FUNC_1(VAR_0, VAR_2, VAR_3 * sizeof(WCHAR));

    return 0;
}
