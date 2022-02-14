
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct footnote_ref {int dummy; } ;
struct footnote_list {int count; struct footnote_item* tail; struct footnote_item* head; } ;
struct footnote_item {struct footnote_item* next; struct footnote_ref* ref; } ;


 struct footnote_item* FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct footnote_list *VAR_0, struct footnote_ref *VAR_1)
{
 struct footnote_item *VAR_2 = FUNC_0(1, sizeof(struct footnote_item));
 if (!VAR_2)
  return 0;
 VAR_2->ref = VAR_1;

 if (VAR_0->head == ((void*)0)) {
  VAR_0->head = VAR_0->tail = VAR_2;
 } else {
  VAR_0->tail->next = VAR_2;
  VAR_0->tail = VAR_2;
 }
 VAR_0->count++;

 return 1;
}
