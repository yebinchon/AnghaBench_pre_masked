
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef int* BSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDOMNode *VAR_4, BSTR VAR_5, DWORD VAR_6, DISPID *VAR_7)
{
    const WCHAR *VAR_8;
    DWORD VAR_9 = 0;

    for(VAR_8 = VAR_5; *VAR_8 && FUNC_1(*VAR_8); VAR_8++) {
        VAR_9 = VAR_9*10 + (*VAR_8-'0');
        if(VAR_9 > VAR_2) {
            FUNC_0("too big idx\n");
            return VAR_1;
        }
    }
    if(*VAR_8)
        return VAR_1;

    *VAR_7 = VAR_0 + VAR_9;
    return VAR_3;
}
