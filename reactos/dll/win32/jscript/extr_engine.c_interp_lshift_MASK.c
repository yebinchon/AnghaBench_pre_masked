
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_0)
{
    DWORD VAR_1;
    INT VAR_2;
    HRESULT VAR_3;

    VAR_3 = FUNC_3(VAR_0, &VAR_1);
    if(FUNC_0(VAR_3))
        return VAR_3;

    VAR_3 = FUNC_2(VAR_0, &VAR_2);
    if(FUNC_0(VAR_3))
        return VAR_3;

    return FUNC_4(VAR_0, FUNC_1(VAR_2 << (VAR_1&0x1f)));
}
