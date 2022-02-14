
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sockaddr_all {int s; } ;
struct write_buffer {struct write_buffer* next; scalar_t__ sz; int ptr; int udp_address; } ;
struct wb_list {int * tail; struct write_buffer* head; } ;
struct socket_server {int dummy; } ;
struct socket_message {int dummy; } ;
struct socket {int id; int wb_size; int fd; } ;
typedef scalar_t__ socklen_t ;




 int FUNC_0 (struct socket_server*,struct socket*,struct wb_list*,struct write_buffer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int *,scalar_t__) ;
 int FUNC_3 (struct socket_server*,struct socket*,scalar_t__) ;
 int VAR_1 ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct socket*,int ,union sockaddr_all*) ;
 int FUNC_6 (struct socket_server*,struct write_buffer*) ;

__attribute__((used)) static int
FUNC_7(struct socket_server *VAR_2, struct socket *VAR_3, struct wb_list *VAR_4, struct socket_message *VAR_5) {
 while (VAR_4->head) {
  struct write_buffer * VAR_6 = VAR_4->head;
  union sockaddr_all VAR_7;
  socklen_t VAR_8 = FUNC_5(VAR_3, VAR_6->udp_address, &VAR_7);
  if (VAR_8 == 0) {
   FUNC_1(VAR_1, "socket-server : udp (%d) type mismatch.\n", VAR_3->id);
   FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
   return -1;
  }
  int VAR_9 = FUNC_2(VAR_3->fd, VAR_6->ptr, VAR_6->sz, 0, &VAR_7.s, VAR_8);
  if (VAR_9 < 0) {
   switch(VAR_0) {
   case 128:
   case 129:
    return -1;
   }
   FUNC_1(VAR_1, "socket-server : udp (%d) sendto error %s.\n",VAR_3->id, FUNC_4(VAR_0));
   FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
   return -1;
  }
  FUNC_3(VAR_2,VAR_3,VAR_6->sz);
  VAR_3->wb_size -= VAR_6->sz;
  VAR_4->head = VAR_6->next;
  FUNC_6(VAR_2,VAR_6);
 }
 VAR_4->tail = ((void*)0);

 return -1;
}
