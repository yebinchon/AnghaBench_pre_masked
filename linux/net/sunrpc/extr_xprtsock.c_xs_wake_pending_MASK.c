
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int xprt; int sock_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct sock_xprt *VAR_2)
{
 if (FUNC_0(VAR_1, &VAR_2->sock_state))
  FUNC_1(&VAR_2->xprt, -VAR_0);
}
