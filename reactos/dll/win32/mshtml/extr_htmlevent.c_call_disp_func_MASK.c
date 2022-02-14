
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ei ;
typedef int VARIANT ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int ,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_8(IDispatch *VAR_3, DISPPARAMS *VAR_4, VARIANT *VAR_5)
{
    IDispatchEx *VAR_6;
    EXCEPINFO VAR_7;
    HRESULT VAR_8;

    FUNC_7(&VAR_7, 0, sizeof(VAR_7));

    VAR_8 = FUNC_4(VAR_3, &VAR_1, (void**)&VAR_6);
    if(FUNC_5(VAR_8)) {
        VAR_8 = FUNC_1(VAR_6, 0, FUNC_0(), VAR_0, VAR_4, VAR_5, &VAR_7, ((void*)0));
        FUNC_2(VAR_6);
    }else {
        FUNC_6("Could not get IDispatchEx interface: %08x\n", VAR_8);
        VAR_8 = FUNC_3(VAR_3, 0, &VAR_2, FUNC_0(), VAR_0,
                VAR_4, VAR_5, &VAR_7, ((void*)0));
    }

    return VAR_8;
}
