
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_net {int active_client_conns; int nr_active_client_conns; } ;
struct rxrpc_connection {int cache_link; int cache_state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rxrpc_connection*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_net *VAR_5,
    struct rxrpc_connection *VAR_6)
{
 if (FUNC_1(VAR_2, &VAR_6->flags)) {
  FUNC_2(VAR_6, -1, VAR_4);
  VAR_6->cache_state = VAR_1;
 } else {
  FUNC_2(VAR_6, -1, VAR_3);
  VAR_6->cache_state = VAR_0;
 }
 VAR_5->nr_active_client_conns++;
 FUNC_0(&VAR_6->cache_link, &VAR_5->active_client_conns);
}
