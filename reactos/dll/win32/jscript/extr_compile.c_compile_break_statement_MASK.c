
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ break_label; struct TYPE_11__* next; TYPE_1__* labelled_stat; } ;
typedef TYPE_2__ statement_ctx_t ;
struct TYPE_12__ {TYPE_2__* stat_ctx; } ;
typedef TYPE_3__ compiler_ctx_t ;
struct TYPE_13__ {int identifier; } ;
typedef TYPE_4__ branch_statement_t ;
struct TYPE_10__ {int identifier; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_3, branch_statement_t *VAR_4)
{
    statement_ctx_t *VAR_5;
    HRESULT VAR_6;

    if(VAR_4->identifier) {
        for(VAR_5 = VAR_3->stat_ctx; VAR_5; VAR_5 = VAR_5->next) {
            if(VAR_5->labelled_stat && !FUNC_5(VAR_5->labelled_stat->identifier, VAR_4->identifier)) {
                FUNC_2(VAR_5->break_label);
                break;
            }
        }

        if(!VAR_5) {
            FUNC_1("Label not found\n");
            return VAR_1;
        }
    }else {
        for(VAR_5 = VAR_3->stat_ctx; VAR_5; VAR_5 = VAR_5->next) {
            if(VAR_5->break_label && !VAR_5->labelled_stat)
                break;
        }

        if(!VAR_5) {
            FUNC_1("Break outside loop\n");
            return VAR_0;
        }
    }

    VAR_6 = FUNC_3(VAR_3, VAR_5->next);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_4(VAR_3, VAR_2, VAR_5->break_label);
}
