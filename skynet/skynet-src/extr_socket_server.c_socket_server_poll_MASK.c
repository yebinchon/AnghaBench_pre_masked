
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int checkctrl; scalar_t__ event_index; scalar_t__ event_n; struct event* ev; int event_fd; } ;
struct socket_message {char* data; } ;
struct socket_lock {int dummy; } ;
struct socket {int type; int fd; int protocol; } ;
struct event {int read; int eof; int error; int write; struct socket* s; } ;
typedef int socklen_t ;
typedef int error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct socket_server*,struct socket_message*,int) ;
 int FUNC_1 (struct socket_server*,struct socket_message*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_3 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_4 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ,int*,int*) ;
 scalar_t__ FUNC_7 (struct socket_server*) ;
 int FUNC_8 (struct socket_server*,struct socket*,struct socket_message*) ;
 int FUNC_9 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_10 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_11 (struct socket*,struct socket_lock*) ;
 scalar_t__ FUNC_12 (int ,struct event*,int ) ;
 int VAR_10 ;
 char* FUNC_13 (int) ;

int
FUNC_14(struct socket_server *VAR_11, struct socket_message * VAR_12, int * VAR_13) {
 for (;;) {
  if (VAR_11->checkctrl) {
   if (FUNC_7(VAR_11)) {
    int VAR_14 = FUNC_1(VAR_11, VAR_12);
    if (VAR_14 != -1) {
     FUNC_0(VAR_11, VAR_12, VAR_14);
     return VAR_14;
    } else
     continue;
   } else {
    VAR_11->checkctrl = 0;
   }
  }
  if (VAR_11->event_index == VAR_11->event_n) {
   VAR_11->event_n = FUNC_12(VAR_11->event_fd, VAR_11->ev, VAR_1);
   VAR_11->checkctrl = 1;
   if (VAR_13) {
    *VAR_13 = 0;
   }
   VAR_11->event_index = 0;
   if (VAR_11->event_n <= 0) {
    VAR_11->event_n = 0;
    if (VAR_9 == VAR_0) {
     continue;
    }
    return -1;
   }
  }
  struct event *VAR_15 = &VAR_11->ev[VAR_11->event_index++];
  struct socket *VAR_16 = VAR_15->s;
  if (VAR_16 == ((void*)0)) {

   continue;
  }
  struct socket_lock VAR_17;
  FUNC_11(VAR_16, &VAR_17);
  switch (VAR_16->type) {
  case 130:
   return FUNC_9(VAR_11, VAR_16, &VAR_17, VAR_12);
  case 128: {
   int VAR_18 = FUNC_8(VAR_11, VAR_16, VAR_12);
   if (VAR_18 > 0) {
    return VAR_3;
   } if (VAR_18 < 0 ) {
    return VAR_5;
   }

   break;
  }
  case 129:
   FUNC_5(VAR_10, "socket-server: invalid socket\n");
   break;
  default:
   if (VAR_15->read) {
    int VAR_19;
    if (VAR_16->protocol == VAR_2) {
     VAR_19 = FUNC_3(VAR_11, VAR_16, &VAR_17, VAR_12);
    } else {
     VAR_19 = FUNC_4(VAR_11, VAR_16, &VAR_17, VAR_12);
     if (VAR_19 == VAR_6) {

      --VAR_11->event_index;
      return VAR_6;
     }
    }
    if (VAR_15->write && VAR_19 != VAR_4 && VAR_19 != VAR_5) {

     VAR_15->read = 0;
     --VAR_11->event_index;
    }
    if (VAR_19 == -1)
     break;
    return VAR_19;
   }
   if (VAR_15->write) {
    int VAR_20 = FUNC_10(VAR_11, VAR_16, &VAR_17, VAR_12);
    if (VAR_20 == -1)
     break;
    return VAR_20;
   }
   if (VAR_15->error) {

    int VAR_21;
    socklen_t VAR_22 = sizeof(VAR_21);
    int VAR_23 = FUNC_6(VAR_16->fd, VAR_7, VAR_8, &VAR_21, &VAR_22);
    const char * VAR_24 = ((void*)0);
    if (VAR_23 < 0) {
     VAR_24 = FUNC_13(VAR_9);
    } else if (VAR_21 != 0) {
     VAR_24 = FUNC_13(VAR_21);
    } else {
     VAR_24 = "Unknown error";
    }
    FUNC_2(VAR_11, VAR_16, &VAR_17, VAR_12);
    VAR_12->data = (char *)VAR_24;
    return VAR_5;
   }
   if(VAR_15->eof) {
    FUNC_2(VAR_11, VAR_16, &VAR_17, VAR_12);
    return VAR_4;
   }
   break;
  }
 }
}
