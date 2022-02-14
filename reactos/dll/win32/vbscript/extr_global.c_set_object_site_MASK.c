
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int IUnknown ;
typedef int IObjectWithSite ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_3, IUnknown *VAR_4)
{
    IObjectWithSite *VAR_5;
    IUnknown *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_3(VAR_4, &VAR_1, (void**)&VAR_5);
    if(FUNC_0(VAR_7))
        return VAR_2;

    VAR_6 = FUNC_5(VAR_3);
    if(VAR_6) {
        VAR_7 = FUNC_2(VAR_5, VAR_6);
        FUNC_4(VAR_6);
    }
    else
        VAR_7 = VAR_0;
    FUNC_1(VAR_5);
    return VAR_7;
}
