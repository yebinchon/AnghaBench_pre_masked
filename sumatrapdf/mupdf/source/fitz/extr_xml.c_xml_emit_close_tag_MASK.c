
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {TYPE_1__* head; int depth; } ;
typedef int fz_context ;
struct TYPE_2__ {struct TYPE_2__* up; int * next; } ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, struct parser *VAR_1)
{
 VAR_1->depth--;
 VAR_1->head->next = ((void*)0);
 if (VAR_1->head->up)
  VAR_1->head = VAR_1->head->up;
}
