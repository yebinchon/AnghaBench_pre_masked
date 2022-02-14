
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_0, double *VAR_1)
{
    jsval_t VAR_2;
    HRESULT VAR_3;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_1);
    FUNC_0(VAR_2);
    return VAR_3;
}
