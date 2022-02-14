
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ dispex_prop_t ;
typedef int builtin_info_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char const*,TYPE_1__**) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int const*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_1__*,int *) ;
 int FUNC_11 (char const*) ;

HRESULT FUNC_12(jsdisp_t *VAR_1, script_ctx_t *VAR_2, const builtin_info_t *VAR_3, jsdisp_t *VAR_4)
{
    jsdisp_t *VAR_5 = ((void*)0);
    dispex_prop_t *VAR_6;
    HRESULT VAR_7;

    static const WCHAR VAR_8[] = {'p','r','o','t','o','t','y','p','e',0};

    VAR_7 = FUNC_3(VAR_4, FUNC_11(VAR_8), VAR_8, &VAR_6);
    if(FUNC_2(VAR_7) && VAR_6 && VAR_6->type!=VAR_0) {
        jsval_t VAR_9;

        VAR_7 = FUNC_10(VAR_4, VAR_6, &VAR_9);
        if(FUNC_1(VAR_7)) {
            FUNC_0("Could not get prototype\n");
            return VAR_7;
        }

        if(FUNC_7(VAR_9))
            VAR_5 = FUNC_5(FUNC_4(VAR_9));
        FUNC_9(VAR_9);
    }

    VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);

    if(VAR_5)
        FUNC_8(VAR_5);
    return VAR_7;
}
