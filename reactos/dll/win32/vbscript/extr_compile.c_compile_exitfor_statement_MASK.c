
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ for_end_label; scalar_t__ stack_use; struct TYPE_6__* next; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_7__ {TYPE_1__* stat_ctx; } ;
typedef TYPE_2__ compile_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_4(compile_ctx_t *VAR_3)
{
    statement_ctx_t *VAR_4;
    unsigned VAR_5 = 0;

    for(VAR_4 = VAR_3->stat_ctx; VAR_4; VAR_4 = VAR_4->next) {
        VAR_5 += VAR_4->stack_use;
        if(VAR_4->for_end_label)
            break;
    }
    if(!VAR_4) {
        FUNC_1("Exit For outside For loop\n");
        return VAR_0;
    }

    if(VAR_5) {
        HRESULT VAR_6;

        VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_5);
        if(FUNC_0(VAR_6))
            return VAR_6;
    }

    return FUNC_2(VAR_3, VAR_1, VAR_4->for_end_label);
}
