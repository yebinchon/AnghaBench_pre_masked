
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int dummy; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock_xprt*) ;

__attribute__((used)) static void
FUNC_1(struct sock_xprt *VAR_1,
  struct msghdr *VAR_2)
{
 if (FUNC_0(VAR_1))
  VAR_2->msg_flags |= VAR_0;
}
