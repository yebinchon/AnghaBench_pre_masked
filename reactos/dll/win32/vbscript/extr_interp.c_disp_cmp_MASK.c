
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int IUnknown ;
typedef int IObjectIdentity ;
typedef int IDispatch ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_7(IDispatch *VAR_5, IDispatch *VAR_6, VARIANT_BOOL *VAR_7)
{
    IObjectIdentity *VAR_8;
    IUnknown *VAR_9, *VAR_10;
    HRESULT VAR_11;

    if(VAR_5 == VAR_6) {
        *VAR_7 = VAR_4;
        return VAR_2;
    }

    if(!VAR_5 || !VAR_6) {
        *VAR_7 = VAR_3;
        return VAR_2;
    }

    VAR_11 = FUNC_1(VAR_5, &VAR_1, (void**)&VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_1(VAR_6, &VAR_1, (void**)&VAR_10);
    if(FUNC_0(VAR_11)) {
        FUNC_5(VAR_9);
        return VAR_11;
    }

    if(VAR_9 == VAR_10) {
        *VAR_7 = VAR_4;
    }else {
        VAR_11 = FUNC_4(VAR_9, &VAR_0, (void**)&VAR_8);
        if(FUNC_6(VAR_11)) {
            VAR_11 = FUNC_2(VAR_8, VAR_10);
            FUNC_3(VAR_8);
            *VAR_7 = VAR_11 == VAR_2 ? VAR_4 : VAR_3;
        }else {
            *VAR_7 = VAR_3;
        }
    }

    FUNC_5(VAR_9);
    FUNC_5(VAR_10);
    return VAR_2;
}
