
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ statement_t ;
struct TYPE_7__ {TYPE_1__* statement_tail; TYPE_1__* statement; } ;
typedef TYPE_2__ source_elements_t ;



__attribute__((used)) static source_elements_t *FUNC_0(source_elements_t *VAR_0, statement_t *VAR_1)
{
    if(VAR_0->statement_tail)
        VAR_0->statement_tail = VAR_0->statement_tail->next = VAR_1;
    else
        VAR_0->statement = VAR_0->statement_tail = VAR_1;

    return VAR_0;
}
