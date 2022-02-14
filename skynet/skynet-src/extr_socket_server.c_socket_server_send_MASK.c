
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sockaddr_all {int s; } ;
struct socket_server {int event_fd; struct socket* slot; } ;
struct socket_sendbuffer {int id; scalar_t__ buffer; } ;
struct socket_lock {int dummy; } ;
struct TYPE_4__ {int udp_address; } ;
struct socket {int id; scalar_t__ type; scalar_t__ protocol; int fd; scalar_t__ dw_offset; int dw_size; void* dw_buffer; TYPE_1__ p; } ;
struct send_object {scalar_t__ sz; int (* free_func ) (void*) ;int buffer; } ;
struct TYPE_5__ {int id; int sz; void* buffer; } ;
struct TYPE_6__ {TYPE_2__ send; } ;
struct request_package {TYPE_3__ u; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ socklen_t ;


 size_t FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct socket*,int) ;
 void* FUNC_2 (struct socket_sendbuffer*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct socket_server*,struct socket_sendbuffer*) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket_server*,struct send_object*,struct socket_sendbuffer*) ;
 int FUNC_7 (struct socket_server*,struct request_package*,char,int) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,int ,int *,scalar_t__) ;
 int FUNC_9 (struct socket*,struct socket_lock*) ;
 scalar_t__ FUNC_10 (struct socket_lock*) ;
 int FUNC_11 (struct socket_lock*) ;
 int FUNC_12 (int ,int ,struct socket*,int) ;
 int FUNC_13 (struct socket_server*,struct socket*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (struct socket*,int ,union sockaddr_all*) ;
 scalar_t__ FUNC_17 (int ,int ,scalar_t__) ;

int
FUNC_18(struct socket_server *VAR_3, struct socket_sendbuffer *VAR_4) {
 int VAR_5 = VAR_4->id;
 struct socket * VAR_6 = &VAR_3->slot[FUNC_0(VAR_5)];
 if (VAR_6->id != VAR_5 || VAR_6->type == VAR_1) {
  FUNC_4(VAR_3, VAR_4);
  return -1;
 }

 struct socket_lock VAR_7;
 FUNC_9(VAR_6, &VAR_7);

 if (FUNC_1(VAR_6,VAR_5) && FUNC_10(&VAR_7)) {

  if (FUNC_1(VAR_6,VAR_5)) {

   struct send_object VAR_8;
   FUNC_6(VAR_3, &VAR_8, VAR_4);
   ssize_t VAR_9;
   if (VAR_6->protocol == VAR_0) {
    VAR_9 = FUNC_17(VAR_6->fd, VAR_8.buffer, VAR_8.sz);
   } else {
    union sockaddr_all VAR_10;
    socklen_t VAR_11 = FUNC_16(VAR_6, VAR_6->p.udp_address, &VAR_10);
    if (VAR_11 == 0) {
     FUNC_3(VAR_2, "socket-server : set udp (%d) address first.\n", VAR_5);
     FUNC_11(&VAR_7);
     VAR_8.free_func((void *)VAR_4->buffer);
     return -1;
    }
    VAR_9 = FUNC_8(VAR_6->fd, VAR_8.buffer, VAR_8.sz, 0, &VAR_10.s, VAR_11);
   }
   if (VAR_9<0) {

    VAR_9 = 0;
   }
   FUNC_13(VAR_3,VAR_6,VAR_9);
   if (VAR_9 == VAR_8.sz) {

    FUNC_11(&VAR_7);
    VAR_8.free_func((void *)VAR_4->buffer);
    return 0;
   }

   VAR_6->dw_buffer = FUNC_2(VAR_4, &VAR_6->dw_size);
   VAR_6->dw_offset = VAR_9;

   FUNC_12(VAR_3->event_fd, VAR_6->fd, VAR_6, 1);

   FUNC_11(&VAR_7);
   return 0;
  }
  FUNC_11(&VAR_7);
 }

 FUNC_5(VAR_6, VAR_5);

 struct request_package VAR_12;
 VAR_12.u.send.id = VAR_5;
 VAR_12.u.send.buffer = FUNC_2(VAR_4, &VAR_12.u.send.sz);

 FUNC_7(VAR_3, &VAR_12, 'D', sizeof(VAR_12.u.send));
 return 0;
}
