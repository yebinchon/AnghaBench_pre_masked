
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct list_head {int dummy; } ;


 struct rpc_xprt* FUNC_0 (struct list_head*) ;
 struct rpc_xprt* FUNC_1 (struct list_head*,struct rpc_xprt const*) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_2(struct list_head *VAR_0,
  const struct rpc_xprt *VAR_1)
{
 struct rpc_xprt *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
  return VAR_2;
 return FUNC_0(VAR_0);
}
