
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef int* BSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(DispatchEx *VAR_3, BSTR VAR_4, DWORD VAR_5, DISPID *VAR_6)
{
    WCHAR *VAR_7;
    int VAR_8 = 0;

    for(VAR_7 = VAR_4; *VAR_7 && FUNC_1(*VAR_7); VAR_7++)
        VAR_8 = VAR_8*10 + (*VAR_7-'0');
    if(*VAR_7)
        return VAR_0;

    *VAR_6 = VAR_1 + VAR_8;
    FUNC_0("ret %x\n", *VAR_6);
    return VAR_2;
}
