
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7, jsval_t *VAR_8)
{
    jsdisp_t *VAR_9;

    FUNC_0("\n");

    if(!VAR_6 || !FUNC_4(VAR_7[0])) {
        if(VAR_8) *VAR_8 = FUNC_6(VAR_0);
        return VAR_2;
    }

    VAR_9 = FUNC_2(FUNC_1(VAR_7[0]));
    if(VAR_8) *VAR_8 = FUNC_6(VAR_9 && FUNC_3(VAR_9, VAR_1));
    if(VAR_9) FUNC_5(VAR_9);
    return VAR_2;
}
