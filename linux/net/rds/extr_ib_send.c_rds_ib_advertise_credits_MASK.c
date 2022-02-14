
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int i_ack_flags; int i_credits; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct rds_connection *VAR_1, unsigned int VAR_2)
{
 struct rds_ib_connection *VAR_3 = VAR_1->c_transport_data;

 if (VAR_2 == 0)
  return;

 FUNC_2(FUNC_1(VAR_2), &VAR_3->i_credits);
 if (FUNC_0(FUNC_3(&VAR_3->i_credits)) >= 16)
  FUNC_4(VAR_0, &VAR_3->i_ack_flags);
}
