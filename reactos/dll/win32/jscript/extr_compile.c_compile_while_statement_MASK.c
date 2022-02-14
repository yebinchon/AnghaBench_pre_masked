
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int expr; scalar_t__ do_while; int statement; } ;
typedef TYPE_1__ while_statement_t ;
struct TYPE_13__ {unsigned int break_label; unsigned int continue_label; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ statement_ctx_t ;
struct TYPE_14__ {unsigned int code_off; } ;
typedef TYPE_3__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_6, while_statement_t *VAR_7)
{
    statement_ctx_t VAR_8 = {0, VAR_1, VAR_1};
    unsigned VAR_9;
    HRESULT VAR_10;

    VAR_8.break_label = FUNC_1(VAR_6);
    if(!VAR_8.break_label)
        return VAR_0;

    VAR_8.continue_label = FUNC_1(VAR_6);
    if(!VAR_8.continue_label)
        return VAR_0;

    VAR_9 = VAR_6->code_off;

    if(!VAR_7->do_while) {
        FUNC_4(VAR_6, VAR_8.continue_label);
        VAR_10 = FUNC_2(VAR_6, VAR_7->expr, VAR_5);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_10 = FUNC_5(VAR_6, VAR_3, VAR_8.break_label);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_3(VAR_6, &VAR_8, VAR_7->statement);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_7->do_while) {
        FUNC_4(VAR_6, VAR_8.continue_label);
        VAR_10 = FUNC_2(VAR_6, VAR_7->expr, VAR_5);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_10 = FUNC_5(VAR_6, VAR_3, VAR_8.break_label);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_5(VAR_6, VAR_2, VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    FUNC_4(VAR_6, VAR_8.break_label);
    return VAR_4;
}
