
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rds_ib_connection {int i_ack_lock; int i_ack_flags; int i_ack_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct rds_ib_connection *VAR_1, u64 VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->i_ack_lock, VAR_4);
 VAR_1->i_ack_next = VAR_2;
 if (VAR_3)
  FUNC_0(VAR_0, &VAR_1->i_ack_flags);
 FUNC_2(&VAR_1->i_ack_lock, VAR_4);
}
