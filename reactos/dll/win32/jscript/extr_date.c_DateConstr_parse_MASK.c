
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,double*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsstr_t *VAR_8;
    double VAR_9;
    HRESULT VAR_10;

    FUNC_1("\n");

    if(!VAR_5) {
        if(VAR_7)
            *VAR_7 = FUNC_4(VAR_0);
        return VAR_1;
    }

    VAR_10 = FUNC_5(VAR_2, VAR_6[0], &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_2(VAR_8, &VAR_9);
    FUNC_3(VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    *VAR_7 = FUNC_4(VAR_9);
    return VAR_1;
}
