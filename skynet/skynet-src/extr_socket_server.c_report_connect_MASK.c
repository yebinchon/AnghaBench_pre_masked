
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_4__ {int sin_addr; } ;
union sockaddr_all {TYPE_3__ s; TYPE_2__ v6; TYPE_1__ v4; } ;
typedef int u ;
struct socket_server {int * buffer; int event_fd; } ;
struct socket_message {int * data; scalar_t__ ud; int id; int opaque; } ;
struct socket_lock {int dummy; } ;
struct socket {int fd; int id; int opaque; int type; } ;
typedef int socklen_t ;
typedef int error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,int*) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;
 scalar_t__ FUNC_3 (scalar_t__,void*,int *,int) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (int ,int ,struct socket*,int) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct socket_server *VAR_7, struct socket *VAR_8, struct socket_lock *VAR_9, struct socket_message *VAR_10) {
 int VAR_11;
 socklen_t VAR_12 = sizeof(VAR_11);
 int VAR_13 = FUNC_2(VAR_8->fd, VAR_4, VAR_5, &VAR_11, &VAR_12);
 if (VAR_13 < 0 || VAR_11) {
  FUNC_0(VAR_7,VAR_8,VAR_9, VAR_10);
  if (VAR_13 >= 0)
   VAR_10->data = FUNC_6(VAR_11);
  else
   VAR_10->data = FUNC_6(VAR_6);
  return VAR_1;
 } else {
  VAR_8->type = VAR_3;
  VAR_10->opaque = VAR_8->opaque;
  VAR_10->id = VAR_8->id;
  VAR_10->ud = 0;
  if (FUNC_4(VAR_8)) {
   FUNC_5(VAR_7->event_fd, VAR_8->fd, VAR_8, 0);
  }
  union sockaddr_all VAR_14;
  socklen_t VAR_15 = sizeof(VAR_14);
  if (FUNC_1(VAR_8->fd, &VAR_14.s, &VAR_15) == 0) {
   void * VAR_16 = (VAR_14.s.sa_family == VAR_0) ? (void*)&VAR_14.v4.sin_addr : (void *)&VAR_14.v6.sin6_addr;
   if (FUNC_3(VAR_14.s.sa_family, VAR_16, VAR_7->buffer, sizeof(VAR_7->buffer))) {
    VAR_10->data = VAR_7->buffer;
    return VAR_2;
   }
  }
  VAR_10->data = ((void*)0);
  return VAR_2;
 }
}
