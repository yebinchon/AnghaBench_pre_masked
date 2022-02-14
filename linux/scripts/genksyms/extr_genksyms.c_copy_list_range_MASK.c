
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {struct string_list* next; } ;


 void* FUNC_0 (struct string_list*) ;

struct string_list *FUNC_1(struct string_list *VAR_0,
        struct string_list *VAR_1)
{
 struct string_list *VAR_2, *VAR_3;

 if (VAR_0 == VAR_1)
  return ((void*)0);
 VAR_3 = VAR_2 = FUNC_0(VAR_0);
 for (VAR_0 = VAR_0->next; VAR_0 != VAR_1; VAR_0 = VAR_0->next) {
  VAR_3->next = FUNC_0(VAR_0);
  VAR_3 = VAR_3->next;
 }
 VAR_3->next = ((void*)0);
 return VAR_2;
}
