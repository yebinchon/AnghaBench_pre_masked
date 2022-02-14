
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {scalar_t__ tag; struct string_list* next; int string; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct string_list *VAR_0, struct string_list *VAR_1)
{
 while (VAR_0 && VAR_1) {
  if (VAR_0->tag != VAR_1->tag || FUNC_0(VAR_0->string, VAR_1->string))
   return 0;
  VAR_0 = VAR_0->next;
  VAR_1 = VAR_1->next;
 }

 return !VAR_0 && !VAR_1;
}
