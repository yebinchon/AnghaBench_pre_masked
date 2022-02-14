
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_rxrpc {int srx_service; } ;
struct rxrpc_sock {int min_sec_level; int local; struct key* key; int sk; } ;
struct rxrpc_conn_parameters {unsigned long user_call_ID; int intr; int exclusive; int upgrade; int peer; int service_id; int security_level; struct key* key; int local; int tx_total_len; } ;
struct rxrpc_call_params {unsigned long user_call_ID; int intr; int exclusive; int upgrade; int peer; int service_id; int security_level; struct key* key; int local; int tx_total_len; } ;
struct rxrpc_call {int user_mutex; int notify_rx; } ;
struct TYPE_2__ {int * data; } ;
struct key {TYPE_1__ payload; } ;
typedef int s64 ;
typedef int rxrpc_notify_rx_t ;
typedef int p ;
typedef int gfp_t ;
typedef int cp ;


 struct rxrpc_call* FUNC_0 (int) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (char*,int ,unsigned long) ;
 int FUNC_3 (char*,struct rxrpc_call*) ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rxrpc_conn_parameters*,int ,int) ;
 int FUNC_7 (int *) ;
 struct rxrpc_call* FUNC_8 (struct rxrpc_sock*,struct rxrpc_conn_parameters*,struct sockaddr_rxrpc*,struct rxrpc_conn_parameters*,int ,unsigned int) ;
 int FUNC_9 (int ) ;
 struct rxrpc_sock* FUNC_10 (int ) ;
 int FUNC_11 (struct rxrpc_sock*,struct sockaddr_rxrpc*,int) ;

struct rxrpc_call *FUNC_12(struct socket *VAR_0,
        struct sockaddr_rxrpc *VAR_1,
        struct key *VAR_2,
        unsigned long VAR_3,
        s64 VAR_4,
        gfp_t VAR_5,
        rxrpc_notify_rx_t VAR_6,
        bool VAR_7,
        bool VAR_8,
        unsigned int VAR_9)
{
 struct rxrpc_conn_parameters VAR_10;
 struct rxrpc_call_params VAR_11;
 struct rxrpc_call *VAR_12;
 struct rxrpc_sock *VAR_13 = FUNC_10(VAR_0->sk);
 int VAR_14;

 FUNC_2(",,%x,%lx", FUNC_4(VAR_2), VAR_3);

 VAR_14 = FUNC_11(VAR_13, VAR_1, sizeof(*VAR_1));
 if (VAR_14 < 0)
  return FUNC_0(VAR_14);

 FUNC_5(&VAR_13->sk);

 if (!VAR_2)
  VAR_2 = VAR_13->key;
 if (VAR_2 && !VAR_2->payload.data[0])
  VAR_2 = ((void*)0);

 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.user_call_ID = VAR_3;
 VAR_11.tx_total_len = VAR_4;
 VAR_11.intr = VAR_8;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.local = VAR_13->local;
 VAR_10.key = VAR_2;
 VAR_10.security_level = VAR_13->min_sec_level;
 VAR_10.exclusive = 0;
 VAR_10.upgrade = VAR_7;
 VAR_10.service_id = VAR_1->srx_service;
 VAR_12 = FUNC_8(VAR_13, &VAR_10, VAR_1, &VAR_11, VAR_5, VAR_9);

 if (!FUNC_1(VAR_12)) {
  VAR_12->notify_rx = VAR_6;
  FUNC_7(&VAR_12->user_mutex);
 }

 FUNC_9(VAR_10.peer);
 FUNC_3(" = %p", VAR_12);
 return VAR_12;
}
