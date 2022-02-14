
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_function_handler {struct tep_function_handler* next; struct tep_function_handler* params; struct tep_function_handler* name; } ;
struct func_params {struct func_params* next; struct func_params* params; struct func_params* name; } ;


 int FUNC_0 (struct tep_function_handler*) ;

__attribute__((used)) static void FUNC_1(struct tep_function_handler *VAR_0)
{
 struct func_params *VAR_1;

 FUNC_0(VAR_0->name);

 while (VAR_0->params) {
  VAR_1 = VAR_0->params;
  VAR_0->params = VAR_1->next;
  FUNC_0(VAR_1);
 }

 FUNC_0(VAR_0);
}
