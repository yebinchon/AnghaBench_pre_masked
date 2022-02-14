
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sockaddr_all {int s; } ;
typedef int uint8_t ;
struct socket_server {int event_fd; struct socket* slot; } ;
struct socket_message {int id; int ud; int * data; int opaque; } ;
struct TYPE_2__ {int * udp_address; } ;
struct socket {scalar_t__ type; int id; scalar_t__ protocol; int wb_size; int warn_size; int opaque; TYPE_1__ p; int fd; } ;
struct send_object {int sz; int (* free_func ) (void*) ;int buffer; } ;
struct request_send {int id; scalar_t__ buffer; int sz; } ;
typedef scalar_t__ socklen_t ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct socket_server*,struct socket*,struct request_send*) ;
 int FUNC_2 (struct socket_server*,struct socket*,struct request_send*) ;
 int FUNC_3 (struct socket_server*,struct socket*,int,struct request_send*,int const*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket_server*,struct send_object*,scalar_t__,int ) ;
 int FUNC_7 (int ,int ,int,int ,int *,scalar_t__) ;
 int FUNC_8 (int ,int ,struct socket*,int) ;
 int FUNC_9 (struct socket_server*,struct socket*,int) ;
 int VAR_10 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (struct socket*,int const*,union sockaddr_all*) ;

__attribute__((used)) static int
FUNC_15(struct socket_server *VAR_11, struct request_send * VAR_12, struct socket_message *VAR_13, int VAR_14, const uint8_t *VAR_15) {
 int VAR_16 = VAR_12->id;
 struct socket * VAR_17 = &VAR_11->slot[FUNC_0(VAR_16)];
 struct send_object VAR_18;
 FUNC_6(VAR_11, &VAR_18, VAR_12->buffer, VAR_12->sz);
 if (VAR_17->type == VAR_4 || VAR_17->id != VAR_16
  || VAR_17->type == VAR_3
  || VAR_17->type == VAR_6) {
  VAR_18.free_func((void *)VAR_12->buffer);
  return -1;
 }
 if (VAR_17->type == VAR_7 || VAR_17->type == VAR_5) {
  FUNC_4(VAR_10, "socket-server: write to listen fd %d.\n", VAR_16);
  VAR_18.free_func((void *)VAR_12->buffer);
  return -1;
 }
 if (FUNC_5(VAR_17) && VAR_17->type == VAR_2) {
  if (VAR_17->protocol == VAR_1) {
   FUNC_1(VAR_11, VAR_17, VAR_12);
  } else {

   if (VAR_15 == ((void*)0)) {
    VAR_15 = VAR_17->p.udp_address;
   }
   union sockaddr_all VAR_19;
   socklen_t VAR_20 = FUNC_14(VAR_17, VAR_15, &VAR_19);
   if (VAR_20 == 0) {

    FUNC_4(VAR_10, "socket-server: udp socket (%d) type mistach.\n", VAR_16);
    VAR_18.free_func((void *)VAR_12->buffer);
    return -1;
   }
   int VAR_21 = FUNC_7(VAR_17->fd, VAR_18.buffer, VAR_18.sz, 0, &VAR_19.s, VAR_20);
   if (VAR_21 != VAR_18.sz) {
    FUNC_3(VAR_11,VAR_17,VAR_14,VAR_12,VAR_15);
   } else {
    FUNC_9(VAR_11,VAR_17,VAR_21);
    VAR_18.free_func((void *)VAR_12->buffer);
    return -1;
   }
  }
  FUNC_8(VAR_11->event_fd, VAR_17->fd, VAR_17, 1);
 } else {
  if (VAR_17->protocol == VAR_1) {
   if (VAR_14 == VAR_0) {
    FUNC_2(VAR_11, VAR_17, VAR_12);
   } else {
    FUNC_1(VAR_11, VAR_17, VAR_12);
   }
  } else {
   if (VAR_15 == ((void*)0)) {
    VAR_15 = VAR_17->p.udp_address;
   }
   FUNC_3(VAR_11,VAR_17,VAR_14,VAR_12,VAR_15);
  }
 }
 if (VAR_17->wb_size >= VAR_9 && VAR_17->wb_size >= VAR_17->warn_size) {
  VAR_17->warn_size = VAR_17->warn_size == 0 ? VAR_9 *2 : VAR_17->warn_size*2;
  VAR_13->opaque = VAR_17->opaque;
  VAR_13->id = VAR_17->id;
  VAR_13->ud = VAR_17->wb_size%1024 == 0 ? VAR_17->wb_size/1024 : VAR_17->wb_size/1024 + 1;
  VAR_13->data = ((void*)0);
  return VAR_8;
 }
 return -1;
}
