
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int (* discard_new_call ) (struct rxrpc_call*,int ) ;int incoming_lock; struct rxrpc_peer* backlog; int sk; } ;
struct rxrpc_peer {unsigned int peer_backlog_head; unsigned int peer_backlog_tail; unsigned int conn_backlog_head; unsigned int conn_backlog_tail; unsigned int call_backlog_head; unsigned int call_backlog_tail; struct rxrpc_call** call_backlog; int proc_link; int link; struct rxrpc_peer** conn_backlog; struct rxrpc_peer** peer_backlog; } ;
struct rxrpc_net {int nr_conns; int conn_lock; } ;
struct rxrpc_connection {unsigned int peer_backlog_head; unsigned int peer_backlog_tail; unsigned int conn_backlog_head; unsigned int conn_backlog_tail; unsigned int call_backlog_head; unsigned int call_backlog_tail; struct rxrpc_call** call_backlog; int proc_link; int link; struct rxrpc_connection** conn_backlog; struct rxrpc_connection** peer_backlog; } ;
struct rxrpc_call {int user_call_ID; int socket; } ;
struct rxrpc_backlog {unsigned int peer_backlog_head; unsigned int peer_backlog_tail; unsigned int conn_backlog_head; unsigned int conn_backlog_tail; unsigned int call_backlog_head; unsigned int call_backlog_tail; struct rxrpc_call** call_backlog; int proc_link; int link; struct rxrpc_backlog** conn_backlog; struct rxrpc_backlog** peer_backlog; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rxrpc_peer*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct rxrpc_sock*) ;
 int FUNC_6 (struct rxrpc_call*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rxrpc_net* FUNC_7 (int ) ;
 int FUNC_8 (struct rxrpc_call*,int ) ;
 int FUNC_9 (struct rxrpc_sock*,struct rxrpc_call*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rxrpc_call*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(struct rxrpc_sock *VAR_3)
{
 struct rxrpc_backlog *VAR_4 = VAR_3->backlog;
 struct rxrpc_net *VAR_5 = FUNC_7(FUNC_10(&VAR_3->sk));
 unsigned int VAR_6 = VAR_0, VAR_7, VAR_8;

 if (!VAR_4)
  return;
 VAR_3->backlog = ((void*)0);




 FUNC_11(&VAR_3->incoming_lock);
 FUNC_12(&VAR_3->incoming_lock);

 VAR_7 = VAR_4->peer_backlog_head;
 VAR_8 = VAR_4->peer_backlog_tail;
 while (FUNC_0(VAR_7, VAR_8, VAR_6) > 0) {
  struct rxrpc_peer *VAR_9 = VAR_4->peer_backlog[VAR_8];
  FUNC_3(VAR_9);
  VAR_8 = (VAR_8 + 1) & (VAR_6 - 1);
 }

 VAR_7 = VAR_4->conn_backlog_head;
 VAR_8 = VAR_4->conn_backlog_tail;
 while (FUNC_0(VAR_7, VAR_8, VAR_6) > 0) {
  struct rxrpc_connection *VAR_10 = VAR_4->conn_backlog[VAR_8];
  FUNC_15(&VAR_5->conn_lock);
  FUNC_4(&VAR_10->link);
  FUNC_4(&VAR_10->proc_link);
  FUNC_16(&VAR_5->conn_lock);
  FUNC_3(VAR_10);
  if (FUNC_2(&VAR_5->nr_conns))
   FUNC_14(&VAR_5->nr_conns);
  VAR_8 = (VAR_8 + 1) & (VAR_6 - 1);
 }

 VAR_7 = VAR_4->call_backlog_head;
 VAR_8 = VAR_4->call_backlog_tail;
 while (FUNC_0(VAR_7, VAR_8, VAR_6) > 0) {
  struct rxrpc_call *VAR_11 = VAR_4->call_backlog[VAR_8];
  FUNC_5(VAR_11->socket, VAR_3);
  if (VAR_3->discard_new_call) {
   FUNC_1("discard %lx", VAR_11->user_call_ID);
   VAR_3->discard_new_call(VAR_11, VAR_11->user_call_ID);
   FUNC_8(VAR_11, VAR_2);
  }
  FUNC_6(VAR_11);
  FUNC_9(VAR_3, VAR_11);
  FUNC_8(VAR_11, VAR_1);
  VAR_8 = (VAR_8 + 1) & (VAR_6 - 1);
 }

 FUNC_3(VAR_4);
}
