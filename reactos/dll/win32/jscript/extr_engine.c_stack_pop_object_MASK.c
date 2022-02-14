
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_2, IDispatch **VAR_3)
{
    jsval_t VAR_4;
    HRESULT VAR_5;

    VAR_4 = FUNC_3(VAR_2);
    if(FUNC_1(VAR_4)) {
        if(!FUNC_0(VAR_4))
            return FUNC_4(VAR_2, VAR_0, ((void*)0));
        *VAR_3 = FUNC_0(VAR_4);
        return VAR_1;
    }

    VAR_5 = FUNC_5(VAR_2, VAR_4, VAR_3);
    FUNC_2(VAR_4);
    return VAR_5;
}
