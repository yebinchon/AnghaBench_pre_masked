
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int **) ;

__attribute__((used)) static HRESULT FUNC_11(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    BSTR VAR_6, VAR_7 = ((void*)0);
    WCHAR *VAR_8;
    HRESULT VAR_9;

    FUNC_4("%s\n", FUNC_7(VAR_3));

    if(FUNC_6(VAR_3) == VAR_1) {
        VAR_6 = FUNC_5(VAR_3);
    }else {
        VAR_9 = FUNC_10(VAR_3, &VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;
        VAR_6 = VAR_7;
    }

    for(VAR_8 = VAR_6+FUNC_3(VAR_6); VAR_8-1 > VAR_6 && FUNC_8(*(VAR_8-1)); VAR_8--);

    VAR_6 = FUNC_1(VAR_6, VAR_8-VAR_6);
    FUNC_2(VAR_7);
    if(!VAR_6)
        return VAR_0;

    return FUNC_9(VAR_5, VAR_6);
}
