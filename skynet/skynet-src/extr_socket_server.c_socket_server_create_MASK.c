
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct socket_server {int recvctrl_fd; int sendctrl_fd; int checkctrl; int rfds; int soi; scalar_t__ event_index; scalar_t__ event_n; scalar_t__ alloc_id; struct socket* slot; int event_fd; int time; } ;
struct socket {int dw_lock; int low; int high; int type; } ;
typedef int poll_fd ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct socket_server* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int ,int,int *) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;

struct socket_server *
FUNC_13(uint64_t VAR_4) {
 int VAR_5;
 int VAR_6[2];
 poll_fd VAR_7 = FUNC_9();
 if (FUNC_10(VAR_7)) {
  FUNC_5(VAR_3, "socket-server: create event pool failed.\n");
  return ((void*)0);
 }
 if (FUNC_7(VAR_6)) {
  FUNC_11(VAR_7);
  FUNC_5(VAR_3, "socket-server: create socket pair failed.\n");
  return ((void*)0);
 }
 if (FUNC_8(VAR_7, VAR_6[0], ((void*)0))) {

  FUNC_5(VAR_3, "socket-server: can't add server fd to event pool.\n");
  FUNC_4(VAR_6[0]);
  FUNC_4(VAR_6[1]);
  FUNC_11(VAR_7);
  return ((void*)0);
 }

 struct socket_server *VAR_8 = FUNC_1(sizeof(*VAR_8));
 VAR_8->time = VAR_4;
 VAR_8->event_fd = VAR_7;
 VAR_8->recvctrl_fd = VAR_6[0];
 VAR_8->sendctrl_fd = VAR_6[1];
 VAR_8->checkctrl = 1;

 for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
  struct socket *VAR_9 = &VAR_8->slot[VAR_5];
  VAR_9->type = VAR_2;
  FUNC_3(&VAR_9->high);
  FUNC_3(&VAR_9->low);
  FUNC_12(&VAR_9->dw_lock);
 }
 VAR_8->alloc_id = 0;
 VAR_8->event_n = 0;
 VAR_8->event_index = 0;
 FUNC_6(&VAR_8->soi, 0, sizeof(VAR_8->soi));
 FUNC_0(&VAR_8->rfds);
 FUNC_2(VAR_8->recvctrl_fd < VAR_0);

 return VAR_8;
}
