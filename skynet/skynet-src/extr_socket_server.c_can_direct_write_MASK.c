
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int id; scalar_t__ type; scalar_t__ udpconnecting; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;

__attribute__((used)) static inline int
FUNC_1(struct socket *VAR_1, int VAR_2) {
 return VAR_1->id == VAR_2 && FUNC_0(VAR_1) && VAR_1->type == VAR_0 && VAR_1->udpconnecting == 0;
}
