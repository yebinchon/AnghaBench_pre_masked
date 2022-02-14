
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsdisp_t ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(jsdisp_t *VAR_1, IDispatch *VAR_2, DWORD *VAR_3)
{
    jsdisp_t *VAR_4;
    HRESULT VAR_5;

    VAR_4 = FUNC_2(VAR_2);
    if(VAR_4) {
        if(FUNC_3(VAR_4, VAR_0)) {
            VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_4), VAR_3);
            FUNC_5(VAR_4);
            return VAR_5;
        }
        FUNC_5(VAR_4);
    }

    return FUNC_4(VAR_1, (*VAR_3)++, FUNC_6(VAR_2));
}
