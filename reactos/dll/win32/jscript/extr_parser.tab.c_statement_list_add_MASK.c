
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ statement_t ;
struct TYPE_7__ {TYPE_1__* tail; } ;
typedef TYPE_2__ statement_list_t ;



__attribute__((used)) static statement_list_t *FUNC_0(statement_list_t *VAR_0, statement_t *VAR_1)
{
    VAR_0->tail = VAR_0->tail->next = VAR_1;

    return VAR_0;
}
