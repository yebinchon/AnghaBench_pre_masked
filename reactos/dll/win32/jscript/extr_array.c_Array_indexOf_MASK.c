
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
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **,unsigned int*) ;
 int FUNC_3 (int *,unsigned int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 () ;
 unsigned int FUNC_8 (double,int ) ;
 unsigned int FUNC_9 (double,unsigned int) ;
 int FUNC_10 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;
    unsigned VAR_9, VAR_10, VAR_11 = 0;
    jsval_t VAR_12, VAR_13;
    BOOL VAR_14;
    HRESULT VAR_15;

    FUNC_1("\n");

    VAR_15 = FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_9);
    if(FUNC_0(VAR_15))
        return VAR_15;
    if(!VAR_9) {
        if(VAR_7) *VAR_7 = FUNC_4(-1);
        return VAR_1;
    }

    VAR_12 = VAR_5 ? VAR_6[0] : FUNC_7();

    if(VAR_5 > 1) {
        double VAR_16;

        VAR_15 = FUNC_10(VAR_2, VAR_6[1], &VAR_16);
        if(FUNC_0(VAR_15))
            return VAR_15;

        if(VAR_16 >= 0)
            VAR_11 = FUNC_9(VAR_16, VAR_9);
        else
            VAR_11 = FUNC_8(VAR_16 + VAR_9, 0);
    }

    for(VAR_10 = VAR_11; VAR_10 < VAR_9; VAR_10++) {
        VAR_15 = FUNC_3(VAR_8, VAR_10, &VAR_13);
        if(VAR_15 == VAR_0)
            continue;
        if(FUNC_0(VAR_15))
            return VAR_15;

        VAR_15 = FUNC_6(VAR_13, VAR_12, &VAR_14);
        FUNC_5(VAR_13);
        if(FUNC_0(VAR_15))
            return VAR_15;
        if(VAR_14) {
            if(VAR_7) *VAR_7 = FUNC_4(VAR_10);
            return VAR_1;
        }
    }

    if(VAR_7) *VAR_7 = FUNC_4(-1);
    return VAR_1;
}
