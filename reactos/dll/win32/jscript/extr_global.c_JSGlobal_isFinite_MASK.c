
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    BOOL VAR_8 = VAR_0;
    HRESULT VAR_9;

    FUNC_1("\n");

    if(VAR_5) {
        double VAR_10;

        VAR_9 = FUNC_4(VAR_2, VAR_6[0], &VAR_10);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_8 = FUNC_2(VAR_10);
    }

    if(VAR_7)
        *VAR_7 = FUNC_3(VAR_8);
    return VAR_1;
}
