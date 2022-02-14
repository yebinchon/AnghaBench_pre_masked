
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ type; } ;
struct TYPE_20__ {int body; TYPE_1__ stat; int expr; } ;
typedef TYPE_3__ while_statement_t ;
struct TYPE_21__ {int while_end_label; int member_0; } ;
typedef TYPE_4__ statement_ctx_t ;
struct TYPE_22__ {unsigned int instr_cnt; } ;
typedef TYPE_5__ compile_ctx_t ;
struct TYPE_19__ {unsigned int uint; } ;
struct TYPE_23__ {TYPE_2__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 TYPE_9__* FUNC_5 (TYPE_5__*,unsigned int) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 unsigned int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_9(compile_ctx_t *VAR_7, while_statement_t *VAR_8)
{
    statement_ctx_t VAR_9 = {0}, *VAR_10;
    unsigned VAR_11;
    unsigned VAR_12;
    HRESULT VAR_13;

    VAR_11 = VAR_7->instr_cnt;

    VAR_13 = FUNC_2(VAR_7, VAR_8->expr);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_12 = FUNC_7(VAR_7, VAR_8->stat.type == VAR_4 ? VAR_3 : VAR_2);
    if(!VAR_12)
        return VAR_0;

    if(!FUNC_4(VAR_7, 0))
        return VAR_0;

    if(VAR_8->stat.type == VAR_5) {
        VAR_10 = ((void*)0);
    }else {
        if(!(VAR_9.while_end_label = FUNC_1(VAR_7)))
            return VAR_0;
        VAR_10 = &VAR_9;
    }

    VAR_13 = FUNC_3(VAR_7, VAR_10, VAR_8->body);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_8(VAR_7, VAR_1, VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    FUNC_5(VAR_7, VAR_12)->arg1.uint = VAR_7->instr_cnt;

    if(VAR_10)
        FUNC_6(VAR_7, VAR_9.while_end_label);

    return VAR_6;
}
