
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LPCWSTR ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,scalar_t__,scalar_t__) ;

LPCWSTR FUNC_2(LPCWSTR VAR_0)
{
    static const WCHAR VAR_1[] = {'i','t','s',':'};
    static const WCHAR VAR_2[] = {'m','s','-','i','t','s',':'};
    static const WCHAR VAR_3[] = {'m','k',':','@','M','S','I','T','S','t','o','r','e',':'};

    if(!FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_1)))
        return VAR_0 + FUNC_0(VAR_1);
    if(!FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_2)))
        return VAR_0 + FUNC_0(VAR_2);
    if(!FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_3)))
        return VAR_0 + FUNC_0(VAR_3);

    return VAR_0;
}
