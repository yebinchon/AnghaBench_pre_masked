
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_tstamp; scalar_t__ rdma_cookie; } ;
struct in6_addr {int dummy; } ;
struct rds_incoming {TYPE_1__ i_usercopy; struct in6_addr i_saddr; struct rds_conn_path* i_conn_path; int i_conn; int i_item; int i_refcount; } ;
struct rds_conn_path {int cp_conn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct rds_incoming *VAR_0, struct rds_conn_path *VAR_1,
         struct in6_addr *VAR_2)
{
 FUNC_2(&VAR_0->i_refcount, 1);
 FUNC_0(&VAR_0->i_item);
 VAR_0->i_conn = VAR_1->cp_conn;
 VAR_0->i_conn_path = VAR_1;
 VAR_0->i_saddr = *VAR_2;
 VAR_0->i_usercopy.rdma_cookie = 0;
 VAR_0->i_usercopy.rx_tstamp = FUNC_1(0, 0);
}
