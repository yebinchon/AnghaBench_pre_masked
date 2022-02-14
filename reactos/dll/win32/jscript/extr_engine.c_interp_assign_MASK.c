
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int exprval_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_1)
{
    exprval_t VAR_2;
    jsval_t VAR_3;
    HRESULT VAR_4;

    FUNC_1("\n");

    VAR_3 = FUNC_5(VAR_1);

    if(!FUNC_6(VAR_1, &VAR_2)) {
        FUNC_4(VAR_3);
        return FUNC_8(VAR_1, VAR_0, ((void*)0));
    }

    VAR_4 = FUNC_2(VAR_1, &VAR_2, VAR_3);
    FUNC_3(&VAR_2);
    if(FUNC_0(VAR_4)) {
        FUNC_4(VAR_3);
        return VAR_4;
    }

    return FUNC_7(VAR_1, VAR_3);
}
