
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned int,int *,double*) ;
 int FUNC_3 (double) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_0, vdisp_t *VAR_1, WORD VAR_2, unsigned VAR_3, jsval_t *VAR_4,
        jsval_t *VAR_5)
{
    double VAR_6;
    HRESULT VAR_7;

    FUNC_1("\n");

    VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_4, &VAR_6);
    if(FUNC_0(VAR_7) && VAR_5)
        *VAR_5 = FUNC_3(VAR_6);
    return VAR_7;
}
