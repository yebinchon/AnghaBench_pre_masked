
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {int * next; scalar_t__ sz; } ;
struct wb_list {int * tail; int * head; } ;
struct socket_server {int dummy; } ;
struct socket {int wb_size; } ;


 int FUNC_0 (struct socket_server*,struct write_buffer*) ;

__attribute__((used)) static void
FUNC_1(struct socket_server *VAR_0, struct socket *VAR_1, struct wb_list *VAR_2, struct write_buffer *VAR_3) {
 VAR_1->wb_size -= VAR_3->sz;
 VAR_2->head = VAR_3->next;
 if (VAR_2->head == ((void*)0))
  VAR_2->tail = ((void*)0);
 FUNC_0(VAR_0,VAR_3);
}
