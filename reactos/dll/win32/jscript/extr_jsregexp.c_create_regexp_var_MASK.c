
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* jsregexp; int * str; } ;
struct TYPE_4__ {unsigned int flags; } ;
typedef TYPE_2__ RegExpInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,unsigned int,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 unsigned int FUNC_12 (int *) ;
 int FUNC_13 (int const*,unsigned int,unsigned int*) ;
 TYPE_2__* FUNC_14 (int *) ;

HRESULT FUNC_15(script_ctx_t *VAR_3, jsval_t VAR_4, jsval_t *VAR_5, jsdisp_t **VAR_6)
{
    unsigned VAR_7, VAR_8 = 0;
    const WCHAR *VAR_9 = ((void*)0);
    jsstr_t *VAR_10;
    HRESULT VAR_11;

    if(FUNC_8(VAR_4)) {
        jsdisp_t *VAR_12;

        VAR_12 = FUNC_6(FUNC_4(VAR_4));
        if(VAR_12) {
            if(FUNC_7(VAR_12, VAR_2)) {
                RegExpInstance *VAR_13 = FUNC_14(VAR_12);

                VAR_11 = FUNC_2(VAR_3, VAR_13->str, VAR_13->jsregexp->flags, VAR_6);
                FUNC_10(VAR_12);
                return VAR_11;
            }

            FUNC_10(VAR_12);
        }
    }

    if(!FUNC_9(VAR_4)) {
        FUNC_1("src_arg = %s\n", FUNC_3(VAR_4));
        return VAR_0;
    }

    VAR_10 = FUNC_5(VAR_4);

    if(VAR_5) {
        jsstr_t *VAR_14;

        if(!FUNC_9(*VAR_5)) {
            FUNC_1("unimplemented for %s\n", FUNC_3(*VAR_5));
            return VAR_0;
        }

        VAR_14 = FUNC_5(*VAR_5);
        VAR_9 = FUNC_11(VAR_14);
        if(!VAR_9)
            return VAR_1;
        VAR_8 = FUNC_12(VAR_14);
    }

    VAR_11 = FUNC_13(VAR_9, VAR_8, &VAR_7);
    if(FUNC_0(VAR_11))
        return VAR_11;

    return FUNC_2(VAR_3, VAR_10, VAR_7, VAR_6);
}
