
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * uri_error_constr; int * type_error_constr; int * syntax_error_constr; int * regexp_error_constr; int * reference_error_constr; int * range_error_constr; int * eval_error_constr; int * error_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int builtin_invoke_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;


 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;



 int FUNC_3 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_4 (TYPE_1__*,int ,char const*,int *,int,int *,int **) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

HRESULT FUNC_10(script_ctx_t *VAR_6, jsdisp_t *VAR_7)
{
    static const WCHAR VAR_8[] = {'E','r','r','o','r',0};
    static const WCHAR VAR_9[] = {'E','v','a','l','E','r','r','o','r',0};
    static const WCHAR VAR_10[] = {'R','a','n','g','e','E','r','r','o','r',0};
    static const WCHAR VAR_11[] = {'R','e','f','e','r','e','n','c','e','E','r','r','o','r',0};
    static const WCHAR VAR_12[] = {'R','e','g','E','x','p','E','r','r','o','r',0};
    static const WCHAR VAR_13[] = {'S','y','n','t','a','x','E','r','r','o','r',0};
    static const WCHAR VAR_14[] = {'T','y','p','e','E','r','r','o','r',0};
    static const WCHAR VAR_15[] = {'U','R','I','E','r','r','o','r',0};
    static const WCHAR *VAR_16[] = {VAR_8, VAR_9, VAR_10,
        VAR_11, VAR_12, VAR_13, VAR_14, VAR_15};
    jsdisp_t **VAR_17[] = {&VAR_6->error_constr, &VAR_6->eval_error_constr,
        &VAR_6->range_error_constr, &VAR_6->reference_error_constr, &VAR_6->regexp_error_constr,
        &VAR_6->syntax_error_constr, &VAR_6->type_error_constr,
        &VAR_6->uri_error_constr};
    static builtin_invoke_t VAR_18[] = {135, 134,
        133, 132, 131,
        130, 129, 128};

    jsdisp_t *VAR_19;
    unsigned int VAR_20;
    jsstr_t *VAR_21;
    HRESULT VAR_22;

    for(VAR_20=0; VAR_20 < FUNC_0(VAR_16); VAR_20++) {
        VAR_22 = FUNC_3(VAR_6, VAR_20==0 ? VAR_7 : ((void*)0), ((void*)0), &VAR_19);
        if(FUNC_1(VAR_22))
            return VAR_22;

        VAR_21 = FUNC_7(VAR_16[VAR_20]);
        if(!VAR_21) {
            FUNC_6(VAR_19);
            return VAR_0;
        }

        VAR_22 = FUNC_5(VAR_19, VAR_5, VAR_3 | VAR_1,
                                           FUNC_9(VAR_21));
        FUNC_8(VAR_21);
        if(FUNC_2(VAR_22))
            VAR_22 = FUNC_4(VAR_6, VAR_18[VAR_20], VAR_16[VAR_20], ((void*)0),
                    VAR_2|1, VAR_19, VAR_17[VAR_20]);

        FUNC_6(VAR_19);
        if(FUNC_1(VAR_22))
            return VAR_22;
    }

    return VAR_4;
}
