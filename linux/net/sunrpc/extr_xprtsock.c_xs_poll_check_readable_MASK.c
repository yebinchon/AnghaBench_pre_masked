
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int recv_worker; int sock_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct sock_xprt*) ;

__attribute__((used)) static void FUNC_4(struct sock_xprt *VAR_2)
{

 FUNC_0(VAR_0, &VAR_2->sock_state);
 if (!FUNC_3(VAR_2))
  return;
 if (!FUNC_2(VAR_0, &VAR_2->sock_state))
  FUNC_1(VAR_1, &VAR_2->recv_worker);
}
