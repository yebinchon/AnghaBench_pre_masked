
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stack_use; struct TYPE_4__* next; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_5__ {TYPE_1__* stat_ctx; } ;
typedef TYPE_2__ compile_ctx_t ;



__attribute__((used)) static inline unsigned FUNC_0(compile_ctx_t *VAR_0)
{
    statement_ctx_t *VAR_1;
    unsigned VAR_2 = 0;

    for(VAR_1 = VAR_0->stat_ctx; VAR_1; VAR_1 = VAR_1->next)
        VAR_2 += VAR_1->stack_use;

    return VAR_2;
}
