
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int event_fd; int recvctrl_fd; int sendctrl_fd; struct socket* slot; } ;
struct socket_message {int dummy; } ;
struct socket_lock {int dummy; } ;
struct socket {scalar_t__ type; int dw_lock; } ;


 int FUNC_0 (struct socket_server*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_3 (struct socket*,struct socket_lock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct socket_server *VAR_2) {
 int VAR_3;
 struct socket_message VAR_4;
 for (VAR_3=0;VAR_3<VAR_0;VAR_3++) {
  struct socket *VAR_5 = &VAR_2->slot[VAR_3];
  struct socket_lock VAR_6;
  FUNC_3(VAR_5, &VAR_6);
  if (VAR_5->type != VAR_1) {
   FUNC_2(VAR_2, VAR_5, &VAR_6, &VAR_4);
  }
  FUNC_5(&VAR_5->dw_lock);
 }
 FUNC_1(VAR_2->sendctrl_fd);
 FUNC_1(VAR_2->recvctrl_fd);
 FUNC_4(VAR_2->event_fd);
 FUNC_0(VAR_2);
}
