
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int event_fd; } ;
struct socket_message {int * data; scalar_t__ ud; int id; int opaque; } ;
struct socket_lock {int dummy; } ;
struct TYPE_3__ {int * head; } ;
struct socket {scalar_t__ wb_size; scalar_t__ type; scalar_t__ warn_size; int id; int opaque; int fd; TYPE_1__ low; TYPE_1__ high; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 scalar_t__ FUNC_5 (struct socket_server*,struct socket*,TYPE_1__*,struct socket_lock*,struct socket_message*) ;
 int FUNC_6 (int ,int ,struct socket*,int) ;

__attribute__((used)) static int
FUNC_7(struct socket_server *VAR_3, struct socket *VAR_4, struct socket_lock *VAR_5, struct socket_message *VAR_6) {
 FUNC_0(!FUNC_2(&VAR_4->low));

 if (FUNC_5(VAR_3,VAR_4,&VAR_4->high,VAR_5,VAR_6) == VAR_0) {
  return VAR_0;
 }
 if (VAR_4->high.head == ((void*)0)) {

  if (VAR_4->low.head != ((void*)0)) {
   if (FUNC_5(VAR_3,VAR_4,&VAR_4->low,VAR_5,VAR_6) == VAR_0) {
    return VAR_0;
   }

   if (FUNC_2(&VAR_4->low)) {
    FUNC_3(VAR_4);
    return -1;
   }
   if (VAR_4->low.head)
    return -1;
  }

  FUNC_0(FUNC_4(VAR_4) && VAR_4->wb_size == 0);
  FUNC_6(VAR_3->event_fd, VAR_4->fd, VAR_4, 0);

  if (VAR_4->type == VAR_1) {
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
    return VAR_0;
  }
  if(VAR_4->warn_size > 0){
    VAR_4->warn_size = 0;
    VAR_6->opaque = VAR_4->opaque;
    VAR_6->id = VAR_4->id;
    VAR_6->ud = 0;
    VAR_6->data = ((void*)0);
    return VAR_2;
  }
 }

 return -1;
}
