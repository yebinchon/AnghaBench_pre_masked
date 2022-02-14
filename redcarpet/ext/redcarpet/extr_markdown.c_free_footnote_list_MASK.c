
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct footnote_list {struct footnote_item* head; } ;
struct footnote_item {int ref; struct footnote_item* next; } ;


 int FUNC_0 (struct footnote_item*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct footnote_list *VAR_0, int VAR_1)
{
 struct footnote_item *VAR_2 = VAR_0->head;
 struct footnote_item *VAR_3;

 while (VAR_2) {
  VAR_3 = VAR_2->next;
  if (VAR_1)
   FUNC_1(VAR_2->ref);
  FUNC_0(VAR_2);
  VAR_2 = VAR_3;
 }
}
