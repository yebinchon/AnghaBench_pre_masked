
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct rpc_xprt {size_t addrlen; int xprt_net; int addr; } ;
struct rpc_clnt {int cl_xprt; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr*,int *,size_t) ;
 int FUNC_2 (struct net*) ;
 struct rpc_xprt* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct sockaddr*,size_t) ;
 int FUNC_7 (struct sockaddr*,int ) ;
 int FUNC_8 (struct net*,struct sockaddr*,size_t,struct sockaddr*) ;

int FUNC_9(struct rpc_clnt *VAR_0, struct sockaddr *VAR_1, size_t VAR_2)
{
 struct sockaddr_storage VAR_3;
 struct sockaddr *VAR_4 = (struct sockaddr *)&VAR_3;
 struct rpc_xprt *VAR_5;
 struct net *VAR_6;
 size_t VAR_7;
 int VAR_8;

 FUNC_4();
 VAR_5 = FUNC_3(VAR_0->cl_xprt);
 VAR_7 = VAR_5->addrlen;
 FUNC_1(VAR_4, &VAR_5->addr, VAR_7);
 VAR_6 = FUNC_0(VAR_5->xprt_net);
 FUNC_5();

 FUNC_7(VAR_4, 0);
 VAR_8 = FUNC_8(VAR_6, VAR_4, VAR_7, VAR_1);
 FUNC_2(VAR_6);
 if (VAR_8 != 0)

  return FUNC_6(VAR_4->sa_family, VAR_1, VAR_2);
 return 0;
}
