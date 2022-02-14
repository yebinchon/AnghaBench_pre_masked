
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_5(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    BSTR VAR_4;
    HRESULT VAR_5;

    FUNC_1("%s\n", FUNC_2(VAR_1));

    VAR_5 = FUNC_4(VAR_1, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_3(VAR_3, VAR_4);
}
