
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;
struct rds_conn_path {struct rds_connection* cp_conn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rds_connection*) ;
 int FUNC_1 (struct rds_ib_connection*) ;
 int FUNC_2 (struct rds_connection*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct rds_connection*) ;
 int VAR_1 ;

int FUNC_5(struct rds_conn_path *VAR_2)
{
 struct rds_connection *VAR_3 = VAR_2->cp_conn;
 struct rds_ib_connection *VAR_4 = VAR_3->c_transport_data;

 FUNC_4("conn %p\n", VAR_3);
 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_3, 0, VAR_0);
  FUNC_3(VAR_1);
 }

 return 0;
}
