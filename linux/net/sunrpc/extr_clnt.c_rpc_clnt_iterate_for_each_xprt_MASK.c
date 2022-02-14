
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_iter {int dummy; } ;
typedef struct rpc_xprt rpc_xprt ;
struct rpc_clnt {int dummy; } ;


 int FUNC_0 (struct rpc_clnt*,struct rpc_xprt_iter*) ;
 int FUNC_1 (struct rpc_xprt_iter*) ;
 struct rpc_xprt* FUNC_2 (struct rpc_xprt_iter*) ;
 int FUNC_3 (struct rpc_xprt*) ;

int FUNC_4(struct rpc_clnt *VAR_0,
  int (*VAR_1)(struct rpc_clnt *, struct rpc_xprt *, void *),
  void *VAR_2)
{
 struct rpc_xprt_iter VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 for (;;) {
  struct rpc_xprt *VAR_5 = FUNC_2(&VAR_3);

  if (!VAR_5)
   break;
  VAR_4 = VAR_1(VAR_0, VAR_5, VAR_2);
  FUNC_3(VAR_5);
  if (VAR_4 < 0)
   break;
 }
 FUNC_1(&VAR_3);
 return VAR_4;
}
