
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {struct write_buffer* next; } ;
struct wb_list {int * tail; struct write_buffer* head; } ;
struct socket_server {int dummy; } ;


 int FUNC_0 (struct socket_server*,struct write_buffer*) ;

__attribute__((used)) static void
FUNC_1(struct socket_server *VAR_0, struct wb_list *VAR_1) {
 struct write_buffer *VAR_2 = VAR_1->head;
 while (VAR_2) {
  struct write_buffer *VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_0, VAR_3);
 }
 VAR_1->head = ((void*)0);
 VAR_1->tail = ((void*)0);
}
