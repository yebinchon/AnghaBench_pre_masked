
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef scalar_t__ WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef scalar_t__* BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (int *,scalar_t__**) ;

__attribute__((used)) static HRESULT FUNC_10(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    BSTR VAR_6, VAR_7 = ((void*)0);
    WCHAR *VAR_8;
    HRESULT VAR_9;

    FUNC_3("%s\n", FUNC_6(VAR_3));

    if(FUNC_5(VAR_3) == VAR_1) {
        VAR_6 = FUNC_4(VAR_3);
    }else {
        VAR_9 = FUNC_9(VAR_3, &VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;
        VAR_6 = VAR_7;
    }

    for(VAR_8 = VAR_6; *VAR_8 && FUNC_7(*VAR_8); VAR_8++);

    VAR_6 = FUNC_1(VAR_8);
    FUNC_2(VAR_7);
    if(!VAR_6)
        return VAR_0;

    return FUNC_8(VAR_5, VAR_6);
}
