
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int **) ;
 int * FUNC_2 (scalar_t__,char**) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,unsigned int) ;
 int FUNC_10 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_1, vdisp_t *VAR_2, unsigned VAR_3, jsval_t *VAR_4, jsval_t *VAR_5,
        const WCHAR *VAR_6, const WCHAR *VAR_7)
{
    jsstr_t *VAR_8, *VAR_9 = ((void*)0);
    HRESULT VAR_10;

    VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_3) {
        VAR_10 = FUNC_10(VAR_1, VAR_4[0], &VAR_9);
        if(FUNC_0(VAR_10)) {
            FUNC_5(VAR_8);
            return VAR_10;
        }
    }else {
        VAR_9 = FUNC_6();
    }

    if(VAR_5) {
        unsigned VAR_11 = FUNC_8(VAR_7);
        unsigned VAR_12 = FUNC_8(VAR_6);
        jsstr_t *VAR_13;
        WCHAR *VAR_14;

        VAR_13 = FUNC_2(2*VAR_12 + VAR_11 + FUNC_4(VAR_9) + FUNC_4(VAR_8) + 9, &VAR_14);
        if(VAR_13) {
            *VAR_14++ = '<';
            FUNC_9(VAR_14, VAR_6, VAR_12*sizeof(WCHAR));
            VAR_14 += VAR_12;
            *VAR_14++ = ' ';
            FUNC_9(VAR_14, VAR_7, VAR_11*sizeof(WCHAR));
            VAR_14 += VAR_11;
            *VAR_14++ = '=';
            *VAR_14++ = '"';
            VAR_14 += FUNC_3(VAR_9, VAR_14);
            *VAR_14++ = '"';
            *VAR_14++ = '>';
            VAR_14 += FUNC_3(VAR_8, VAR_14);

            *VAR_14++ = '<';
            *VAR_14++ = '/';
            FUNC_9(VAR_14, VAR_6, VAR_12*sizeof(WCHAR));
            VAR_14 += VAR_12;
            *VAR_14 = '>';

            *VAR_5 = FUNC_7(VAR_13);
        }else {
            VAR_10 = VAR_0;
        }
    }

    FUNC_5(VAR_9);
    FUNC_5(VAR_8);
    return VAR_10;
}
