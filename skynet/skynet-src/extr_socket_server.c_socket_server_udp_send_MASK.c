
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sockaddr_all {int s; } ;
typedef int uint8_t ;
struct socket_udp_address {int dummy; } ;
struct socket_server {struct socket* slot; } ;
struct socket_sendbuffer {int id; scalar_t__ buffer; } ;
struct socket_lock {int dummy; } ;
struct socket {int id; scalar_t__ type; int fd; } ;
struct send_object {int (* free_func ) (void*) ;int sz; int buffer; } ;
struct TYPE_4__ {int id; int sz; int buffer; } ;
struct TYPE_5__ {int address; TYPE_1__ send; } ;
struct TYPE_6__ {TYPE_2__ send_udp; } ;
struct request_package {TYPE_3__ u; } ;
typedef scalar_t__ socklen_t ;


 size_t FUNC_0 (int) ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket_sendbuffer*,int *) ;
 int FUNC_3 (struct socket_server*,struct socket_sendbuffer*) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (struct socket_server*,struct send_object*,struct socket_sendbuffer*) ;
 int FUNC_6 (struct socket_server*,struct request_package*,char,int) ;
 int FUNC_7 (int ,int ,int ,int ,int *,scalar_t__) ;
 int FUNC_8 (struct socket*,struct socket_lock*) ;
 scalar_t__ FUNC_9 (struct socket_lock*) ;
 int FUNC_10 (struct socket_lock*) ;
 int FUNC_11 (struct socket_server*,struct socket*,int) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (struct socket*,int const*,union sockaddr_all*) ;

int
FUNC_15(struct socket_server *VAR_1, const struct socket_udp_address *VAR_2, struct socket_sendbuffer *VAR_3) {
 int VAR_4 = VAR_3->id;
 struct socket * VAR_5 = &VAR_1->slot[FUNC_0(VAR_4)];
 if (VAR_5->id != VAR_4 || VAR_5->type == VAR_0) {
  FUNC_3(VAR_1, VAR_3);
  return -1;
 }

 const uint8_t *VAR_6 = (const uint8_t *)VAR_2;
 int VAR_7;
 switch (VAR_6[0]) {
 case 129:
  VAR_7 = 1+2+4;
  break;
 case 128:
  VAR_7 = 1+2+16;
  break;
 default:
  FUNC_3(VAR_1, VAR_3);
  return -1;
 }

 struct socket_lock VAR_8;
 FUNC_8(VAR_5, &VAR_8);

 if (FUNC_1(VAR_5,VAR_4) && FUNC_9(&VAR_8)) {

  if (FUNC_1(VAR_5,VAR_4)) {

   struct send_object VAR_9;
   FUNC_5(VAR_1, &VAR_9, VAR_3);
   union sockaddr_all VAR_10;
   socklen_t VAR_11 = FUNC_14(VAR_5, VAR_6, &VAR_10);
   if (VAR_11 == 0) {
    FUNC_10(&VAR_8);
    VAR_9.free_func((void *)VAR_3->buffer);
    return -1;
   }
   int VAR_12 = FUNC_7(VAR_5->fd, VAR_9.buffer, VAR_9.sz, 0, &VAR_10.s, VAR_11);
   if (VAR_12 >= 0) {

    FUNC_11(VAR_1,VAR_5,VAR_12);
    FUNC_10(&VAR_8);
    VAR_9.free_func((void *)VAR_3->buffer);
    return 0;
   }
  }
  FUNC_10(&VAR_8);

 }

 struct request_package VAR_13;
 VAR_13.u.send_udp.send.id = VAR_4;
 VAR_13.u.send_udp.send.buffer = FUNC_2(VAR_3, &VAR_13.u.send_udp.send.sz);

 FUNC_4(VAR_13.u.send_udp.address, VAR_6, VAR_7);

 FUNC_6(VAR_1, &VAR_13, 'A', sizeof(VAR_13.u.send_udp.send)+VAR_7);
 return 0;
}
