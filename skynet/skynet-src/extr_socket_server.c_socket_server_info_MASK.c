
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {struct socket* slot; } ;
struct socket_info {int next; } ;
struct socket {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*,struct socket_info*) ;
 struct socket_info* FUNC_1 (struct socket_info*) ;

struct socket_info *
FUNC_2(struct socket_server *VAR_1) {
 int VAR_2;
 struct socket_info * VAR_3 = ((void*)0);
 for (VAR_2=0;VAR_2<VAR_0;VAR_2++) {
  struct socket * VAR_4 = &VAR_1->slot[VAR_2];
  int VAR_5 = VAR_4->id;
  struct socket_info VAR_6;
  if (FUNC_0(VAR_4, &VAR_6) && VAR_4->id == VAR_5) {

   VAR_3 = FUNC_1(VAR_3);
   VAR_6.next = VAR_3->next;
   *VAR_3 = VAR_6;
  }
 }
 return VAR_3;
}
