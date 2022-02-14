
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int state; int backlog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_1)
{
 if (FUNC_1(&VAR_1->backlog) == ((void*)0))
  FUNC_0(VAR_0, &VAR_1->state);
}
