
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xprt_create {int ident; char* servername; int flags; TYPE_1__* bc_xprt; int addrlen; TYPE_2__* dstaddr; int srcaddr; int net; } ;
struct sockaddr_un {char* sun_path; } ;
struct sockaddr_in6 {char sin6_addr; } ;
struct TYPE_6__ {char s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct rpc_xprt {int resvport; } ;
struct rpc_create_args {int protocol; char* servername; int flags; int nconnect; TYPE_2__* address; TYPE_1__* bc_xprt; int addrsize; int saddress; int net; } ;
struct rpc_clnt {int resvport; } ;
typedef int servername ;
struct TYPE_5__ {int sa_family; } ;
struct TYPE_4__ {struct rpc_xprt* xpt_bc_xprt; } ;





 int VAR_0 ;
 struct rpc_xprt* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rpc_xprt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct rpc_xprt*,struct xprt_create*,int *,int *) ;
 struct rpc_xprt* FUNC_4 (struct rpc_create_args*,struct rpc_xprt*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 struct rpc_xprt* FUNC_6 (struct xprt_create*) ;
 int FUNC_7 (struct rpc_xprt*) ;

struct rpc_clnt *FUNC_8(struct rpc_create_args *VAR_7)
{
 struct rpc_xprt *VAR_8;
 struct xprt_create VAR_9 = {
  .net = VAR_7->net,
  .ident = VAR_7->protocol,
  .srcaddr = VAR_7->saddress,
  .dstaddr = VAR_7->address,
  .addrlen = VAR_7->addrsize,
  .servername = VAR_7->servername,
  .bc_xprt = VAR_7->bc_xprt,
 };
 char VAR_10[48];
 struct rpc_clnt *VAR_11;
 int VAR_12;

 if (VAR_7->bc_xprt) {
  FUNC_2(!(VAR_7->protocol & VAR_6));
  VAR_8 = VAR_7->bc_xprt->xpt_bc_xprt;
  if (VAR_8) {
   FUNC_7(VAR_8);
   return FUNC_4(VAR_7, VAR_8);
  }
 }

 if (VAR_7->flags & VAR_1)
  VAR_9.flags |= VAR_4;
 if (VAR_7->flags & VAR_3)
  VAR_9.flags |= VAR_5;




 if (VAR_9.servername == ((void*)0)) {
  struct sockaddr_un *VAR_13 =
    (struct sockaddr_un *)VAR_7->address;
  struct sockaddr_in *VAR_14 =
    (struct sockaddr_in *)VAR_7->address;
  struct sockaddr_in6 *VAR_15 =
    (struct sockaddr_in6 *)VAR_7->address;

  VAR_10[0] = '\0';
  switch (VAR_7->address->sa_family) {
  case 128:
   FUNC_5(VAR_10, sizeof(VAR_10), "%s",
     VAR_13->sun_path);
   break;
  case 130:
   FUNC_5(VAR_10, sizeof(VAR_10), "%pI4",
     &VAR_14->sin_addr.s_addr);
   break;
  case 129:
   FUNC_5(VAR_10, sizeof(VAR_10), "%pI6",
     &VAR_15->sin6_addr);
   break;
  default:


   return FUNC_0(-VAR_0);
  }
  VAR_9.servername = VAR_10;
 }

 VAR_8 = FUNC_6(&VAR_9);
 if (FUNC_1(VAR_8))
  return (struct rpc_clnt *)VAR_8;







 VAR_8->resvport = 1;
 if (VAR_7->flags & VAR_2)
  VAR_8->resvport = 0;

 VAR_11 = FUNC_4(VAR_7, VAR_8);
 if (FUNC_1(VAR_11) || VAR_7->nconnect <= 1)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_7->nconnect - 1; VAR_12++) {
  if (FUNC_3(VAR_11, &VAR_9, ((void*)0), ((void*)0)) < 0)
   break;
 }
 return VAR_11;
}
