
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {TYPE_1__* slot; } ;
struct socket_message {int id; char* data; scalar_t__ ud; int opaque; } ;
struct socket {int type; } ;
struct request_listen {int id; int fd; int opaque; } ;
struct TYPE_2__ {int type; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct socket* FUNC_2 (struct socket_server*,int,int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct socket_server *VAR_4, struct request_listen * VAR_5, struct socket_message *VAR_6) {
 int VAR_7 = VAR_5->id;
 int VAR_8 = VAR_5->fd;
 struct socket *VAR_9 = FUNC_2(VAR_4, VAR_7, VAR_8, VAR_0, VAR_5->opaque, 0);
 if (VAR_9 == ((void*)0)) {
  goto _failed;
 }
 VAR_9->type = VAR_3;
 return -1;
_failed:
 FUNC_1(VAR_8);
 VAR_6->opaque = VAR_5->opaque;
 VAR_6->id = VAR_7;
 VAR_6->ud = 0;
 VAR_6->data = "reach skynet socket number limit";
 VAR_4->slot[FUNC_0(VAR_7)].type = VAR_2;

 return VAR_1;
}
