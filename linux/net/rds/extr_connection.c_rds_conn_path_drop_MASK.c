
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_conn_path {int cp_down_w; int cp_conn; int cp_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

void FUNC_5(struct rds_conn_path *VAR_2, bool VAR_3)
{
 FUNC_0(&VAR_2->cp_state, VAR_0);

 FUNC_2();
 if (!VAR_3 && FUNC_4(VAR_2->cp_conn)) {
  FUNC_3();
  return;
 }
 FUNC_1(VAR_1, &VAR_2->cp_down_w);
 FUNC_3();
}
