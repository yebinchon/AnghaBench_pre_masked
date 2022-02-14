
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {struct socket* slot; } ;
struct socket {int id; scalar_t__ protocol; int sending; } ;


 int FUNC_0 (int*) ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct socket_server *VAR_1, int VAR_2) {
 struct socket * VAR_3 = &VAR_1->slot[FUNC_1(VAR_2)];

 if (VAR_3->id == VAR_2 && VAR_3->protocol == VAR_0) {
  FUNC_2((VAR_3->sending & 0xffff) != 0);
  FUNC_0(&VAR_3->sending);
 }
}
