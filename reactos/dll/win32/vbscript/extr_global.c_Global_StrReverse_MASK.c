
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef void* WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef void** BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void**) ;
 int FUNC_5 (int *,void***) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    WCHAR *VAR_4, *VAR_5, VAR_6;
    BSTR VAR_7;
    HRESULT VAR_8;

    FUNC_2("%s\n", FUNC_3(VAR_1));

    VAR_8 = FUNC_5(VAR_1, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_4 = VAR_7;
    VAR_5 = VAR_7 + FUNC_1(VAR_7)-1;
    while(VAR_4 < VAR_5) {
        VAR_6 = *VAR_4;
        *VAR_4++ = *VAR_5;
        *VAR_5-- = VAR_6;
    }

    return FUNC_4(VAR_3, VAR_7);
}
