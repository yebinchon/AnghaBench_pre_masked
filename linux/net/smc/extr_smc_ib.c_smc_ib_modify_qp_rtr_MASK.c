
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smc_link {int roce_qp; int peer_psn; int peer_qpn; int peer_mac; int peer_gid; int sgid_index; int ibport; int peer_mtu; int path_mtu; } ;
struct TYPE_5__ {int dmac; } ;
struct TYPE_6__ {TYPE_1__ roce; int type; } ;
struct ib_qp_attr {int max_dest_rd_atomic; int min_rnr_timer; int rq_psn; int dest_qp_num; TYPE_2__ ah_attr; int path_mtu; int qp_state; } ;
typedef int qp_attr ;
typedef enum ib_qp_attr_mask { ____Placeholder_ib_qp_attr_mask } ib_qp_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ib_qp_attr*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_7(struct smc_link *VAR_10)
{
 enum ib_qp_attr_mask VAR_11 =
  VAR_7 | VAR_1 | VAR_5 | VAR_2 |
  VAR_6 | VAR_3 | VAR_4;
 struct ib_qp_attr VAR_12;

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.qp_state = VAR_0;
 VAR_12.path_mtu = FUNC_3(VAR_10->path_mtu, VAR_10->peer_mtu);
 VAR_12.ah_attr.type = VAR_8;
 FUNC_6(&VAR_12.ah_attr, VAR_10->ibport);
 FUNC_5(&VAR_12.ah_attr, ((void*)0), 0, VAR_10->sgid_index, 1, 0);
 FUNC_4(&VAR_12.ah_attr, VAR_10->peer_gid);
 FUNC_1(&VAR_12.ah_attr.roce.dmac, VAR_10->peer_mac,
        sizeof(VAR_10->peer_mac));
 VAR_12.dest_qp_num = VAR_10->peer_qpn;
 VAR_12.rq_psn = VAR_10->peer_psn;
 VAR_12.max_dest_rd_atomic = 1;


 VAR_12.min_rnr_timer = VAR_9;

 return FUNC_0(VAR_10->roce_qp, &VAR_12, VAR_11);
}
