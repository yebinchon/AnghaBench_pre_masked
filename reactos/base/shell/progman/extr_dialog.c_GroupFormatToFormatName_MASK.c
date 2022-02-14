
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef size_t GROUPFORMAT ;


 size_t VAR_0 ;

LPCWSTR FUNC_0(GROUPFORMAT VAR_1)
{
    static const LPCWSTR VAR_2[] =
    {
        L"Windows 3.1",
        L"NT Ansi",
        L"NT Unicode"
    };

    if (VAR_1 > VAR_0)
        return ((void*)0);
    else
        return VAR_2[VAR_1];
}
