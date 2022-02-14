
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ else_stat; TYPE_3__* elseifs; scalar_t__ if_stat; int expr; } ;
typedef TYPE_2__ if_statement_t ;
struct TYPE_18__ {scalar_t__ stat; int expr; struct TYPE_18__* next; } ;
typedef TYPE_3__ elseif_decl_t ;
struct TYPE_19__ {int instr_cnt; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_16__ {int uint; } ;
struct TYPE_20__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_8__* FUNC_5 (TYPE_4__*,unsigned int) ;
 int FUNC_6 (TYPE_4__*,unsigned int) ;
 unsigned int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_9(compile_ctx_t *VAR_4, if_statement_t *VAR_5)
{
    unsigned VAR_6, VAR_7 = 0;
    elseif_decl_t *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_2(VAR_4, VAR_5->expr);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_6 = FUNC_7(VAR_4, VAR_2);
    if(!VAR_6)
        return VAR_0;

    if(!FUNC_4(VAR_4, 0))
        return VAR_0;

    VAR_9 = FUNC_3(VAR_4, ((void*)0), VAR_5->if_stat);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_5->else_stat || VAR_5->elseifs) {
        VAR_7 = FUNC_1(VAR_4);
        if(!VAR_7)
            return VAR_0;

        VAR_9 = FUNC_8(VAR_4, VAR_1, VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    for(VAR_8 = VAR_5->elseifs; VAR_8; VAR_8 = VAR_8->next) {
        FUNC_5(VAR_4, VAR_6)->arg1.uint = VAR_4->instr_cnt;

        VAR_9 = FUNC_2(VAR_4, VAR_8->expr);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_6 = FUNC_7(VAR_4, VAR_2);
        if(!VAR_6)
            return VAR_0;

        if(!FUNC_4(VAR_4, 0))
            return VAR_0;

        VAR_9 = FUNC_3(VAR_4, ((void*)0), VAR_8->stat);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_8(VAR_4, VAR_1, VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    FUNC_5(VAR_4, VAR_6)->arg1.uint = VAR_4->instr_cnt;

    if(VAR_5->else_stat) {
        VAR_9 = FUNC_3(VAR_4, ((void*)0), VAR_5->else_stat);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    if(VAR_7)
        FUNC_6(VAR_4, VAR_7);
    return VAR_3;
}
