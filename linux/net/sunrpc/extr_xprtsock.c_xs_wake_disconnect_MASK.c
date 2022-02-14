
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int xprt; int sock_state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sock_xprt *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->sock_state))
  FUNC_1(&VAR_1->xprt);
}
