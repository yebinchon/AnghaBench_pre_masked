
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int debug_id; struct rxrpc_channel* channels; } ;
struct rxrpc_channel {int call; int call_counter; int call_id; int last_call; void* last_type; int last_abort; int last_seq; } ;
struct rxrpc_call {size_t cid; int completion; int abort_code; int rx_hard_ack; } ;




 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*) ;
 struct rxrpc_call* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rxrpc_call*) ;

void FUNC_6(struct rxrpc_connection *VAR_4,
        struct rxrpc_call *VAR_5)
{
 struct rxrpc_channel *VAR_6 =
  &VAR_4->channels[VAR_5->cid & VAR_0];

 FUNC_0("%d,%x", VAR_4->debug_id, VAR_5->cid);

 if (FUNC_2(VAR_6->call) == VAR_5) {



  FUNC_5(VAR_5);
  switch (VAR_5->completion) {
  case 128:
   VAR_6->last_seq = VAR_5->rx_hard_ack;
   VAR_6->last_type = VAR_2;
   break;
  case 129:
   VAR_6->last_abort = VAR_5->abort_code;
   VAR_6->last_type = VAR_1;
   break;
  default:
   VAR_6->last_abort = VAR_3;
   VAR_6->last_type = VAR_1;
   break;
  }


  FUNC_4();
  VAR_6->last_call = VAR_6->call_id;
  VAR_6->call_id = VAR_6->call_counter;

  FUNC_3(VAR_6->call, ((void*)0));
 }

 FUNC_1("");
}
