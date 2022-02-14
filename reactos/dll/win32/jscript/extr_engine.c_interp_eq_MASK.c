
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_0)
{
    jsval_t VAR_1, VAR_2;
    BOOL VAR_3;
    HRESULT VAR_4;

    VAR_2 = FUNC_6(VAR_0);
    VAR_1 = FUNC_6(VAR_0);

    FUNC_1("%s == %s\n", FUNC_2(VAR_1), FUNC_2(VAR_2));

    VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_3);
    FUNC_5(VAR_1);
    FUNC_5(VAR_2);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_7(VAR_0, FUNC_4(VAR_3));
}
