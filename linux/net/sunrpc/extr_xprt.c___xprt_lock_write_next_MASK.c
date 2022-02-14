
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int sending; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int ,struct rpc_xprt*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt *VAR_4)
{
 if (FUNC_1(VAR_0, &VAR_4->state))
  return;
 if (FUNC_2(VAR_1, &VAR_4->state))
  goto out_unlock;
 if (FUNC_0(VAR_3, &VAR_4->sending,
    VAR_2, VAR_4))
  return;
out_unlock:
 FUNC_3(VAR_4);
}
