
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rds_tcp_connection {struct socket* t_sock; } ;
struct rds_conn_path {int cp_index; struct rds_tcp_connection* cp_transport_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_conn_path*,int ) ;
 int FUNC_2 (char*,int ,struct rds_tcp_connection*,struct socket*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct rds_conn_path *VAR_1)
{
 struct rds_tcp_connection *VAR_2 = VAR_1->cp_transport_data;
 struct socket *VAR_3 = VAR_2->t_sock;
 int VAR_4 = 0;

 FUNC_2("recv worker path [%d] tc %p sock %p\n",
   VAR_1->cp_index, VAR_2, VAR_3);

 FUNC_0(VAR_3->sk);
 VAR_4 = FUNC_1(VAR_1, VAR_0);
 FUNC_3(VAR_3->sk);

 return VAR_4;
}
