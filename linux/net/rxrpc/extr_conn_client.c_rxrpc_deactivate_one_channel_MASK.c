
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int active_chans; struct rxrpc_channel* channels; } ;
struct rxrpc_channel {int call; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct rxrpc_connection *VAR_0,
      unsigned int VAR_1)
{
 struct rxrpc_channel *VAR_2 = &VAR_0->channels[VAR_1];

 FUNC_0(VAR_2->call, ((void*)0));
 VAR_0->active_chans &= ~(1 << VAR_1);
}
