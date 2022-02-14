
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tipc_sock_conn {int list; void* peer_port; void* port; void* peer_node; } ;
struct tipc_node {int conn_sks; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,void*) ;
 struct tipc_sock_conn* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,void*) ;
 struct tipc_node* FUNC_4 (struct net*,void*) ;
 int FUNC_5 (struct tipc_node*) ;
 int FUNC_6 (struct tipc_node*) ;
 int FUNC_7 (struct tipc_node*) ;

int FUNC_8(struct net *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct tipc_node *VAR_6;
 struct tipc_sock_conn *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_2, VAR_3))
  return 0;

 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_3("Connecting sock to node 0x%x failed\n", VAR_3);
  return -VAR_0;
 }
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto exit;
 }
 VAR_7->peer_node = VAR_3;
 VAR_7->port = VAR_4;
 VAR_7->peer_port = VAR_5;

 FUNC_6(VAR_6);
 FUNC_2(&VAR_7->list, &VAR_6->conn_sks);
 FUNC_7(VAR_6);
exit:
 FUNC_5(VAR_6);
 return VAR_8;
}
