
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {scalar_t__ active_chans; int channel_lock; int debug_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rxrpc_connection*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rxrpc_connection*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct rxrpc_connection *VAR_2)
{
 FUNC_0("%d", VAR_2->debug_id);

 FUNC_5(VAR_2, -1, VAR_1);

 if (VAR_2->active_chans == VAR_0)
  return;

 FUNC_3(&VAR_2->channel_lock);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->channel_lock);
 FUNC_1("");
}
