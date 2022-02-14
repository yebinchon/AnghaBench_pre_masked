
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int i_credits; } ;
struct rds_connection {int c_send_w; int c_flags; struct rds_ib_connection* c_transport_data; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (char*,unsigned int,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct rds_connection *VAR_3, unsigned int VAR_4)
{
 struct rds_ib_connection *VAR_5 = VAR_3->c_transport_data;

 if (VAR_4 == 0)
  return;

 FUNC_7("credits=%u current=%u%s\n",
   VAR_4,
   FUNC_0(FUNC_4(&VAR_5->i_credits)),
   FUNC_9(VAR_0, &VAR_3->c_flags) ? ", ll_send_full" : "");

 FUNC_3(FUNC_1(VAR_4), &VAR_5->i_credits);
 if (FUNC_8(VAR_0, &VAR_3->c_flags))
  FUNC_5(VAR_1, &VAR_3->c_send_w, 0);

 FUNC_2(FUNC_0(VAR_4) >= 16384);

 FUNC_6(VAR_2);
}
