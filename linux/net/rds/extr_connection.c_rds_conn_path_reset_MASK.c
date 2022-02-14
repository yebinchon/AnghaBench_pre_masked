
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_faddr; int c_laddr; } ;
struct rds_conn_path {scalar_t__ cp_flags; struct rds_connection* cp_conn; } ;


 int FUNC_0 (struct rds_conn_path*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rds_conn_path *VAR_1)
{
 struct rds_connection *VAR_2 = VAR_1->cp_conn;

 FUNC_2("connection %pI6c to %pI6c reset\n",
   &VAR_2->c_laddr, &VAR_2->c_faddr);

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
 VAR_1->cp_flags = 0;





}
