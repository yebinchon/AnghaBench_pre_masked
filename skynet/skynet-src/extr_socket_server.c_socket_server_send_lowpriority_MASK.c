
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {struct socket* slot; } ;
struct socket_sendbuffer {int id; } ;
struct socket {int id; scalar_t__ type; } ;
struct TYPE_3__ {int id; int sz; int buffer; } ;
struct TYPE_4__ {TYPE_1__ send; } ;
struct request_package {TYPE_2__ u; } ;


 size_t FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct socket_sendbuffer*,int *) ;
 int FUNC_2 (struct socket_server*,struct socket_sendbuffer*) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket_server*,struct request_package*,char,int) ;

int
FUNC_5(struct socket_server *VAR_1, struct socket_sendbuffer *VAR_2) {
 int VAR_3 = VAR_2->id;

 struct socket * VAR_4 = &VAR_1->slot[FUNC_0(VAR_3)];
 if (VAR_4->id != VAR_3 || VAR_4->type == VAR_0) {
  FUNC_2(VAR_1, VAR_2);
  return -1;
 }

 FUNC_3(VAR_4, VAR_3);

 struct request_package VAR_5;
 VAR_5.u.send.id = VAR_3;
 VAR_5.u.send.buffer = FUNC_1(VAR_2, &VAR_5.u.send.sz);

 FUNC_4(VAR_1, &VAR_5, 'P', sizeof(VAR_5.u.send));
 return 0;
}
