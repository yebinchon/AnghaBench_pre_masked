
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_rxrpc {int srx_service; } ;
struct rxrpc_sock {int dummy; } ;
struct rxrpc_call {int tx_phase; void* cong_tstamp; void* acks_latest_ts; int service_id; int state; } ;
typedef void* ktime_t ;
typedef int gfp_t ;


 int VAR_0 ;
 struct rxrpc_call* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct rxrpc_call*) ;
 void* FUNC_3 () ;
 struct rxrpc_call* FUNC_4 (struct rxrpc_sock*,int ,unsigned int) ;

__attribute__((used)) static struct rxrpc_call *FUNC_5(struct rxrpc_sock *VAR_2,
        struct sockaddr_rxrpc *VAR_3,
        gfp_t VAR_4,
        unsigned int VAR_5)
{
 struct rxrpc_call *VAR_6;
 ktime_t VAR_7;

 FUNC_1("");

 VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_6->state = VAR_1;
 VAR_6->service_id = VAR_3->srx_service;
 VAR_6->tx_phase = 1;
 VAR_7 = FUNC_3();
 VAR_6->acks_latest_ts = VAR_7;
 VAR_6->cong_tstamp = VAR_7;

 FUNC_2(" = %p", VAR_6);
 return VAR_6;
}
