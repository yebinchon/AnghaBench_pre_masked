
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int event_fd; struct socket* slot; } ;
struct socket_message {int id; char* data; scalar_t__ ud; int opaque; } ;
struct socket_lock {int dummy; } ;
struct socket {scalar_t__ type; int id; int opaque; int fd; } ;
struct request_start {int id; int opaque; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_2 (struct socket*,struct socket_lock*) ;
 scalar_t__ FUNC_3 (int ,int ,struct socket*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct socket_server *VAR_8, struct request_start *VAR_9, struct socket_message *VAR_10) {
 int VAR_11 = VAR_9->id;
 VAR_10->id = VAR_11;
 VAR_10->opaque = VAR_9->opaque;
 VAR_10->ud = 0;
 VAR_10->data = ((void*)0);
 struct socket *VAR_12 = &VAR_8->slot[FUNC_0(VAR_11)];
 if (VAR_12->type == VAR_3 || VAR_12->id !=VAR_11) {
  VAR_10->data = "invalid socket";
  return VAR_0;
 }
 struct socket_lock VAR_13;
 FUNC_2(VAR_12, &VAR_13);
 if (VAR_12->type == VAR_5 || VAR_12->type == VAR_6) {
  if (FUNC_3(VAR_8->event_fd, VAR_12->fd, VAR_12)) {
   FUNC_1(VAR_8, VAR_12, &VAR_13, VAR_10);
   VAR_10->data = FUNC_4(VAR_7);
   return VAR_0;
  }
  VAR_12->type = (VAR_12->type == VAR_5) ? VAR_2 : VAR_4;
  VAR_12->opaque = VAR_9->opaque;
  VAR_10->data = "start";
  return VAR_1;
 } else if (VAR_12->type == VAR_2) {

  VAR_12->opaque = VAR_9->opaque;
  VAR_10->data = "transfer";
  return VAR_1;
 }

 return -1;
}
