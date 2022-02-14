
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_req {int rl_rdmabuf; int rl_sendbuf; int rl_recvbuf; int rl_free_mrs; int rl_all; } ;


 int FUNC_0 (struct rpcrdma_req*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct rpcrdma_req *VAR_0)
{
 FUNC_1(&VAR_0->rl_all);

 while (!FUNC_2(&VAR_0->rl_free_mrs))
  FUNC_3(FUNC_4(&VAR_0->rl_free_mrs));

 FUNC_5(VAR_0->rl_recvbuf);
 FUNC_5(VAR_0->rl_sendbuf);
 FUNC_5(VAR_0->rl_rdmabuf);
 FUNC_0(VAR_0);
}
