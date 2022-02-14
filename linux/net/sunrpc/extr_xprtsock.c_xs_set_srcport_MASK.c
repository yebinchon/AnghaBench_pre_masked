
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_xprt {scalar_t__ srcport; } ;


 scalar_t__ FUNC_0 (struct socket*) ;

__attribute__((used)) static void FUNC_1(struct sock_xprt *VAR_0, struct socket *VAR_1)
{
 if (VAR_0->srcport == 0)
  VAR_0->srcport = FUNC_0(VAR_1);
}
