
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; int sock; int mgr; int iface; int recv_mbuf_limit; int user_data; int proto_handler; struct mg_connection* listener; int handler; } ;
struct mg_add_sock_opts {int dummy; } ;
typedef int opts ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mg_add_sock_opts*,int ,int) ;
 int FUNC_2 (int ,struct mg_connection*) ;
 struct mg_connection* FUNC_3 (int ,int ,struct mg_add_sock_opts) ;

struct mg_connection *FUNC_4(struct mg_connection *VAR_2) {
  struct mg_add_sock_opts VAR_3;
  struct mg_connection *VAR_4;
  FUNC_1(&VAR_3, 0, sizeof(VAR_3));
  VAR_4 = FUNC_3(VAR_2->mgr, VAR_2->handler, VAR_3);
  if (VAR_4 == ((void*)0)) return ((void*)0);
  VAR_4->listener = VAR_2;
  VAR_4->proto_handler = VAR_2->proto_handler;
  VAR_4->user_data = VAR_2->user_data;
  VAR_4->recv_mbuf_limit = VAR_2->recv_mbuf_limit;
  VAR_4->iface = VAR_2->iface;
  if (VAR_2->flags & VAR_1) VAR_4->flags |= VAR_1;
  FUNC_2(VAR_4->mgr, VAR_4);
  FUNC_0(VAR_0, ("%p %p %d %d", VAR_2, VAR_4, VAR_4->sock, (int) VAR_4->flags));
  return VAR_4;
}
