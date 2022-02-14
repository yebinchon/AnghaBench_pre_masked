
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {struct string_list* next; } ;


 int FUNC_0 (struct string_list*) ;

void FUNC_1(struct string_list *VAR_0, struct string_list *VAR_1)
{
 while (VAR_0 != VAR_1) {
  struct string_list *VAR_2 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }
}
