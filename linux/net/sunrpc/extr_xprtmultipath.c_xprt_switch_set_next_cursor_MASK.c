
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct rpc_xprt* (* xprt_switch_find_xprt_t ) (struct rpc_xprt_switch*,struct rpc_xprt*) ;
struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt* FUNC_0 (struct rpc_xprt**) ;
 int FUNC_1 (struct rpc_xprt**,struct rpc_xprt*) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_2(struct rpc_xprt_switch *VAR_0,
  struct rpc_xprt **VAR_1,
  xprt_switch_find_xprt_t VAR_2)
{
 struct rpc_xprt *VAR_3, *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = VAR_2(VAR_0, VAR_4);
 FUNC_1(VAR_1, VAR_3);
 return VAR_3;
}
