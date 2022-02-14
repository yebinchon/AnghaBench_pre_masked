
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t w_nr; } ;
struct rds_ib_connection {int * i_recvs; TYPE_1__ i_recv_ring; } ;


 int FUNC_0 (struct rds_ib_connection*,int *) ;

void FUNC_1(struct rds_ib_connection *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->i_recv_ring.w_nr; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->i_recvs[VAR_1]);
}
