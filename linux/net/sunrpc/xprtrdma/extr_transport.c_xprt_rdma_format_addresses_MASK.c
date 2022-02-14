
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct rpc_xprt {char** address_strings; } ;
typedef int buf ;




 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (struct sockaddr*,char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (struct rpc_xprt*,struct sockaddr*) ;
 int FUNC_6 (struct rpc_xprt*,struct sockaddr*) ;

void
FUNC_7(struct rpc_xprt *VAR_5, struct sockaddr *VAR_6)
{
 char VAR_7[128];

 switch (VAR_6->sa_family) {
 case 129:
  FUNC_5(VAR_5, VAR_6);
  break;
 case 128:
  FUNC_6(VAR_5, VAR_6);
  break;
 default:
  FUNC_1("rpcrdma: Unrecognized address family\n");
  return;
 }

 (void)FUNC_3(VAR_6, VAR_7, sizeof(VAR_7));
 VAR_5->address_strings[VAR_1] = FUNC_0(VAR_7, VAR_0);

 FUNC_4(VAR_7, sizeof(VAR_7), "%u", FUNC_2(VAR_6));
 VAR_5->address_strings[VAR_3] = FUNC_0(VAR_7, VAR_0);

 FUNC_4(VAR_7, sizeof(VAR_7), "%4hx", FUNC_2(VAR_6));
 VAR_5->address_strings[VAR_2] = FUNC_0(VAR_7, VAR_0);

 VAR_5->address_strings[VAR_4] = "rdma";
}
