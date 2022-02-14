
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int property_desc_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *,int ,int **,int const**) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4,
                                     unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    property_desc_t VAR_8;
    jsdisp_t *VAR_9, *VAR_10;
    const WCHAR *VAR_11;
    jsstr_t *VAR_12;
    HRESULT VAR_13;

    FUNC_3("\n");

    if(VAR_5 < 1 || !FUNC_5(VAR_6[0]))
        return FUNC_12(VAR_2, VAR_1, ((void*)0));
    VAR_9 = FUNC_14(FUNC_4(VAR_6[0]));
    if(!VAR_9) {
        FUNC_1("not implemented non-JS object\n");
        return VAR_0;
    }

    VAR_13 = FUNC_13(VAR_2, VAR_5 >= 2 ? VAR_6[1] : FUNC_10(), &VAR_12, &VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_5 >= 3 && FUNC_5(VAR_6[2])) {
        VAR_10 = FUNC_14(FUNC_4(VAR_6[2]));
        if(VAR_10) {
            VAR_13 = FUNC_15(VAR_2, VAR_10, &VAR_8);
        }else {
            FUNC_1("not implemented non-JS object\n");
            VAR_13 = VAR_0;
        }
    }else {
        VAR_13 = FUNC_12(VAR_2, VAR_1, ((void*)0));
    }
    FUNC_8(VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_7(VAR_9, VAR_11, &VAR_8);
    FUNC_11(&VAR_8);
    if(FUNC_2(VAR_13) && VAR_7)
        *VAR_7 = FUNC_9(FUNC_6(VAR_9));
    return VAR_13;
}
