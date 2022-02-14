
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_gnpts_pkt {int rx_os_err; int rx_us_err; int rx_channel_err; int rx_dropped; int rx_pkts; int tx_us_err; int tx_channel_err; int tx_dropped; int tx_pkts; TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_stats {void* pt_rx_os_err; void* pt_rx_us_err; void* pt_rx_channel_err; void* pt_rx_dropped; void* pt_rx_pkts; void* pt_tx_us_err; void* pt_tx_channel_err; void* pt_tx_dropped; void* pt_tx_pkts; } ;
struct ncsi_channel {struct ncsi_channel_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_gnpts_pkt *VAR_2;
 struct ncsi_dev_priv *VAR_3 = VAR_1->ndp;
 struct ncsi_channel *VAR_4;
 struct ncsi_channel_stats *VAR_5;


 VAR_2 = (struct ncsi_rsp_gnpts_pkt *)FUNC_2(VAR_1->rsp);
 FUNC_0(VAR_3, VAR_2->rsp.common.channel,
          ((void*)0), &VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = &VAR_4->stats;
 VAR_5->pt_tx_pkts = FUNC_1(VAR_2->tx_pkts);
 VAR_5->pt_tx_dropped = FUNC_1(VAR_2->tx_dropped);
 VAR_5->pt_tx_channel_err = FUNC_1(VAR_2->tx_channel_err);
 VAR_5->pt_tx_us_err = FUNC_1(VAR_2->tx_us_err);
 VAR_5->pt_rx_pkts = FUNC_1(VAR_2->rx_pkts);
 VAR_5->pt_rx_dropped = FUNC_1(VAR_2->rx_dropped);
 VAR_5->pt_rx_channel_err = FUNC_1(VAR_2->rx_channel_err);
 VAR_5->pt_rx_us_err = FUNC_1(VAR_2->rx_us_err);
 VAR_5->pt_rx_os_err = FUNC_1(VAR_2->rx_os_err);

 return 0;
}
