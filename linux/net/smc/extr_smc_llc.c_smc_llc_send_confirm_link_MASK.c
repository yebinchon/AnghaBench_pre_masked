
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {int length; int flags; TYPE_1__ common; } ;
struct smc_llc_msg_confirm_link {int max_links; int link_uid; int link_num; int sender_qp_num; int sender_gid; int sender_mac; TYPE_2__ hd; } ;
struct smc_link_group {int id; } ;
struct smc_link {int ibport; int link_id; TYPE_4__* roce_qp; int gid; TYPE_3__* smcibdev; } ;
typedef enum smc_llc_reqresp { ____Placeholder_smc_llc_reqresp } smc_llc_reqresp ;
struct TYPE_8__ {int qp_num; } ;
struct TYPE_7__ {int * mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct smc_llc_msg_confirm_link*,int ,int) ;
 struct smc_link_group* FUNC_3 (struct smc_link*) ;
 int FUNC_4 (struct smc_link*,struct smc_wr_buf**,struct smc_wr_tx_pend_priv**) ;
 int FUNC_5 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

int FUNC_6(struct smc_link *VAR_8,
         enum smc_llc_reqresp VAR_9)
{
 struct smc_link_group *VAR_10 = FUNC_3(VAR_8);
 struct smc_llc_msg_confirm_link *VAR_11;
 struct smc_wr_tx_pend_priv *VAR_12;
 struct smc_wr_buf *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_8, &VAR_13, &VAR_12);
 if (VAR_14)
  return VAR_14;
 VAR_11 = (struct smc_llc_msg_confirm_link *)VAR_13;
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->hd.common.type = VAR_4;
 VAR_11->hd.length = sizeof(struct smc_llc_msg_confirm_link);
 VAR_11->hd.flags |= VAR_5;
 if (VAR_9 == VAR_7)
  VAR_11->hd.flags |= VAR_6;
 FUNC_1(VAR_11->sender_mac, VAR_8->smcibdev->mac[VAR_8->ibport - 1],
        VAR_0);
 FUNC_1(VAR_11->sender_gid, VAR_8->gid, VAR_1);
 FUNC_0(VAR_11->sender_qp_num, VAR_8->roce_qp->qp_num);
 VAR_11->link_num = VAR_8->link_id;
 FUNC_1(VAR_11->link_uid, VAR_10->id, VAR_2);
 VAR_11->max_links = VAR_3;

 VAR_14 = FUNC_5(VAR_8, VAR_12);
 return VAR_14;
}
