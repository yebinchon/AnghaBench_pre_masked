
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {struct write_buffer* next; } ;
struct wb_list {struct write_buffer* tail; struct write_buffer* head; } ;
struct socket {struct wb_list high; struct wb_list low; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct socket * VAR_0) {
 struct wb_list *VAR_1 = &VAR_0->low;
 struct write_buffer *VAR_2 = VAR_1->head;
 VAR_1->head = VAR_2->next;
 if (VAR_1->head == ((void*)0)) {
  VAR_1->tail = ((void*)0);
 }


 struct wb_list *VAR_3 = &VAR_0->high;
 FUNC_0(VAR_3->head == ((void*)0));

 VAR_2->next = ((void*)0);
 VAR_3->head = VAR_3->tail = VAR_2;
}
