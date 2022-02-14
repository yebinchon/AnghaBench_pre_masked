
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_conn_path {int cp_waitq; int cp_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rds_conn_path *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->cp_flags);
 FUNC_1();






 if (FUNC_2(&VAR_1->cp_waitq))
  FUNC_3(&VAR_1->cp_waitq);
}
