
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct socket_server {struct socket* slot; } ;
struct socket {scalar_t__ type; int id; int fd; } ;
struct request_setopt {int id; int value; int what; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct socket_server *VAR_2, struct request_setopt *VAR_3) {
 int VAR_4 = VAR_3->id;
 struct socket *VAR_5 = &VAR_2->slot[FUNC_0(VAR_4)];
 if (VAR_5->type == VAR_1 || VAR_5->id !=VAR_4) {
  return;
 }
 int VAR_6 = VAR_3->value;
 FUNC_1(VAR_5->fd, VAR_0, VAR_3->what, &VAR_6, sizeof(VAR_6));
}
