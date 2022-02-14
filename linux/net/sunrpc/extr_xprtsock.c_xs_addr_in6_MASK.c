
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct rpc_xprt {int addr; } ;



__attribute__((used)) static inline struct sockaddr_in6 *FUNC_0(struct rpc_xprt *VAR_0)
{
 return (struct sockaddr_in6 *) &VAR_0->addr;
}
