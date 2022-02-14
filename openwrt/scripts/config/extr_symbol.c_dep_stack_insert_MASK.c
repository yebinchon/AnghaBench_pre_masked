
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dep_stack {struct symbol* sym; struct dep_stack* prev; struct dep_stack* next; } ;


 struct dep_stack* VAR_0 ;
 int FUNC_0 (struct dep_stack*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dep_stack *VAR_1, struct symbol *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 if (VAR_0)
  VAR_0->next = VAR_1;
 VAR_1->prev = VAR_0;
 VAR_1->sym = VAR_2;
 VAR_0 = VAR_1;
}
