
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_conn_path {int cp_conn_w; int cp_flags; int cp_conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct rds_conn_path*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct rds_conn_path *VAR_3)
{
 FUNC_1();
 if (FUNC_4(VAR_3->cp_conn)) {
  FUNC_2();
  return;
 }
 if (FUNC_3(VAR_3) == VAR_0 &&
     !FUNC_5(VAR_1, &VAR_3->cp_flags))
  FUNC_0(VAR_2, &VAR_3->cp_conn_w, 0);
 FUNC_2();
}
