
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
typedef int u_long ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addrlen; int * ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int * ai_canonname; scalar_t__ ai_flags; } ;
typedef int service ;
typedef int host ;
struct TYPE_5__ {int Endpoint; int NetworkAddr; } ;
struct TYPE_4__ {int sock; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int *,scalar_t__) ;
 int FUNC_7 (struct addrinfo*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_10 (int *,scalar_t__,char*,int,char*,int,int) ;
 int FUNC_11 (int,int ,int*) ;
 int VAR_11 ;
 int FUNC_12 (int,int ,int ,char*,int) ;
 int FUNC_13 (scalar_t__,int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_14(RpcConnection* VAR_12)
{
  RpcConnection_tcp *VAR_13 = (RpcConnection_tcp *) VAR_12;
  int VAR_14;
  int VAR_15;
  struct addrinfo *VAR_16;
  struct addrinfo *VAR_17;
  struct addrinfo VAR_18;

  FUNC_1("(%s, %s)\n", VAR_12->NetworkAddr, VAR_12->Endpoint);

  if (VAR_13->sock != -1)
    return VAR_7;

  VAR_18.ai_flags = 0;
  VAR_18.ai_family = VAR_6;
  VAR_18.ai_socktype = VAR_9;
  VAR_18.ai_protocol = VAR_3;
  VAR_18.ai_addrlen = 0;
  VAR_18.ai_addr = ((void*)0);
  VAR_18.ai_canonname = ((void*)0);
  VAR_18.ai_next = ((void*)0);

  VAR_15 = FUNC_9(VAR_12->NetworkAddr, VAR_12->Endpoint, &VAR_18, &VAR_16);
  if (VAR_15)
  {
    FUNC_0("getaddrinfo for %s:%s failed: %s\n", VAR_12->NetworkAddr,
      VAR_12->Endpoint, FUNC_8(VAR_15));
    return VAR_8;
  }

  for (VAR_17 = VAR_16; VAR_17; VAR_17 = VAR_17->ai_next)
  {
    int VAR_19;
    u_long VAR_20;

    if (VAR_17->ai_family != VAR_0 && VAR_17->ai_family != VAR_1)
    {
      FUNC_1("skipping non-IP/IPv6 address family\n");
      continue;
    }

    if (FUNC_2(VAR_11))
    {
      char VAR_21[256];
      char VAR_22[256];
      FUNC_10(VAR_17->ai_addr, VAR_17->ai_addrlen,
        VAR_21, sizeof(VAR_21), VAR_22, sizeof(VAR_22),
        VAR_4 | VAR_5);
      FUNC_1("trying %s:%s\n", VAR_21, VAR_22);
    }

    VAR_14 = FUNC_13(VAR_17->ai_family, VAR_17->ai_socktype, VAR_17->ai_protocol);
    if (VAR_14 == -1)
    {
      FUNC_3("socket() failed: %u\n", FUNC_4());
      continue;
    }

    if (0>FUNC_6(VAR_14, VAR_17->ai_addr, VAR_17->ai_addrlen))
    {
      FUNC_3("connect() failed: %u\n", FUNC_4());
      FUNC_5(VAR_14);
      continue;
    }


    VAR_19 = 1;
    FUNC_12(VAR_14, VAR_3, VAR_10, (char *)&VAR_19, sizeof(VAR_19));
    VAR_20 = 1;
    FUNC_11(VAR_14, VAR_2, &VAR_20);

    VAR_13->sock = VAR_14;

    FUNC_7(VAR_16);
    FUNC_1("connected\n");
    return VAR_7;
  }

  FUNC_7(VAR_16);
  FUNC_0("couldn't connect to %s:%s\n", VAR_12->NetworkAddr, VAR_12->Endpoint);
  return VAR_8;
}
