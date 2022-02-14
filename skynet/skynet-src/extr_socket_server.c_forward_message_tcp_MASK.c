
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct socket_message {char* data; int ud; int id; int opaque; } ;
struct socket_lock {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct socket {scalar_t__ type; int id; int opaque; TYPE_1__ p; int fd; } ;




 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct socket_server*,struct socket*,int) ;
 int VAR_6 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct socket_server *VAR_7, struct socket *VAR_8, struct socket_lock *VAR_9, struct socket_message * VAR_10) {
 int VAR_11 = VAR_8->p.size;
 char * VAR_12 = FUNC_1(VAR_11);
 int VAR_13 = (int)FUNC_4(VAR_8->fd, VAR_12, VAR_11);
 if (VAR_13<0) {
  FUNC_0(VAR_12);
  switch(VAR_5) {
  case 128:
   break;
  case 129:
   FUNC_3(VAR_6, "socket-server: EAGAIN capture.\n");
   break;
  default:

   FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
   VAR_10->data = FUNC_6(VAR_5);
   return VAR_3;
  }
  return -1;
 }
 if (VAR_13==0) {
  FUNC_0(VAR_12);
  FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
  return VAR_1;
 }

 if (VAR_8->type == VAR_4) {

  FUNC_0(VAR_12);
  return -1;
 }

 FUNC_5(VAR_7,VAR_8,VAR_13);

 if (VAR_13 == VAR_11) {
  VAR_8->p.size *= 2;
 } else if (VAR_11 > VAR_0 && VAR_13*2 < VAR_11) {
  VAR_8->p.size /= 2;
 }

 VAR_10->opaque = VAR_8->opaque;
 VAR_10->id = VAR_8->id;
 VAR_10->ud = VAR_13;
 VAR_10->data = VAR_12;
 return VAR_2;
}
