
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {int addr; } ;
struct rpc_task {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_cb_add_xprt_calldata {int xps; int xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rpc_cb_add_xprt_calldata* FUNC_2 (int,int ) ;
 struct rpc_task* FUNC_3 (struct rpc_clnt*,struct rpc_xprt*,int *,int,int *,struct rpc_cb_add_xprt_calldata*) ;
 int VAR_6 ;
 int FUNC_4 (struct rpc_cb_add_xprt_calldata*) ;
 int FUNC_5 (struct rpc_task*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*) ;
 int FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_xprt_switch*) ;

int FUNC_9(struct rpc_clnt *VAR_7,
  struct rpc_xprt_switch *VAR_8, struct rpc_xprt *VAR_9,
  void *VAR_10)
{
 struct rpc_cb_add_xprt_calldata *VAR_11;
 struct rpc_task *VAR_12;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->xps = FUNC_8(VAR_8);
 VAR_11->xprt = FUNC_7(VAR_9);
 if (FUNC_6(VAR_11->xps, (struct sockaddr *)&VAR_9->addr)) {
  FUNC_4(VAR_11);
  goto success;
 }

 VAR_12 = FUNC_3(VAR_7, VAR_9, ((void*)0),
   VAR_4|VAR_5|VAR_2|VAR_3,
   &VAR_6, VAR_11);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 FUNC_5(VAR_12);
success:
 return 1;
}
