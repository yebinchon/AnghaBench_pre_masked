
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int event_fd; } ;
struct socket_sendbuffer {scalar_t__ sz; int type; int id; int * buffer; } ;
struct socket_message {int opaque; int * data; scalar_t__ ud; int id; } ;
struct socket_lock {int dummy; } ;
struct socket {scalar_t__ type; scalar_t__ dw_size; int * dw_buffer; int id; int fd; int low; int high; int opaque; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct socket_server*,struct socket_sendbuffer*) ;
 int FUNC_3 (struct socket_server*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct socket_lock*) ;
 int FUNC_6 (struct socket_lock*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct socket_server *VAR_8, struct socket *VAR_9, struct socket_lock *VAR_10, struct socket_message *VAR_11) {
 VAR_11->id = VAR_9->id;
 VAR_11->ud = 0;
 VAR_11->data = ((void*)0);
 VAR_11->opaque = VAR_9->opaque;
 if (VAR_9->type == VAR_3) {
  return;
 }
 FUNC_0(VAR_9->type != VAR_6);
 FUNC_3(VAR_8,&VAR_9->high);
 FUNC_3(VAR_8,&VAR_9->low);
 if (VAR_9->type != VAR_4 && VAR_9->type != VAR_5) {
  FUNC_7(VAR_8->event_fd, VAR_9->fd);
 }
 FUNC_5(VAR_10);
 if (VAR_9->type != VAR_2) {
  if (FUNC_1(VAR_9->fd) < 0) {
   FUNC_4("close socket:");
  }
 }
 VAR_9->type = VAR_3;
 if (VAR_9->dw_buffer) {
  struct socket_sendbuffer VAR_12;
  VAR_12.buffer = VAR_9->dw_buffer;
  VAR_12.sz = VAR_9->dw_size;
  VAR_12.id = VAR_9->id;
  VAR_12.type = (VAR_12.sz == VAR_7) ? VAR_1 : VAR_0;
  FUNC_2(VAR_8, &VAR_12);
  VAR_9->dw_buffer = ((void*)0);
 }
 FUNC_6(VAR_10);
}
