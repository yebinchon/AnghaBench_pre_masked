
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wine_prefixW ;
typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int HRESULT ;
typedef char* BSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;

HRESULT FUNC_4(LPCWSTR VAR_2, BOOL VAR_3, BSTR *VAR_4)
{
    const WCHAR *VAR_5 = VAR_2;

    static const WCHAR VAR_6[] = {'w','i','n','e',':'};

    if(!FUNC_3(VAR_2, VAR_6, sizeof(VAR_6)/sizeof(WCHAR)))
        VAR_5 += sizeof(VAR_6)/sizeof(WCHAR);

    if(*VAR_5 || VAR_3) {
        *VAR_4 = FUNC_0(VAR_5);
        if(!*VAR_4)
            return VAR_0;
    }else {
        *VAR_4 = ((void*)0);
    }

    FUNC_1("%s -> %s\n", FUNC_2(VAR_2), FUNC_2(*VAR_4));
    return VAR_1;
}
