
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_ping_triggered; struct rds_conn_path* c_path; } ;
struct rds_conn_path {int cp_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_conn_path*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct rds_connection *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct rds_conn_path *VAR_4 = &VAR_1->c_path[VAR_2];

 FUNC_2(&VAR_4->cp_lock, VAR_3);
 if (VAR_1->c_ping_triggered) {
  FUNC_3(&VAR_4->cp_lock, VAR_3);
  return;
 }
 VAR_1->c_ping_triggered = 1;
 FUNC_3(&VAR_4->cp_lock, VAR_3);
 FUNC_1(VAR_4, FUNC_0(VAR_0), 0, 0);
}
