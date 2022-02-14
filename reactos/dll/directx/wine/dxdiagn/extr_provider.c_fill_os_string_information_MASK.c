
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int OSVERSIONINFOW ;
typedef int IDxDiagContainerImpl_Container ;
typedef int HRESULT ;


 size_t FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*,char const*) ;

__attribute__((used)) static HRESULT FUNC_3(IDxDiagContainerImpl_Container *VAR_1, OSVERSIONINFOW *VAR_2)
{
    static const WCHAR VAR_3[] = {'W','i','n','d','o','w','s',' ','X','P',' ','P','r','o','f','e','s','s','i','o','n','a','l',0};
    static const WCHAR VAR_4[] = {'s','z','O','S','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_5[] = {'s','z','O','S','E','x','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_6[] = {'s','z','O','S','E','x','L','o','n','g','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_7[] = {'s','z','O','S','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_8[] = {'s','z','O','S','E','x','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_9[] = {'s','z','O','S','E','x','L','o','n','g','E','n','g','l','i','s','h',0};

    static const WCHAR *VAR_10[] = {VAR_4, VAR_5, VAR_6,
                                       VAR_7, VAR_8, VAR_9};

    size_t VAR_11;
    HRESULT VAR_12;



    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++)
    {
        VAR_12 = FUNC_2(VAR_1, VAR_10[VAR_11], VAR_3);
        if (FUNC_1(VAR_12))
            return VAR_12;
    }

    return VAR_0;
}
