
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int *,int*) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(IDispatch *VAR_4, DISPID VAR_5, BOOL *VAR_6)
{
    IDispatchEx *VAR_7;
    jsdisp_t *VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_6(VAR_4);
    if(VAR_8) {
        dispex_prop_t *VAR_10;

        VAR_10 = FUNC_5(VAR_8, VAR_5);
        if(VAR_10)
            VAR_9 = FUNC_4(VAR_10, VAR_6);
        else
            VAR_9 = VAR_0;

        FUNC_7(VAR_8);
        return VAR_9;
    }

    VAR_9 = FUNC_3(VAR_4, &VAR_2, (void**)&VAR_7);
    if(FUNC_0(VAR_9)) {
        *VAR_6 = VAR_1;
        return VAR_3;
    }

    VAR_9 = FUNC_1(VAR_7, VAR_5);
    FUNC_2(VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_9;

    *VAR_6 = VAR_9 == VAR_3;
    return VAR_3;
}
