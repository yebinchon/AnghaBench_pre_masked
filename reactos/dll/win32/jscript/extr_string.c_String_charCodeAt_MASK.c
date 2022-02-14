
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
typedef int HRESULT ;
typedef double DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (double) ;
 int FUNC_4 (int *,double,int,int *) ;
 double FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsstr_t *VAR_8;
    DWORD VAR_9 = 0;
    HRESULT VAR_10;

    FUNC_1("\n");

    VAR_10 = FUNC_2(VAR_2, VAR_3, &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_5 > 0) {
        double VAR_11;

        VAR_10 = FUNC_8(VAR_2, VAR_6[0], &VAR_11);
        if(FUNC_0(VAR_10)) {
            FUNC_6(VAR_8);
            return VAR_10;
        }

        if(!FUNC_3(VAR_11) || VAR_11 < 0 || VAR_11 >= FUNC_5(VAR_8)) {
            FUNC_6(VAR_8);
            if(VAR_7)
                *VAR_7 = FUNC_7(VAR_0);
            return VAR_1;
        }

        VAR_9 = VAR_11;
    }

    if(VAR_7) {
        WCHAR VAR_12;
        FUNC_4(VAR_8, VAR_9, 1, &VAR_12);
        *VAR_7 = FUNC_7(VAR_12);
    }

    FUNC_6(VAR_8);
    return VAR_1;
}
