
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int flags; struct rxrpc_channel* channels; } ;
struct rxrpc_channel {scalar_t__ call_counter; } ;
struct rxrpc_call {unsigned int cid; int flags; struct rxrpc_connection* conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rxrpc_connection*,unsigned int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct rxrpc_call *VAR_4)
{
 unsigned int VAR_5 = VAR_4->cid & VAR_2;
 struct rxrpc_connection *VAR_6 = VAR_4->conn;
 struct rxrpc_channel *VAR_7 = &VAR_6->channels[VAR_5];

 if (!FUNC_2(VAR_1, &VAR_4->flags)) {





  VAR_7->call_counter++;
  if (VAR_7->call_counter >= VAR_0)
   FUNC_1(VAR_3, &VAR_6->flags);
  FUNC_0(VAR_6, VAR_5);
 }
}
