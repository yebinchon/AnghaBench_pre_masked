
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rpc_xprt*) ;

bool FUNC_4(struct rpc_xprt *VAR_1)
{
 bool VAR_2;

 if (!FUNC_2(VAR_0, &VAR_1->state))
  return 0;
 FUNC_0(&VAR_1->transport_lock);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_1(&VAR_1->transport_lock);
 return VAR_2;
}
