
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char WCHAR ;
typedef size_t READYSTATE ;
typedef unsigned char const* LPCWSTR ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const* const) ;
 int FUNC_1 (int) ;

HRESULT FUNC_2(READYSTATE VAR_3, BSTR *VAR_4)
{
    static const WCHAR VAR_5[] = {'u','n','i','n','i','t','i','a','l','i','z','e','d',0};
    static const WCHAR VAR_6[] = {'l','o','a','d','i','n','g',0};
    static const WCHAR VAR_7[] = {'l','o','a','d','e','d',0};
    static const WCHAR VAR_8[] = {'i','n','t','e','r','a','c','t','i','v','e',0};
    static const WCHAR VAR_9[] = {'c','o','m','p','l','e','t','e',0};

    static const LPCWSTR VAR_10[] = {
        VAR_5,
        VAR_6,
        VAR_7,
        VAR_8,
        VAR_9
    };

    FUNC_1(VAR_3 <= VAR_1);
    *VAR_4 = FUNC_0(VAR_10[VAR_3]);
    return *VAR_4 ? VAR_2 : VAR_0;
}
