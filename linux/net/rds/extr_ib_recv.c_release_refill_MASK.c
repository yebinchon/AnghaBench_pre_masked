
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_waitq; int c_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rds_connection *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->c_flags);






 if (FUNC_1(&VAR_1->c_waitq))
  FUNC_2(&VAR_1->c_waitq);
}
