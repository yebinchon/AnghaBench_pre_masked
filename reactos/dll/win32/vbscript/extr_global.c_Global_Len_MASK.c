
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_10(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    DWORD VAR_6;
    HRESULT VAR_7;

    FUNC_3("%s\n", FUNC_6(VAR_3));

    if(FUNC_5(VAR_3) == VAR_1)
        return FUNC_8(VAR_5);

    if(FUNC_5(VAR_3) != VAR_0) {
        BSTR VAR_8;

        VAR_7 = FUNC_9(VAR_3, &VAR_8);
        if(FUNC_0(VAR_7))
            return VAR_7;

        VAR_6 = FUNC_2(VAR_8);
        FUNC_1(VAR_8);
    }else {
        VAR_6 = FUNC_2(FUNC_4(VAR_3));
    }

    return FUNC_7(VAR_5, VAR_6);
}
