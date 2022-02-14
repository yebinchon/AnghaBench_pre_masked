
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {struct rds_connection* conn; int i_send_wc; int i_send_cq; int i_cq_quiesce; } ;
struct rds_connection {int * c_path; int c_map_queued; int c_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rds_ib_connection*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3)
{
 struct rds_ib_connection *VAR_4 = (struct rds_ib_connection *)VAR_3;
 struct rds_connection *VAR_5 = VAR_4->conn;

 FUNC_4(VAR_2);


 if (FUNC_0(&VAR_4->i_cq_quiesce))
  return;

 FUNC_2(VAR_4, VAR_4->i_send_cq, VAR_4->i_send_wc);
 FUNC_1(VAR_4->i_send_cq, VAR_0);
 FUNC_2(VAR_4, VAR_4->i_send_cq, VAR_4->i_send_wc);

 if (FUNC_3(VAR_5) &&
     (!FUNC_6(VAR_1, &VAR_5->c_flags) ||
     FUNC_6(0, &VAR_5->c_map_queued)))
  FUNC_5(&VAR_4->conn->c_path[0]);
}
