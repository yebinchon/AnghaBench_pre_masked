
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int i_recv_tasklet; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct rds_connection*,struct ib_cq*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_cq *VAR_1, void *VAR_2)
{
 struct rds_connection *VAR_3 = VAR_2;
 struct rds_ib_connection *VAR_4 = VAR_3->c_transport_data;

 FUNC_1("conn %p cq %p\n", VAR_3, VAR_1);

 FUNC_0(VAR_0);

 FUNC_2(&VAR_4->i_recv_tasklet);
}
