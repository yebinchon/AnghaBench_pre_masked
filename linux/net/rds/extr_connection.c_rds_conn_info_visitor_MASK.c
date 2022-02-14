
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_info_connection {scalar_t__ flags; int transport; int tos; int faddr; int laddr; int next_rx_seq; int next_tx_seq; } ;
struct TYPE_5__ {int * s6_addr32; } ;
struct TYPE_4__ {int * s6_addr32; } ;
struct rds_connection {TYPE_3__* c_trans; int c_tos; TYPE_2__ c_faddr; TYPE_1__ c_laddr; scalar_t__ c_isv6; } ;
struct rds_conn_path {int cp_state; int cp_flags; int cp_next_rx_seq; int cp_next_tx_seq; struct rds_connection* cp_conn; } ;
struct TYPE_6__ {int t_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct rds_conn_path *VAR_6, void *VAR_7)
{
 struct rds_info_connection *VAR_8 = VAR_7;
 struct rds_connection *VAR_9 = VAR_6->cp_conn;

 if (VAR_9->c_isv6)
  return 0;

 VAR_8->next_tx_seq = VAR_6->cp_next_tx_seq;
 VAR_8->next_rx_seq = VAR_6->cp_next_rx_seq;
 VAR_8->laddr = VAR_9->c_laddr.s6_addr32[3];
 VAR_8->faddr = VAR_9->c_faddr.s6_addr32[3];
 VAR_8->tos = VAR_9->c_tos;
 FUNC_2(VAR_8->transport, VAR_9->c_trans->t_name,
  sizeof(VAR_8->transport));
 VAR_8->flags = 0;

 FUNC_1(VAR_8->flags, FUNC_3(VAR_4, &VAR_6->cp_flags),
     VAR_5);

 FUNC_1(VAR_8->flags,
     FUNC_0(&VAR_6->cp_state) == VAR_2,
     VAR_1);
 FUNC_1(VAR_8->flags,
     FUNC_0(&VAR_6->cp_state) == VAR_3,
     VAR_0);
 return 1;
}
