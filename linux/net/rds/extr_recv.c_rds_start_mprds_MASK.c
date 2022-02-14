
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_npaths; struct rds_conn_path* c_path; int c_faddr; int c_laddr; } ;
struct rds_conn_path {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rds_conn_path*) ;

__attribute__((used)) static void FUNC_2(struct rds_connection *VAR_0)
{
 int VAR_1;
 struct rds_conn_path *VAR_2;

 if (VAR_0->c_npaths > 1 &&
     FUNC_0(&VAR_0->c_laddr, &VAR_0->c_faddr) < 0) {
  for (VAR_1 = 0; VAR_1 < VAR_0->c_npaths; VAR_1++) {
   VAR_2 = &VAR_0->c_path[VAR_1];
   FUNC_1(VAR_2);
  }
 }
}
