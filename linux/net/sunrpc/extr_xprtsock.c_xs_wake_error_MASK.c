
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int recv_mutex; int xprt; int xprt_err; int sock_state; int * sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct sock_xprt *VAR_1)
{
 int VAR_2;

 if (!FUNC_3(VAR_0, &VAR_1->sock_state))
  return;
 FUNC_0(&VAR_1->recv_mutex);
 if (VAR_1->sock == ((void*)0))
  goto out;
 if (!FUNC_2(VAR_0, &VAR_1->sock_state))
  goto out;
 VAR_2 = FUNC_4(&VAR_1->xprt_err, 0);
 if (VAR_2 < 0)
  FUNC_5(&VAR_1->xprt, VAR_2);
out:
 FUNC_1(&VAR_1->recv_mutex);
}
