
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int vbdisp_invoke_type_t ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int BSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int,int ,int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ,int *) ;

HRESULT FUNC_8(IDispatch *VAR_3, BSTR VAR_4, vbdisp_invoke_type_t VAR_5, BOOL VAR_6, DISPID *VAR_7)
{
    IDispatchEx *VAR_8;
    vbdisp_t *VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_6(VAR_3);
    if(VAR_9)
        return FUNC_7(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);

    VAR_10 = FUNC_4(VAR_3, &VAR_0, (void**)&VAR_8);
    if(FUNC_0(VAR_10)) {
        FUNC_5("using IDispatch\n");
        return FUNC_3(VAR_3, &VAR_1, &VAR_4, 1, 0, VAR_7);
    }

    VAR_10 = FUNC_1(VAR_8, VAR_4, VAR_2, VAR_7);
    FUNC_2(VAR_8);
    return VAR_10;
}
