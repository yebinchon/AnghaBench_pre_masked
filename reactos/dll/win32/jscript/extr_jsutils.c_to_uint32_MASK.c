
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int UINT32 ;
typedef int INT32 ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;

HRESULT FUNC_2(script_ctx_t *VAR_0, jsval_t VAR_1, UINT32 *VAR_2)
{
    INT32 VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    if(FUNC_0(VAR_4))
        *VAR_2 = VAR_3;
    return VAR_4;
}
