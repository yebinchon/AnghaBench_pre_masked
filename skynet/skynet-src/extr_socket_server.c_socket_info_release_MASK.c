
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {struct socket_info* next; } ;


 int FUNC_0 (struct socket_info*) ;

void
FUNC_1(struct socket_info *VAR_0) {
 while (VAR_0) {
  struct socket_info *VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
