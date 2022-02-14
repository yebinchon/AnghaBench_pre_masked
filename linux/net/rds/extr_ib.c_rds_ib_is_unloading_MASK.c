
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {struct rds_conn_path* c_path; } ;
struct rds_conn_path {int cp_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct rds_connection *VAR_2)
{
 struct rds_conn_path *VAR_3 = &VAR_2->c_path[0];

 return (FUNC_1(VAR_0, &VAR_3->cp_flags) ||
  FUNC_0(&VAR_1) != 0);
}
