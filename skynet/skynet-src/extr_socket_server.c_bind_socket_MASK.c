
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int dummy; } ;
struct socket_message {int id; char* data; scalar_t__ ud; int opaque; } ;
struct socket {int type; } ;
struct request_bind {int id; int fd; int opaque; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct socket* FUNC_0 (struct socket_server*,int,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct socket_server *VAR_4, struct request_bind *VAR_5, struct socket_message *VAR_6) {
 int VAR_7 = VAR_5->id;
 VAR_6->id = VAR_7;
 VAR_6->opaque = VAR_5->opaque;
 VAR_6->ud = 0;
 struct socket *VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_5->fd, VAR_0, VAR_5->opaque, 1);
 if (VAR_8 == ((void*)0)) {
  VAR_6->data = "reach skynet socket number limit";
  return VAR_1;
 }
 FUNC_1(VAR_5->fd);
 VAR_8->type = VAR_3;
 VAR_6->data = "binding";
 return VAR_2;
}
