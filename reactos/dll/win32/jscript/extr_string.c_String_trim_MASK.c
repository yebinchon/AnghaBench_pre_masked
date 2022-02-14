
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disp; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int const*,unsigned int) ;
 scalar_t__ FUNC_4 (int const) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int const*,int) ;
 unsigned int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4,
        jsval_t *VAR_5, jsval_t *VAR_6)
{
    const WCHAR *VAR_7, *VAR_8, *VAR_9;
    jsstr_t *VAR_10;
    unsigned VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_11(VAR_1, FUNC_9(VAR_2->u.disp), &VAR_10, &VAR_7);
    if(FUNC_0(VAR_12)) {
        FUNC_2("to_flat_string failed: %08x\n", VAR_12);
        return VAR_12;
    }
    VAR_11 = FUNC_7(VAR_10);
    FUNC_1("%s\n", FUNC_3(VAR_7, VAR_11));

    for(VAR_8 = VAR_7, VAR_9 = VAR_7 + VAR_11; VAR_8 < VAR_9 && FUNC_4(*VAR_8); VAR_8++);
    while(VAR_9 > VAR_8 + 1 && FUNC_4(*(VAR_9-1))) VAR_9--;

    if(VAR_6) {
        jsstr_t *VAR_13;

        if(VAR_8 == VAR_7 && VAR_9 == VAR_7 + VAR_11)
            VAR_13 = FUNC_5(VAR_10);
        else
            VAR_13 = FUNC_6(VAR_8, VAR_9 - VAR_8);
        if(VAR_13)
            *VAR_6 = FUNC_10(VAR_13);
        else
            VAR_12 = VAR_0;
    }
    FUNC_8(VAR_10);
    return VAR_12;
}
