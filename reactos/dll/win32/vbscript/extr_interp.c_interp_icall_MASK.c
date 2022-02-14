
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int exec_ctx_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(exec_ctx_t *VAR_0)
{
    VARIANT VAR_1;
    HRESULT VAR_2;

    FUNC_1("\n");

    VAR_2 = FUNC_2(VAR_0, &VAR_1);
    if(FUNC_0(VAR_2))
        return VAR_2;

    return FUNC_3(VAR_0, &VAR_1);
}
