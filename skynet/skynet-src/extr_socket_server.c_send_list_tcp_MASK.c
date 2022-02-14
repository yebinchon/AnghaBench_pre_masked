
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {scalar_t__ sz; struct write_buffer* next; int ptr; } ;
struct wb_list {int * tail; struct write_buffer* head; } ;
struct socket_server {int dummy; } ;
struct socket_message {int dummy; } ;
struct socket_lock {int dummy; } ;
struct socket {int wb_size; int fd; } ;
typedef scalar_t__ ssize_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_1 (struct socket_server*,struct socket*,int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct socket_server*,struct write_buffer*) ;

__attribute__((used)) static int
FUNC_4(struct socket_server *VAR_2, struct socket *VAR_3, struct wb_list *VAR_4, struct socket_lock *VAR_5, struct socket_message *VAR_6) {
 while (VAR_4->head) {
  struct write_buffer * VAR_7 = VAR_4->head;
  for (;;) {
   ssize_t VAR_8 = FUNC_2(VAR_3->fd, VAR_7->ptr, VAR_7->sz);
   if (VAR_8 < 0) {
    switch(VAR_1) {
    case 128:
     continue;
    case 129:
     return -1;
    }
    FUNC_0(VAR_2,VAR_3,VAR_5,VAR_6);
    return VAR_0;
   }
   FUNC_1(VAR_2,VAR_3,(int)VAR_8);
   VAR_3->wb_size -= VAR_8;
   if (VAR_8 != VAR_7->sz) {
    VAR_7->ptr += VAR_8;
    VAR_7->sz -= VAR_8;
    return -1;
   }
   break;
  }
  VAR_4->head = VAR_7->next;
  FUNC_3(VAR_2,VAR_7);
 }
 VAR_4->tail = ((void*)0);

 return -1;
}
