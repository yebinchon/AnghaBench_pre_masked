
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int i_signaled_sends; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rds_ib_connection *VAR_1, int VAR_2)
{
 if ((FUNC_2(VAR_2, &VAR_1->i_signaled_sends) == 0) &&
     FUNC_3(&VAR_0))
  FUNC_4(&VAR_0);
 FUNC_0(FUNC_1(&VAR_1->i_signaled_sends) < 0);
}
