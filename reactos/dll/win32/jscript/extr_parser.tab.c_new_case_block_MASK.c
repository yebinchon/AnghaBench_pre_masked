
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ statement_t ;
typedef int parser_ctx_t ;
struct TYPE_9__ {TYPE_3__* head; TYPE_3__* tail; } ;
typedef TYPE_2__ case_list_t ;
struct TYPE_10__ {TYPE_1__* stat; struct TYPE_10__* next; } ;
typedef TYPE_3__ case_clausule_t ;



__attribute__((used)) static case_clausule_t *FUNC_0(parser_ctx_t *VAR_0, case_list_t *VAR_1,
        case_clausule_t *VAR_2, case_list_t *VAR_3)
{
    case_clausule_t *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6;
    statement_t *VAR_7 = ((void*)0);

    if(VAR_1) {
        VAR_4 = VAR_1->head;
        VAR_5 = VAR_1->tail;
    }

    if(VAR_2) {
        if(VAR_4)
            VAR_5 = VAR_5->next = VAR_2;
        else
            VAR_4 = VAR_5 = VAR_2;
    }

    if(VAR_3) {
        if(VAR_4)
            VAR_5->next = VAR_3->head;
        else
            VAR_4 = VAR_3->head;
    }

    if(!VAR_4)
        return ((void*)0);

    for(VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
        for(VAR_6 = VAR_5; VAR_6 && !VAR_6->stat; VAR_6 = VAR_6->next);
        if(!VAR_6)
            break;

        while(VAR_5 != VAR_6) {
            VAR_5->stat = VAR_6->stat;
            VAR_5 = VAR_5->next;
        }

        if(VAR_7) {
            while(VAR_7->next)
                VAR_7 = VAR_7->next;
            VAR_7->next = VAR_5->stat;
        }else {
            VAR_7 = VAR_5->stat;
        }
    }

    return VAR_4;
}
