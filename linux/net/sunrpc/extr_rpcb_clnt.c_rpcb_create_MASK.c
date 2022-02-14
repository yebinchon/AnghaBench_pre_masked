
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;
struct rpc_create_args {int protocol; size_t addrsize; char const* servername; char const* nodename; int flags; struct cred const* cred; int authflavor; int version; int * program; struct sockaddr* address; struct net* net; } ;
struct rpc_clnt {int dummy; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;




 int VAR_0 ;
 struct rpc_clnt* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 struct rpc_clnt* FUNC_2 (struct rpc_create_args*) ;
 int VAR_5 ;

__attribute__((used)) static struct rpc_clnt *FUNC_3(struct net *VAR_6, const char *VAR_7,
        const char *VAR_8,
        struct sockaddr *VAR_9, size_t VAR_10,
        int VAR_11, u32 VAR_12,
        const struct cred *VAR_13)
{
 struct rpc_create_args VAR_14 = {
  .net = VAR_6,
  .protocol = VAR_11,
  .address = VAR_9,
  .addrsize = VAR_10,
  .servername = VAR_8,
  .nodename = VAR_7,
  .program = &VAR_5,
  .version = VAR_12,
  .authflavor = VAR_2,
  .cred = VAR_13,
  .flags = (VAR_4 |
     VAR_3),
 };

 switch (VAR_9->sa_family) {
 case 129:
  ((struct sockaddr_in *)VAR_9)->sin_port = FUNC_1(VAR_1);
  break;
 case 128:
  ((struct sockaddr_in6 *)VAR_9)->sin6_port = FUNC_1(VAR_1);
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 return FUNC_2(&VAR_14);
}
