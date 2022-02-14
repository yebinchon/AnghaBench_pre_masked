
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    FUNC_1("\n");

    switch(VAR_5) {
    case 128:
        return FUNC_2(VAR_3, VAR_1, ((void*)0));
    default:
        FUNC_0("unimplemented flags %x\n", VAR_5);
        return VAR_0;
    }

    return VAR_2;
}
