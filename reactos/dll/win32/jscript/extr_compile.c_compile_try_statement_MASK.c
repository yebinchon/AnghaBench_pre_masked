
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int * finally_statement; TYPE_1__* catch_block; int * try_statement; } ;
typedef TYPE_4__ try_statement_t ;
struct TYPE_20__ {int member_0; int using_except; int member_2; int member_1; } ;
typedef TYPE_5__ statement_ctx_t ;
struct TYPE_21__ {unsigned int code_off; } ;
typedef TYPE_6__ compiler_ctx_t ;
struct TYPE_18__ {TYPE_2__* arg; } ;
struct TYPE_22__ {TYPE_3__ u; } ;
struct TYPE_17__ {unsigned int uint; } ;
struct TYPE_16__ {int * statement; int identifier; } ;
typedef int HRESULT ;
typedef int * BSTR ;


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
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int *) ;
 int * FUNC_2 (TYPE_6__*,int ) ;
 TYPE_9__* FUNC_3 (TYPE_6__*,unsigned int) ;
 unsigned int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_9, try_statement_t *VAR_10)
{
    statement_ctx_t VAR_11 = {0, VAR_1, VAR_8}, VAR_12 = {2, VAR_1, VAR_1};
    unsigned VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16, VAR_17 = 0;
    BSTR VAR_18;
    HRESULT VAR_19;

    VAR_13 = FUNC_4(VAR_9, VAR_6);
    if(!VAR_13)
        return VAR_0;

    if(VAR_10->catch_block) {
        VAR_18 = FUNC_2(VAR_9, VAR_10->catch_block->identifier);
        if(!VAR_18)
            return VAR_0;
    }else {
        VAR_18 = ((void*)0);
    }

    VAR_19 = FUNC_1(VAR_9, &VAR_11, VAR_10->try_statement);
    if(FUNC_0(VAR_19))
        return VAR_19;

    VAR_16 = FUNC_4(VAR_9, VAR_4);
    if(!VAR_16)
        return VAR_0;

    if(VAR_10->catch_block) {
        statement_ctx_t VAR_20 = {0, VAR_8, VAR_10->finally_statement != ((void*)0)};

        if(VAR_10->finally_statement)
            VAR_20.using_except = VAR_8;

        VAR_15 = VAR_9->code_off;

        VAR_19 = FUNC_5(VAR_9, VAR_3, VAR_18);
        if(FUNC_0(VAR_19))
            return VAR_19;

        VAR_19 = FUNC_1(VAR_9, &VAR_20, VAR_10->catch_block->statement);
        if(FUNC_0(VAR_19))
            return VAR_19;

        if(!FUNC_4(VAR_9, VAR_5))
            return VAR_0;

        if(VAR_10->finally_statement) {
            VAR_17 = FUNC_4(VAR_9, VAR_4);
            if(!VAR_17)
                return VAR_0;
        }
    }

    if(VAR_10->finally_statement) {





        VAR_14 = VAR_9->code_off;
        VAR_19 = FUNC_1(VAR_9, &VAR_12, VAR_10->finally_statement);
        if(FUNC_0(VAR_19))
            return VAR_19;

        if(!FUNC_4(VAR_9, VAR_2))
            return VAR_0;
    }

    FUNC_3(VAR_9, VAR_16)->u.arg[0].uint = VAR_9->code_off;
    if(VAR_17)
        FUNC_3(VAR_9, VAR_17)->u.arg[0].uint = VAR_9->code_off;
    FUNC_3(VAR_9, VAR_13)->u.arg[0].uint = VAR_15;
    FUNC_3(VAR_9, VAR_13)->u.arg[1].uint = VAR_14;
    return VAR_7;
}
