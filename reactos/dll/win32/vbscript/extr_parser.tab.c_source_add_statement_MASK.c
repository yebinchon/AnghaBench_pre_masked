
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ statement_t ;
struct TYPE_6__ {TYPE_1__* stats_tail; TYPE_1__* stats; } ;
typedef TYPE_2__ parser_ctx_t ;



__attribute__((used)) static void FUNC_0(parser_ctx_t *VAR_0, statement_t *VAR_1)
{
    if(!VAR_1)
        return;

    if(VAR_0->stats) {
        VAR_0->stats_tail->next = VAR_1;
        VAR_0->stats_tail = VAR_1;
    }else {
        VAR_0->stats = VAR_0->stats_tail = VAR_1;
    }
}
