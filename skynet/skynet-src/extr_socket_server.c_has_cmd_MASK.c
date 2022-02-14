
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct socket_server {int rfds; scalar_t__ recvctrl_fd; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_2(struct socket_server *VAR_0) {
 struct timeval VAR_1 = {0,0};
 int VAR_2;

 FUNC_0(VAR_0->recvctrl_fd, &VAR_0->rfds);

 VAR_2 = FUNC_1(VAR_0->recvctrl_fd+1, &VAR_0->rfds, ((void*)0), ((void*)0), &VAR_1);
 if (VAR_2 == 1) {
  return 1;
 }
 return 0;
}
