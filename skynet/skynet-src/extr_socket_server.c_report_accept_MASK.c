
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sockaddr_all {int s; } ;
typedef int u ;
struct socket_server {int * buffer; } ;
struct socket_message {int ud; int * data; int id; int opaque; } ;
struct socket {int id; int opaque; int type; int fd; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (union sockaddr_all*,int *,int) ;
 struct socket* FUNC_3 (struct socket_server*,int,int,int ,int ,int) ;
 int FUNC_4 (struct socket_server*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct socket_server*,struct socket*,int) ;
 int * FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct socket_server *VAR_5, struct socket *VAR_6, struct socket_message *VAR_7) {
 union sockaddr_all VAR_8;
 socklen_t VAR_9 = sizeof(VAR_8);
 int VAR_10 = FUNC_0(VAR_6->fd, &VAR_8.s, &VAR_9);
 if (VAR_10 < 0) {
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1) {
   VAR_7->opaque = VAR_6->opaque;
   VAR_7->id = VAR_6->id;
   VAR_7->ud = 0;
   VAR_7->data = FUNC_8(VAR_4);
   return -1;
  } else {
   return 0;
  }
 }
 int VAR_11 = FUNC_4(VAR_5);
 if (VAR_11 < 0) {
  FUNC_1(VAR_10);
  return 0;
 }
 FUNC_5(VAR_10);
 FUNC_6(VAR_10);
 struct socket *VAR_12 = FUNC_3(VAR_5, VAR_11, VAR_10, VAR_2, VAR_6->opaque, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_10);
  return 0;
 }

 FUNC_7(VAR_5,VAR_6,1);

 VAR_12->type = VAR_3;
 VAR_7->opaque = VAR_6->opaque;
 VAR_7->id = VAR_6->id;
 VAR_7->ud = VAR_11;
 VAR_7->data = ((void*)0);

 if (FUNC_2(&VAR_8, VAR_5->buffer, sizeof(VAR_5->buffer))) {
  VAR_7->data = VAR_5->buffer;
 }

 return 1;
}
