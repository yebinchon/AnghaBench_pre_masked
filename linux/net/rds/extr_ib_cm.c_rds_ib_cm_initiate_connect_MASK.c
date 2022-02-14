
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rds_ib_conn_priv {int dummy; } rds_ib_conn_priv ;
struct rds_ib_connection {int i_active_side; struct rdma_cm_id* i_cm_id; int i_flowctl; } ;
struct rds_connection {int c_proposed_version; struct rds_ib_connection* c_transport_data; } ;
struct rdma_conn_param {int dummy; } ;
struct rdma_cm_id {struct rds_connection* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdma_cm_id*,struct rdma_conn_param*) ;
 int FUNC_1 (struct rds_connection*,struct rdma_conn_param*,union rds_ib_conn_priv*,int ,int ,int ,int) ;
 int FUNC_2 (struct rds_connection*,char*,int) ;
 int FUNC_3 (struct rds_connection*,int ) ;
 int FUNC_4 (struct rds_connection*) ;
 int VAR_2 ;

int FUNC_5(struct rdma_cm_id *VAR_3, bool VAR_4)
{
 struct rds_connection *VAR_5 = VAR_3->context;
 struct rds_ib_connection *VAR_6 = VAR_5->c_transport_data;
 struct rdma_conn_param VAR_7;
 union rds_ib_conn_priv VAR_8;
 int VAR_9;



 FUNC_3(VAR_5, VAR_0);
 VAR_6->i_flowctl = VAR_2;

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_5, "rds_ib_setup_qp failed (%d)\n", VAR_9);
  goto out;
 }

 FUNC_1(VAR_5, &VAR_7, &VAR_8,
      VAR_5->c_proposed_version,
      VAR_1, VAR_1, VAR_4);
 VAR_9 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_9)
  FUNC_2(VAR_5, "rdma_connect failed (%d)\n", VAR_9);

out:



 if (VAR_9) {
  if (VAR_6->i_cm_id == VAR_3)
   VAR_9 = 0;
 }
 VAR_6->i_active_side = 1;
 return VAR_9;
}
