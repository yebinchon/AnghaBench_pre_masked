
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_tcp_connection {int t_sock; } ;
struct rds_conn_path {struct rds_tcp_connection* cp_transport_data; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct rds_conn_path *VAR_0)
{
 struct rds_tcp_connection *VAR_1 = VAR_0->cp_transport_data;

 FUNC_0(VAR_1->t_sock, 0);
}
