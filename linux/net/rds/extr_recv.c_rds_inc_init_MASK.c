
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_tstamp; scalar_t__ rdma_cookie; } ;
struct in6_addr {int dummy; } ;
struct rds_incoming {int i_rx_lat_trace; TYPE_1__ i_usercopy; struct in6_addr i_saddr; struct rds_connection* i_conn; int i_item; int i_refcount; } ;
struct rds_connection {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct rds_incoming *VAR_0, struct rds_connection *VAR_1,
   struct in6_addr *VAR_2)
{
 FUNC_3(&VAR_0->i_refcount, 1);
 FUNC_0(&VAR_0->i_item);
 VAR_0->i_conn = VAR_1;
 VAR_0->i_saddr = *VAR_2;
 VAR_0->i_usercopy.rdma_cookie = 0;
 VAR_0->i_usercopy.rx_tstamp = FUNC_1(0, 0);

 FUNC_2(VAR_0->i_rx_lat_trace, 0, sizeof(VAR_0->i_rx_lat_trace));
}
