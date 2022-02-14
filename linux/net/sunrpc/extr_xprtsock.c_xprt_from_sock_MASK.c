
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_user_data; } ;
struct rpc_xprt {int dummy; } ;



__attribute__((used)) static inline struct rpc_xprt *FUNC_0(struct sock *VAR_0)
{
 return (struct rpc_xprt *) VAR_0->sk_user_data;
}
