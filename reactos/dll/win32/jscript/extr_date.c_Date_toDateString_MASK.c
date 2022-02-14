
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int DateInstance ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    DateInstance *VAR_7;

    if(!(VAR_7 = FUNC_0(VAR_2)))
        return FUNC_2(VAR_1, VAR_0, ((void*)0));

    return FUNC_1(VAR_7, VAR_6);
}
