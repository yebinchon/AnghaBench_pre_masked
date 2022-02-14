
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_pkt {TYPE_2__ rsp; } ;
struct ncsi_request {int cmd; int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_cmd_sma_pkt {int at_e; int index; int mac; } ;
struct ncsi_channel_mac_filter {int n_uc; int n_mc; int n_mixed; int * addrs; int bitmap; } ;
struct ncsi_channel {int lock; struct ncsi_channel_mac_filter mac_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 int FUNC_4 (int,void*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ncsi_request *VAR_3)
{
 struct ncsi_cmd_sma_pkt *VAR_4;
 struct ncsi_rsp_pkt *VAR_5;
 struct ncsi_dev_priv *VAR_6 = VAR_3->ndp;
 struct ncsi_channel *VAR_7;
 struct ncsi_channel_mac_filter *VAR_8;
 unsigned long VAR_9;
 void *VAR_10;
 bool VAR_11;
 int VAR_12;



 VAR_5 = (struct ncsi_rsp_pkt *)FUNC_5(VAR_3->rsp);
 FUNC_3(VAR_6, VAR_5->rsp.common.channel,
          ((void*)0), &VAR_7);
 if (!VAR_7)
  return -VAR_0;




 VAR_4 = (struct ncsi_cmd_sma_pkt *)FUNC_5(VAR_3->cmd);
 VAR_11 = VAR_4->at_e & 0x1;
 VAR_8 = &VAR_7->mac_filter;
 VAR_10 = &VAR_8->bitmap;

 if (VAR_4->index == 0 ||
     VAR_4->index > VAR_8->n_uc + VAR_8->n_mc + VAR_8->n_mixed)
  return -VAR_1;

 VAR_12 = (VAR_4->index - 1) * VAR_2;
 FUNC_6(&VAR_7->lock, VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_4->index - 1, VAR_10);
  FUNC_1(&VAR_8->addrs[VAR_12], VAR_4->mac, VAR_2);
 } else {
  FUNC_0(VAR_4->index - 1, VAR_10);
  FUNC_2(&VAR_8->addrs[VAR_12], 0, VAR_2);
 }
 FUNC_7(&VAR_7->lock, VAR_9);

 return 0;
}
