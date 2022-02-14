
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int member_0; scalar_t__ for_end_label; } ;
typedef TYPE_3__ statement_ctx_t ;
struct TYPE_11__ {int body; scalar_t__ step_expr; scalar_t__ to_expr; scalar_t__ from_expr; int identifier; } ;
typedef TYPE_4__ forto_statement_t ;
typedef int compile_ctx_t ;
struct TYPE_9__ {void* bstr; scalar_t__ uint; } ;
struct TYPE_8__ {void* bstr; scalar_t__ uint; } ;
struct TYPE_12__ {TYPE_2__ arg1; TYPE_1__ arg2; } ;
typedef int HRESULT ;
typedef void* BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*,int ) ;
 int FUNC_5 (int *,int) ;
 TYPE_5__* FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,scalar_t__) ;
 unsigned int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,unsigned int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_12(compile_ctx_t *VAR_9, forto_statement_t *VAR_10)
{
    statement_ctx_t VAR_11 = {2};
    unsigned VAR_12, VAR_13;
    BSTR VAR_14;
    HRESULT VAR_15;

    VAR_14 = FUNC_1(VAR_9, VAR_10->identifier);
    if(!VAR_14)
        return VAR_0;

    VAR_15 = FUNC_3(VAR_9, VAR_10->from_expr);
    if(FUNC_0(VAR_15))
        return VAR_15;


    VAR_13 = FUNC_8(VAR_9, VAR_1);
    if(!VAR_13)
        return VAR_0;
    FUNC_6(VAR_9, VAR_13)->arg1.bstr = VAR_14;
    FUNC_6(VAR_9, VAR_13)->arg2.uint = 0;

    VAR_15 = FUNC_3(VAR_9, VAR_10->to_expr);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(!FUNC_8(VAR_9, VAR_7))
        return VAR_0;

    if(VAR_10->step_expr) {
        VAR_15 = FUNC_3(VAR_9, VAR_10->step_expr);
        if(FUNC_0(VAR_15))
            return VAR_15;

        if(!FUNC_8(VAR_9, VAR_7))
            return VAR_0;
    }else {
        VAR_15 = FUNC_10(VAR_9, VAR_5, 1);
        if(FUNC_0(VAR_15))
            return VAR_15;
    }

    VAR_11.for_end_label = FUNC_2(VAR_9);
    if(!VAR_11.for_end_label)
        return VAR_0;

    VAR_12 = FUNC_8(VAR_9, VAR_6);
    if(!VAR_12)
        return VAR_0;
    FUNC_6(VAR_9, VAR_12)->arg2.bstr = VAR_14;
    FUNC_6(VAR_9, VAR_12)->arg1.uint = VAR_11.for_end_label;

    if(!FUNC_5(VAR_9, 2))
        return VAR_0;

    VAR_15 = FUNC_4(VAR_9, &VAR_11, VAR_10->body);
    if(FUNC_0(VAR_15))
        return VAR_15;


    VAR_13 = FUNC_8(VAR_9, VAR_2);
    if(!VAR_13)
        return VAR_0;
    FUNC_6(VAR_9, VAR_13)->arg1.bstr = VAR_14;

    VAR_15 = FUNC_9(VAR_9, VAR_3, VAR_12);
    if(FUNC_0(VAR_15))
        return VAR_15;

    VAR_15 = FUNC_11(VAR_9, VAR_4, 2);
    if(FUNC_0(VAR_15))
        return VAR_15;

    FUNC_7(VAR_9, VAR_11.for_end_label);


    if(!FUNC_5(VAR_9, 0))
        return VAR_0;

    return VAR_8;
}
