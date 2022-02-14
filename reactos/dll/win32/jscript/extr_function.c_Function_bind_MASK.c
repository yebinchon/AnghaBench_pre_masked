
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int FunctionInstance ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,unsigned int,int *,int **) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    FunctionInstance *VAR_9;
    jsdisp_t *VAR_10;
    HRESULT VAR_11;

    FUNC_2("\n");

    if(!(VAR_9 = FUNC_5(VAR_4)))
        return FUNC_10(VAR_3, VAR_1, ((void*)0));

    if(VAR_6 < 1) {
        FUNC_1("no this argument\n");
        return VAR_0;
    }

    if(!FUNC_7(VAR_7[0]) || !FUNC_6(VAR_7[0])) {
        FUNC_1("%s is not an object instance\n", FUNC_4(VAR_7[0]));
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_3, VAR_9, FUNC_6(VAR_7[0]), VAR_6 - 1, VAR_7 + 1, &VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(VAR_8)
        *VAR_8 = FUNC_9(VAR_10);
    else
        FUNC_8(VAR_10);
    return VAR_2;
}
