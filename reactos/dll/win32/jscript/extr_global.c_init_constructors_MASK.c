
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int vbarray_constr; int global; int string_constr; int regexp_constr; int number_constr; int uri_error_constr; int type_error_constr; int syntax_error_constr; int regexp_error_constr; int reference_error_constr; int range_error_constr; int eval_error_constr; int error_constr; int enumerator_constr; int date_constr; int bool_constr; int array_constr; int object_constr; int function_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int *) ;
 int FUNC_9 (TYPE_1__*,int *,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_20, jsdisp_t *VAR_21)
{
    HRESULT VAR_22;

    VAR_22 = FUNC_11(VAR_20, VAR_21);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_6, VAR_9,
                                       FUNC_13(VAR_20->function_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_6(VAR_20, VAR_21, &VAR_20->object_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_8, VAR_9,
                                       FUNC_13(VAR_20->object_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_1(VAR_20, VAR_21, &VAR_20->array_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_0, VAR_9,
                                       FUNC_13(VAR_20->array_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_2(VAR_20, VAR_21, &VAR_20->bool_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_1, VAR_9,
                                       FUNC_13(VAR_20->bool_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_3(VAR_20, VAR_21, &VAR_20->date_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_2, VAR_9,
                                       FUNC_13(VAR_20->date_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_4(VAR_20, VAR_21, &VAR_20->enumerator_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_3, VAR_9,
                                       FUNC_13(VAR_20->enumerator_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_10(VAR_20, VAR_21);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_4, VAR_9,
                                       FUNC_13(VAR_20->error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_5, VAR_9,
                                       FUNC_13(VAR_20->eval_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_10, VAR_9,
                                       FUNC_13(VAR_20->range_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_11, VAR_9,
                                       FUNC_13(VAR_20->reference_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_12, VAR_9,
                                       FUNC_13(VAR_20->regexp_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_16, VAR_9,
                                       FUNC_13(VAR_20->syntax_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_17, VAR_9,
                                       FUNC_13(VAR_20->type_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_18, VAR_9,
                                       FUNC_13(VAR_20->uri_error_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_5(VAR_20, VAR_21, &VAR_20->number_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_7, VAR_9,
                                       FUNC_13(VAR_20->number_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_7(VAR_20, VAR_21, &VAR_20->regexp_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_13, VAR_9,
                                       FUNC_13(VAR_20->regexp_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_8(VAR_20, VAR_21, &VAR_20->string_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_15, VAR_9,
                                       FUNC_13(VAR_20->string_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_9(VAR_20, VAR_21, &VAR_20->vbarray_constr);
    if(FUNC_0(VAR_22))
        return VAR_22;

    VAR_22 = FUNC_12(VAR_20->global, VAR_19, VAR_9,
                                       FUNC_13(VAR_20->vbarray_constr));
    if(FUNC_0(VAR_22))
        return VAR_22;

    return VAR_14;
}
