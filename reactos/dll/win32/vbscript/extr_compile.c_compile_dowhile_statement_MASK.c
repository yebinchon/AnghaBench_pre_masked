
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_15__ {TYPE_1__ stat; scalar_t__ expr; int body; } ;
typedef TYPE_2__ while_statement_t ;
typedef int vbsop_t ;
struct TYPE_16__ {int while_end_label; int member_0; } ;
typedef TYPE_3__ statement_ctx_t ;
struct TYPE_17__ {unsigned int instr_cnt; } ;
typedef TYPE_4__ compile_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_7(compile_ctx_t *VAR_6, while_statement_t *VAR_7)
{
    statement_ctx_t VAR_8 = {0};
    unsigned VAR_9;
    vbsop_t VAR_10;
    HRESULT VAR_11;

    VAR_9 = VAR_6->instr_cnt;

    if(!(VAR_8.while_end_label = FUNC_1(VAR_6)))
        return VAR_0;

    VAR_11 = FUNC_3(VAR_6, &VAR_8, VAR_7->body);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(VAR_7->expr) {
        VAR_11 = FUNC_2(VAR_6, VAR_7->expr);
        if(FUNC_0(VAR_11))
            return VAR_11;

        VAR_10 = VAR_7->stat.type == VAR_4 ? VAR_2 : VAR_3;
    }else {
        VAR_10 = VAR_1;
    }

    VAR_11 = FUNC_6(VAR_6, VAR_10, VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    FUNC_5(VAR_6, VAR_8.while_end_label);

    if(!FUNC_4(VAR_6, 0))
        return VAR_0;

    return VAR_5;
}
