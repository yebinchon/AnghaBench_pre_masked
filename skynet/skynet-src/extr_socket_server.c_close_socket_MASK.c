
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {struct socket* slot; } ;
struct socket_message {int id; int opaque; int * data; scalar_t__ ud; } ;
struct socket_lock {int dummy; } ;
struct socket {scalar_t__ type; int id; } ;
struct request_close {int id; int opaque; scalar_t__ shutdown; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket_server*,struct socket*,struct socket_lock*,struct socket_message*) ;
 int FUNC_4 (struct socket*,struct socket_lock*) ;

__attribute__((used)) static int
FUNC_5(struct socket_server *VAR_4, struct request_close *VAR_5, struct socket_message *VAR_6) {
 int VAR_7 = VAR_5->id;
 struct socket * VAR_8 = &VAR_4->slot[FUNC_0(VAR_7)];
 if (VAR_8->type == VAR_2 || VAR_8->id != VAR_7) {
  VAR_6->id = VAR_7;
  VAR_6->opaque = VAR_5->opaque;
  VAR_6->ud = 0;
  VAR_6->data = ((void*)0);
  return VAR_0;
 }
 struct socket_lock VAR_9;
 FUNC_4(VAR_8, &VAR_9);
 if (!FUNC_2(VAR_8)) {
  int VAR_10 = FUNC_3(VAR_4,VAR_8,&VAR_9,VAR_6);

  if (VAR_10 != -1 && VAR_10 != VAR_3)
   return VAR_10;
 }
 if (VAR_5->shutdown || FUNC_2(VAR_8)) {
  FUNC_1(VAR_4,VAR_8,&VAR_9,VAR_6);
  VAR_6->id = VAR_7;
  VAR_6->opaque = VAR_5->opaque;
  return VAR_0;
 }
 VAR_8->type = VAR_1;

 return -1;
}
