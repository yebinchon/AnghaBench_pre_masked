
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ jsop_t ;
typedef int compiler_ctx_t ;
struct TYPE_12__ {TYPE_5__* argument_list; TYPE_7__* expression; } ;
typedef TYPE_3__ call_expression_t ;
struct TYPE_13__ {TYPE_7__* expression2; TYPE_7__* expression1; } ;
typedef TYPE_4__ binary_expression_t ;
struct TYPE_14__ {TYPE_7__* expr; struct TYPE_14__* next; } ;
typedef TYPE_5__ argument_t ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_11__ {TYPE_1__* arg; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
struct TYPE_10__ {unsigned int uint; int lng; } ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,TYPE_7__*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_7__*,int ) ;
 int VAR_13 ;
 TYPE_6__* FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_7(compiler_ctx_t *VAR_14, binary_expression_t *VAR_15, jsop_t VAR_16)
{
    BOOL VAR_17 = VAR_2;
    unsigned VAR_18 = 0;
    HRESULT VAR_19;

    if(VAR_15->expression1->type == VAR_0) {
        call_expression_t *VAR_20 = (call_expression_t*)VAR_15->expression1;
        argument_t *VAR_21;

        if(FUNC_4(VAR_20->expression->type) && VAR_20->argument_list) {
            VAR_19 = FUNC_2(VAR_14, VAR_20->expression, VAR_13);
            if(FUNC_0(VAR_19))
                return VAR_19;

            for(VAR_21 = VAR_20->argument_list; VAR_21; VAR_21 = VAR_21->next) {
                VAR_19 = FUNC_1(VAR_14, VAR_21->expr, VAR_12);
                if(FUNC_0(VAR_19))
                    return VAR_19;
                VAR_18++;
            }

            if(VAR_16 != VAR_4) {
                unsigned VAR_22;





                VAR_22 = FUNC_5(VAR_14, VAR_7);
                if(!VAR_22)
                    return VAR_1;
                FUNC_3(VAR_14, VAR_22)->u.arg[0].uint = VAR_18;
                FUNC_3(VAR_14, VAR_22)->u.arg[1].lng = 1;

                if(!FUNC_5(VAR_14, VAR_8))
                    return VAR_1;
            }
        }else {
            VAR_17 = VAR_12;
        }
    }else if(FUNC_4(VAR_15->expression1->type)) {
        VAR_19 = FUNC_2(VAR_14, VAR_15->expression1, VAR_13);
        if(FUNC_0(VAR_19))
            return VAR_19;
        if(VAR_16 != VAR_4 && !FUNC_5(VAR_14, VAR_9))
            return VAR_1;
    }else {
        VAR_17 = VAR_12;
    }

    if(VAR_17) {

        VAR_19 = FUNC_1(VAR_14, VAR_15->expression1, VAR_12);
        if(FUNC_0(VAR_19))
            return VAR_19;

        VAR_19 = FUNC_1(VAR_14, VAR_15->expression2, VAR_12);
        if(FUNC_0(VAR_19))
            return VAR_19;

        if(VAR_16 != VAR_4 && !FUNC_5(VAR_14, VAR_16))
            return VAR_1;

        return FUNC_6(VAR_14, VAR_10, VAR_3);
    }

    VAR_19 = FUNC_1(VAR_14, VAR_15->expression2, VAR_12);
    if(FUNC_0(VAR_19))
        return VAR_19;

    if(VAR_16 != VAR_4 && !FUNC_5(VAR_14, VAR_16))
        return VAR_1;

    if(VAR_18)
        return FUNC_6(VAR_14, VAR_6, VAR_18);

    if(!FUNC_5(VAR_14, VAR_5))
        return VAR_1;

    return VAR_11;
}
