
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_1)
{
    const unsigned VAR_2 = FUNC_2(VAR_1, 0);
    BOOL VAR_3;
    jsval_t VAR_4;
    HRESULT VAR_5;

    FUNC_1("\n");

    VAR_4 = FUNC_6(VAR_1);
    VAR_5 = FUNC_7(VAR_4, &VAR_3);
    FUNC_5(VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(VAR_3)
        FUNC_4(VAR_1);
    else
        FUNC_3(VAR_1, VAR_2);
    return VAR_0;
}
