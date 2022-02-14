
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int break_label; TYPE_1__* labelled_stat; struct TYPE_12__* next; TYPE_3__* member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ statement_ctx_t ;
struct TYPE_13__ {int statement; int identifier; } ;
typedef TYPE_3__ labelled_statement_t ;
struct TYPE_14__ {TYPE_2__* stat_ctx; } ;
typedef TYPE_4__ compiler_ctx_t ;
struct TYPE_11__ {int identifier; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_7(compiler_ctx_t *VAR_4, labelled_statement_t *VAR_5)
{
    statement_ctx_t VAR_6 = {0, VAR_1, VAR_1, 0, 0, VAR_5}, *VAR_7;
    HRESULT VAR_8;

    for(VAR_7 = VAR_4->stat_ctx; VAR_7; VAR_7 = VAR_7->next) {
        if(VAR_7->labelled_stat && !FUNC_6(VAR_7->labelled_stat->identifier, VAR_5->identifier)) {
            FUNC_1("Label %s redefined\n", FUNC_4(VAR_5->identifier));
            return VAR_2;
        }
    }


    VAR_6.break_label = FUNC_2(VAR_4);
    if(!VAR_6.break_label)
        return VAR_0;

    VAR_8 = FUNC_3(VAR_4, &VAR_6, VAR_5->statement);
    if(FUNC_0(VAR_8))
        return VAR_8;

    FUNC_5(VAR_4, VAR_6.break_label);
    return VAR_3;
}
