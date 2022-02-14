
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_gcps_pkt {int rx_jabber_pkts; int rx_runt_pkts; int rx_valid_bytes; int tx_9022_frames; int tx_1522_frames; int tx_1023_frames; int tx_511_frames; int tx_255_frames; int tx_127_frames; int tx_64_frames; int rx_9022_frames; int rx_1522_frames; int rx_1023_frames; int rx_511_frames; int rx_255_frames; int rx_127_frames; int rx_64_frames; int rx_ctl_frames; int e_collision; int l_collision; int tx_m_collision; int tx_s_collision; int tx_pause_xoff; int tx_pause_xon; int rx_pause_xoff; int rx_pause_xon; int jabber_pkts; int runt_pkts; int false_carrier; int align_err; int fcs_err; int tx_bc_pkts; int tx_mc_pkts; int tx_uc_pkts; int rx_bc_pkts; int rx_mc_pkts; int rx_uc_pkts; int tx_bytes; int rx_bytes; int cnt_lo; int cnt_hi; TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_stats {void* hnc_rx_jabber_pkts; void* hnc_rx_runt_pkts; void* hnc_rx_valid_bytes; void* hnc_tx_9022_frames; void* hnc_tx_1522_frames; void* hnc_tx_1023_frames; void* hnc_tx_511_frames; void* hnc_tx_255_frames; void* hnc_tx_127_frames; void* hnc_tx_64_frames; void* hnc_rx_9022_frames; void* hnc_rx_1522_frames; void* hnc_rx_1023_frames; void* hnc_rx_511_frames; void* hnc_rx_255_frames; void* hnc_rx_127_frames; void* hnc_rx_64_frames; void* hnc_rx_ctl_frames; void* hnc_e_collision; void* hnc_l_collision; void* hnc_tx_m_collision; void* hnc_tx_s_collision; void* hnc_tx_pause_xoff; void* hnc_tx_pause_xon; void* hnc_rx_pause_xoff; void* hnc_rx_pause_xon; void* hnc_jabber_pkts; void* hnc_runt_pkts; void* hnc_false_carrier; void* hnc_align_err; void* hnc_fcs_err; void* hnc_tx_bc_pkts; void* hnc_tx_mc_pkts; void* hnc_tx_uc_pkts; void* hnc_rx_bc_pkts; void* hnc_rx_mc_pkts; void* hnc_rx_uc_pkts; void* hnc_tx_bytes; void* hnc_rx_bytes; void* hnc_cnt_lo; void* hnc_cnt_hi; } ;
struct ncsi_channel {struct ncsi_channel_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_gcps_pkt *VAR_2;
 struct ncsi_dev_priv *VAR_3 = VAR_1->ndp;
 struct ncsi_channel *VAR_4;
 struct ncsi_channel_stats *VAR_5;


 VAR_2 = (struct ncsi_rsp_gcps_pkt *)FUNC_2(VAR_1->rsp);
 FUNC_0(VAR_3, VAR_2->rsp.common.channel,
          ((void*)0), &VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = &VAR_4->stats;
 VAR_5->hnc_cnt_hi = FUNC_1(VAR_2->cnt_hi);
 VAR_5->hnc_cnt_lo = FUNC_1(VAR_2->cnt_lo);
 VAR_5->hnc_rx_bytes = FUNC_1(VAR_2->rx_bytes);
 VAR_5->hnc_tx_bytes = FUNC_1(VAR_2->tx_bytes);
 VAR_5->hnc_rx_uc_pkts = FUNC_1(VAR_2->rx_uc_pkts);
 VAR_5->hnc_rx_mc_pkts = FUNC_1(VAR_2->rx_mc_pkts);
 VAR_5->hnc_rx_bc_pkts = FUNC_1(VAR_2->rx_bc_pkts);
 VAR_5->hnc_tx_uc_pkts = FUNC_1(VAR_2->tx_uc_pkts);
 VAR_5->hnc_tx_mc_pkts = FUNC_1(VAR_2->tx_mc_pkts);
 VAR_5->hnc_tx_bc_pkts = FUNC_1(VAR_2->tx_bc_pkts);
 VAR_5->hnc_fcs_err = FUNC_1(VAR_2->fcs_err);
 VAR_5->hnc_align_err = FUNC_1(VAR_2->align_err);
 VAR_5->hnc_false_carrier = FUNC_1(VAR_2->false_carrier);
 VAR_5->hnc_runt_pkts = FUNC_1(VAR_2->runt_pkts);
 VAR_5->hnc_jabber_pkts = FUNC_1(VAR_2->jabber_pkts);
 VAR_5->hnc_rx_pause_xon = FUNC_1(VAR_2->rx_pause_xon);
 VAR_5->hnc_rx_pause_xoff = FUNC_1(VAR_2->rx_pause_xoff);
 VAR_5->hnc_tx_pause_xon = FUNC_1(VAR_2->tx_pause_xon);
 VAR_5->hnc_tx_pause_xoff = FUNC_1(VAR_2->tx_pause_xoff);
 VAR_5->hnc_tx_s_collision = FUNC_1(VAR_2->tx_s_collision);
 VAR_5->hnc_tx_m_collision = FUNC_1(VAR_2->tx_m_collision);
 VAR_5->hnc_l_collision = FUNC_1(VAR_2->l_collision);
 VAR_5->hnc_e_collision = FUNC_1(VAR_2->e_collision);
 VAR_5->hnc_rx_ctl_frames = FUNC_1(VAR_2->rx_ctl_frames);
 VAR_5->hnc_rx_64_frames = FUNC_1(VAR_2->rx_64_frames);
 VAR_5->hnc_rx_127_frames = FUNC_1(VAR_2->rx_127_frames);
 VAR_5->hnc_rx_255_frames = FUNC_1(VAR_2->rx_255_frames);
 VAR_5->hnc_rx_511_frames = FUNC_1(VAR_2->rx_511_frames);
 VAR_5->hnc_rx_1023_frames = FUNC_1(VAR_2->rx_1023_frames);
 VAR_5->hnc_rx_1522_frames = FUNC_1(VAR_2->rx_1522_frames);
 VAR_5->hnc_rx_9022_frames = FUNC_1(VAR_2->rx_9022_frames);
 VAR_5->hnc_tx_64_frames = FUNC_1(VAR_2->tx_64_frames);
 VAR_5->hnc_tx_127_frames = FUNC_1(VAR_2->tx_127_frames);
 VAR_5->hnc_tx_255_frames = FUNC_1(VAR_2->tx_255_frames);
 VAR_5->hnc_tx_511_frames = FUNC_1(VAR_2->tx_511_frames);
 VAR_5->hnc_tx_1023_frames = FUNC_1(VAR_2->tx_1023_frames);
 VAR_5->hnc_tx_1522_frames = FUNC_1(VAR_2->tx_1522_frames);
 VAR_5->hnc_tx_9022_frames = FUNC_1(VAR_2->tx_9022_frames);
 VAR_5->hnc_rx_valid_bytes = FUNC_1(VAR_2->rx_valid_bytes);
 VAR_5->hnc_rx_runt_pkts = FUNC_1(VAR_2->rx_runt_pkts);
 VAR_5->hnc_rx_jabber_pkts = FUNC_1(VAR_2->rx_jabber_pkts);

 return 0;
}
