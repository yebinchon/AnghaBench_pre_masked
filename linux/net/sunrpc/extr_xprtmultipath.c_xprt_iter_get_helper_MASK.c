
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_iter {int dummy; } ;
struct rpc_xprt {int dummy; } ;


 struct rpc_xprt* FUNC_0 (struct rpc_xprt*) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_1(struct rpc_xprt_iter *VAR_0,
  struct rpc_xprt *(*VAR_1)(struct rpc_xprt_iter *))
{
 struct rpc_xprt *VAR_2;

 do {
  VAR_2 = VAR_1(VAR_0);
  if (VAR_2 == ((void*)0))
   break;
  VAR_2 = FUNC_0(VAR_2);
 } while (VAR_2 == ((void*)0));
 return VAR_2;
}
