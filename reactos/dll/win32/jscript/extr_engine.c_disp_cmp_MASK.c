
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IObjectIdentity ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_7(IDispatch *VAR_5, IDispatch *VAR_6, BOOL *VAR_7)
{
    IObjectIdentity *VAR_8;
    IUnknown *VAR_9, *VAR_10;
    HRESULT VAR_11;

    if(VAR_5 == VAR_6) {
        *VAR_7 = VAR_4;
        return VAR_3;
    }

    if(!VAR_5 || !VAR_6) {
        *VAR_7 = VAR_0;
        return VAR_3;
    }

    VAR_11 = FUNC_1(VAR_5, &VAR_2, (void**)&VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_1(VAR_6, &VAR_2, (void**)&VAR_10);
    if(FUNC_0(VAR_11)) {
        FUNC_5(VAR_9);
        return VAR_11;
    }

    if(VAR_9 == VAR_10) {
        *VAR_7 = VAR_4;
    }else {
        VAR_11 = FUNC_4(VAR_9, &VAR_1, (void**)&VAR_8);
        if(FUNC_6(VAR_11)) {
            VAR_11 = FUNC_2(VAR_8, VAR_10);
            FUNC_3(VAR_8);
            *VAR_7 = VAR_11 == VAR_3;
        }else {
            *VAR_7 = VAR_0;
        }
    }

    FUNC_5(VAR_9);
    FUNC_5(VAR_10);
    return VAR_3;
}
