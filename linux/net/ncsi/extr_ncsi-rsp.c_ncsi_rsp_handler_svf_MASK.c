
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
struct ncsi_cmd_svf_pkt {int index; int enable; int vlan; } ;
struct ncsi_channel_vlan_filter {int n_vids; scalar_t__* vids; int bitmap; } ;
struct ncsi_channel {int lock; struct ncsi_channel_vlan_filter vlan_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int,void*) ;

__attribute__((used)) static int FUNC_7(struct ncsi_request *VAR_2)
{
 struct ncsi_cmd_svf_pkt *VAR_3;
 struct ncsi_rsp_pkt *VAR_4;
 struct ncsi_dev_priv *VAR_5 = VAR_2->ndp;
 struct ncsi_channel *VAR_6;
 struct ncsi_channel_vlan_filter *VAR_7;
 unsigned long VAR_8;
 void *VAR_9;


 VAR_4 = (struct ncsi_rsp_pkt *)FUNC_3(VAR_2->rsp);
 FUNC_0(VAR_5, VAR_4->rsp.common.channel,
          ((void*)0), &VAR_6);
 if (!VAR_6)
  return -VAR_0;

 VAR_3 = (struct ncsi_cmd_svf_pkt *)FUNC_3(VAR_2->cmd);
 VAR_7 = &VAR_6->vlan_filter;
 if (VAR_3->index == 0 || VAR_3->index > VAR_7->n_vids)
  return -VAR_1;


 FUNC_4(&VAR_6->lock, VAR_8);
 VAR_9 = &VAR_7->bitmap;
 if (!(VAR_3->enable & 0x1)) {
  if (FUNC_6(VAR_3->index - 1, VAR_9))
   VAR_7->vids[VAR_3->index - 1] = 0;
 } else {
  FUNC_2(VAR_3->index - 1, VAR_9);
  VAR_7->vids[VAR_3->index - 1] = FUNC_1(VAR_3->vlan);
 }
 FUNC_5(&VAR_6->lock, VAR_8);

 return 0;
}
