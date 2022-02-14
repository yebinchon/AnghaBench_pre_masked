
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ statement_t ;



__attribute__((used)) static statement_t *FUNC_0(statement_t *VAR_0, statement_t *VAR_1)
{
    statement_t *VAR_2;

    for(VAR_2 = VAR_0; VAR_2->next; VAR_2 = VAR_2->next);
    VAR_2->next = VAR_1;

    return VAR_0;
}
