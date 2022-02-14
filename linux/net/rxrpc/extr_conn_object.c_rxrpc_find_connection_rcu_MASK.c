
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {int sin6_addr; int sin6_port; } ;
struct TYPE_27__ {int s_addr; } ;
struct TYPE_28__ {TYPE_8__ sin_addr; int sin_port; } ;
struct TYPE_19__ {int family; TYPE_13__ sin6; TYPE_9__ sin; } ;
struct sockaddr_rxrpc {TYPE_14__ transport; } ;
struct sk_buff {int dummy; } ;
struct TYPE_22__ {int cid; scalar_t__ epoch; } ;
struct rxrpc_skb_priv {TYPE_3__ hdr; } ;
struct TYPE_15__ {int sin6_addr; int sin6_port; } ;
struct TYPE_25__ {int s_addr; } ;
struct TYPE_26__ {TYPE_6__ sin_addr; int sin_port; } ;
struct TYPE_16__ {TYPE_10__ sin6; TYPE_7__ sin; } ;
struct TYPE_17__ {TYPE_11__ transport; } ;
struct rxrpc_peer {TYPE_12__ srx; } ;
struct TYPE_20__ {int family; } ;
struct TYPE_21__ {TYPE_1__ transport; } ;
struct rxrpc_local {TYPE_2__ srx; } ;
struct TYPE_24__ {struct rxrpc_peer* peer; struct rxrpc_local* local; } ;
struct TYPE_23__ {scalar_t__ epoch; } ;
struct rxrpc_connection {TYPE_5__ params; TYPE_4__ proto; int usage; } ;
struct rxrpc_conn_proto {scalar_t__ epoch; int cid; } ;
struct in6_addr {int dummy; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 struct rxrpc_connection* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (char*,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct sockaddr_rxrpc*,struct sk_buff*) ;
 struct rxrpc_connection* FUNC_9 (struct rxrpc_peer*,struct sk_buff*) ;
 struct rxrpc_peer* FUNC_10 (struct rxrpc_local*,struct sockaddr_rxrpc*) ;
 struct rxrpc_skb_priv* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct rxrpc_skb_priv*) ;

struct rxrpc_connection *FUNC_13(struct rxrpc_local *VAR_3,
         struct sk_buff *VAR_4,
         struct rxrpc_peer **VAR_5)
{
 struct rxrpc_connection *VAR_6;
 struct rxrpc_conn_proto VAR_7;
 struct rxrpc_skb_priv *VAR_8 = FUNC_11(VAR_4);
 struct sockaddr_rxrpc VAR_9;
 struct rxrpc_peer *VAR_10;

 FUNC_2(",%x", VAR_8->hdr.cid & VAR_0);

 if (FUNC_8(&VAR_9, VAR_4) < 0)
  goto not_found;

 if (VAR_9.transport.family != VAR_3->srx.transport.family &&
     (VAR_9.transport.family == 129 &&
      VAR_3->srx.transport.family != 128)) {
  FUNC_7("AF_RXRPC: Protocol mismatch %u not %u\n",
        VAR_9.transport.family,
        VAR_3->srx.transport.family);
  goto not_found;
 }

 VAR_7.epoch = VAR_8->hdr.epoch;
 VAR_7.cid = VAR_8->hdr.cid & VAR_0;

 if (FUNC_12(VAR_8)) {




  VAR_10 = FUNC_10(VAR_3, &VAR_9);
  if (!VAR_10)
   goto not_found;
  *VAR_5 = VAR_10;
  VAR_6 = FUNC_9(VAR_10, VAR_4);
  if (!VAR_6 || FUNC_4(&VAR_6->usage) == 0)
   goto not_found;
  FUNC_3(" = %p", VAR_6);
  return VAR_6;
 } else {



  VAR_6 = FUNC_5(&VAR_2,
    VAR_8->hdr.cid >> VAR_1);
  if (!VAR_6 || FUNC_4(&VAR_6->usage) == 0) {
   FUNC_1("no conn");
   goto not_found;
  }

  if (VAR_6->proto.epoch != VAR_7.epoch ||
      VAR_6->params.local != VAR_3)
   goto not_found;

  VAR_10 = VAR_6->params.peer;
  switch (VAR_9.transport.family) {
  case 129:
   if (VAR_10->srx.transport.sin.sin_port !=
       VAR_9.transport.sin.sin_port ||
       VAR_10->srx.transport.sin.sin_addr.s_addr !=
       VAR_9.transport.sin.sin_addr.s_addr)
    goto not_found;
   break;
  default:
   FUNC_0();
  }

  FUNC_3(" = %p", VAR_6);
  return VAR_6;
 }

not_found:
 FUNC_3(" = NULL");
 return ((void*)0);
}
