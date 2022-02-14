
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int member_0; int for_end_label; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_16__ {int identifier; int body; int group_expr; } ;
typedef TYPE_2__ foreach_statement_t ;
struct TYPE_17__ {unsigned int instr_cnt; } ;
typedef TYPE_3__ compile_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,unsigned int) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_9(compile_ctx_t *VAR_6, foreach_statement_t *VAR_7)
{
    statement_ctx_t VAR_8 = {1};
    unsigned VAR_9;
    HRESULT VAR_10;


    if(!FUNC_6(VAR_6, VAR_1))
        return VAR_0;

    VAR_10 = FUNC_2(VAR_6, VAR_7->group_expr);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(!FUNC_6(VAR_6, VAR_4))
        return VAR_0;

    if(!(VAR_8.for_end_label = FUNC_1(VAR_6)))
        return VAR_0;

    VAR_10 = FUNC_8(VAR_6, VAR_2, VAR_8.for_end_label, VAR_7->identifier);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(!FUNC_4(VAR_6, 1))
        return VAR_0;

    VAR_9 = VAR_6->instr_cnt;
    VAR_10 = FUNC_3(VAR_6, &VAR_8, VAR_7->body);
    if(FUNC_0(VAR_10))
        return VAR_10;


    VAR_10 = FUNC_8(VAR_6, VAR_2, VAR_8.for_end_label, VAR_7->identifier);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_7(VAR_6, VAR_3, VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    FUNC_5(VAR_6, VAR_8.for_end_label);
    return VAR_5;
}
