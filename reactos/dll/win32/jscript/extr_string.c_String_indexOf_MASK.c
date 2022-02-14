
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int INT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int **,int const**) ;
 scalar_t__ FUNC_4 (double) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_9 (unsigned int,double) ;
 int FUNC_10 (int *,int ,int **,int const**) ;
 int FUNC_11 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    unsigned VAR_7 = 0, VAR_8, VAR_9;
    jsstr_t *VAR_10, *VAR_11;
    const WCHAR *VAR_12, *VAR_13;
    INT VAR_14 = -1;
    HRESULT VAR_15;

    FUNC_2("\n");

    VAR_15 = FUNC_3(VAR_1, VAR_2, &VAR_11, &VAR_13);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(!VAR_4) {
        if(VAR_6)
            *VAR_6 = FUNC_7(-1);
        FUNC_6(VAR_11);
        return VAR_0;
    }

    VAR_15 = FUNC_10(VAR_1, VAR_5[0], &VAR_10, &VAR_12);
    if(FUNC_0(VAR_15)) {
        FUNC_6(VAR_11);
        return VAR_15;
    }

    VAR_8 = FUNC_5(VAR_10);
    VAR_9 = FUNC_5(VAR_11);

    if(VAR_4 >= 2) {
        double VAR_16;

        VAR_15 = FUNC_11(VAR_1, VAR_5[1], &VAR_16);
        if(FUNC_1(VAR_15) && VAR_16 > 0.0)
            VAR_7 = FUNC_4(VAR_16) ? FUNC_9(VAR_9, VAR_16) : VAR_9;
    }

    if(FUNC_1(VAR_15) && VAR_9 >= VAR_8) {
        const WCHAR *VAR_17 = VAR_13+VAR_9-VAR_8;
        const WCHAR *VAR_18;

        for(VAR_18 = VAR_13+VAR_7; VAR_18 <= VAR_17; VAR_18++) {
            if(!FUNC_8(VAR_18, VAR_12, VAR_8*sizeof(WCHAR))) {
                VAR_14 = VAR_18-VAR_13;
                break;
            }
        }
    }

    FUNC_6(VAR_10);
    FUNC_6(VAR_11);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(VAR_6)
        *VAR_6 = FUNC_7(VAR_14);
    return VAR_0;
}
