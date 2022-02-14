
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_list {int dummy; } ;
struct socket_server {int dummy; } ;
struct socket_message {int dummy; } ;
struct socket_lock {int dummy; } ;
struct socket {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct socket_server*,struct socket*,struct wb_list*,struct socket_lock*,struct socket_message*) ;
 int FUNC_1 (struct socket_server*,struct socket*,struct wb_list*,struct socket_message*) ;

__attribute__((used)) static int
FUNC_2(struct socket_server *VAR_1, struct socket *VAR_2, struct wb_list *VAR_3, struct socket_lock *VAR_4, struct socket_message *VAR_5) {
 if (VAR_2->protocol == VAR_0) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 }
}
