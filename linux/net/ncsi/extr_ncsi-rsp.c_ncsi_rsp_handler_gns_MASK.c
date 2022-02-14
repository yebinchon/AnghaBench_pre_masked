
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_gns_pkt {int tx_aen_pkts; int tx_pkts; int rx_pkts; int cmd_csum_errs; int cmd_type_errs; int dropped_cmds; int rx_cmds; TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_stats {void* ncsi_tx_aen_pkts; void* ncsi_tx_pkts; void* ncsi_rx_pkts; void* ncsi_cmd_csum_errs; void* ncsi_cmd_type_errs; void* ncsi_dropped_cmds; void* ncsi_rx_cmds; } ;
struct ncsi_channel {struct ncsi_channel_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_gns_pkt *VAR_2;
 struct ncsi_dev_priv *VAR_3 = VAR_1->ndp;
 struct ncsi_channel *VAR_4;
 struct ncsi_channel_stats *VAR_5;


 VAR_2 = (struct ncsi_rsp_gns_pkt *)FUNC_2(VAR_1->rsp);
 FUNC_0(VAR_3, VAR_2->rsp.common.channel,
          ((void*)0), &VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = &VAR_4->stats;
 VAR_5->ncsi_rx_cmds = FUNC_1(VAR_2->rx_cmds);
 VAR_5->ncsi_dropped_cmds = FUNC_1(VAR_2->dropped_cmds);
 VAR_5->ncsi_cmd_type_errs = FUNC_1(VAR_2->cmd_type_errs);
 VAR_5->ncsi_cmd_csum_errs = FUNC_1(VAR_2->cmd_csum_errs);
 VAR_5->ncsi_rx_pkts = FUNC_1(VAR_2->rx_pkts);
 VAR_5->ncsi_tx_pkts = FUNC_1(VAR_2->tx_pkts);
 VAR_5->ncsi_tx_aen_pkts = FUNC_1(VAR_2->tx_aen_pkts);

 return 0;
}
