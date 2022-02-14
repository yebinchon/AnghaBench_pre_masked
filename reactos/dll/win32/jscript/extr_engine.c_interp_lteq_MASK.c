
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_1)
{
    jsval_t VAR_2, VAR_3;
    BOOL VAR_4;
    HRESULT VAR_5;

    VAR_3 = FUNC_6(VAR_1);
    VAR_2 = FUNC_6(VAR_1);

    FUNC_1("%s <= %s\n", FUNC_2(VAR_2), FUNC_2(VAR_3));

    VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, &VAR_4);
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_7(VAR_1, FUNC_3(VAR_4));
}
