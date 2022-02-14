
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_2__ statement_t ;
struct TYPE_14__ {scalar_t__ continue_label; struct TYPE_14__* next; TYPE_1__* labelled_stat; } ;
typedef TYPE_3__ statement_ctx_t ;
struct TYPE_15__ {TYPE_2__* statement; } ;
typedef TYPE_4__ labelled_statement_t ;
struct TYPE_16__ {TYPE_3__* stat_ctx; } ;
typedef TYPE_5__ compiler_ctx_t ;
struct TYPE_17__ {scalar_t__ identifier; } ;
typedef TYPE_6__ branch_statement_t ;
struct TYPE_12__ {TYPE_2__* statement; int identifier; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_7(compiler_ctx_t *VAR_4, branch_statement_t *VAR_5)
{
    statement_ctx_t *VAR_6;
    HRESULT VAR_7;

    if(VAR_5->identifier) {
        statement_t *VAR_8;
        statement_ctx_t *VAR_9;

        VAR_6 = ((void*)0);

        for(VAR_9 = VAR_4->stat_ctx; VAR_9; VAR_9 = VAR_9->next) {
            if(VAR_9->continue_label)
                VAR_6 = VAR_9;
            if(VAR_9->labelled_stat && !FUNC_6(VAR_9->labelled_stat->identifier, VAR_5->identifier))
                break;
        }

        if(!VAR_9) {
            FUNC_1("Label not found\n");
            return VAR_1;
        }


        for(VAR_8 = VAR_9->labelled_stat->statement;
            VAR_8->type == VAR_3;
            VAR_8 = ((labelled_statement_t*)VAR_8)->statement);
        if(!FUNC_3(VAR_8->type)) {
            FUNC_1("Label is not a loop\n");
            return VAR_0;
        }

        FUNC_2(VAR_6 != ((void*)0));
    }else {
        for(VAR_6 = VAR_4->stat_ctx; VAR_6; VAR_6 = VAR_6->next) {
            if(VAR_6->continue_label)
                break;
        }

        if(!VAR_6) {
            FUNC_1("continue outside loop\n");
            return VAR_0;
        }
    }

    VAR_7 = FUNC_4(VAR_4, VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    return FUNC_5(VAR_4, VAR_2, VAR_6->continue_label);
}
