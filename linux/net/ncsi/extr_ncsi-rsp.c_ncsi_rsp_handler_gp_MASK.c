
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channel; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
struct ncsi_rsp_gp_pkt {int vlan_mode; int fc_mode; unsigned short mac_enable; int mac_cnt; int vlan_cnt; int vlan_enable; int aen_mode; int link_mode; int valid_modes; int bc_mode; TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_vlan_filter {void** vids; int bitmap; } ;
struct ncsi_channel_mac_filter {int * addrs; int bitmap; } ;
struct ncsi_channel {int lock; struct ncsi_channel_vlan_filter vlan_filter; struct ncsi_channel_mac_filter mac_filter; TYPE_3__* modes; } ;
typedef int __be16 ;
struct TYPE_6__ {int enable; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int,void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ncsi_request *VAR_10)
{
 struct ncsi_channel_vlan_filter *VAR_11;
 struct ncsi_channel_mac_filter *VAR_12;
 struct ncsi_dev_priv *VAR_13 = VAR_10->ndp;
 struct ncsi_rsp_gp_pkt *VAR_14;
 struct ncsi_channel *VAR_15;
 unsigned short VAR_16;
 unsigned char *VAR_17;
 unsigned long VAR_18;
 void *VAR_19;
 int VAR_20;


 VAR_14 = (struct ncsi_rsp_gp_pkt *)FUNC_6(VAR_10->rsp);
 FUNC_2(VAR_13, VAR_14->rsp.common.channel,
          ((void*)0), &VAR_15);
 if (!VAR_15)
  return -VAR_0;


 if (FUNC_3(VAR_14->valid_modes) & 0x1) {
  VAR_15->modes[VAR_3].enable = 1;
  VAR_15->modes[VAR_3].data[0] = FUNC_3(VAR_14->bc_mode);
 }
 if (FUNC_3(VAR_14->valid_modes) & 0x2)
  VAR_15->modes[VAR_4].enable = 1;
 if (FUNC_3(VAR_14->valid_modes) & 0x4)
  VAR_15->modes[VAR_8].enable = 1;
 if (FUNC_3(VAR_14->valid_modes) & 0x8)
  VAR_15->modes[VAR_7].enable = 1;


 VAR_15->modes[VAR_6].enable = 1;
 VAR_15->modes[VAR_6].data[0] = FUNC_3(VAR_14->link_mode);
 VAR_15->modes[VAR_9].enable = 1;
 VAR_15->modes[VAR_9].data[0] = VAR_14->vlan_mode;
 VAR_15->modes[VAR_5].enable = 1;
 VAR_15->modes[VAR_5].data[0] = VAR_14->fc_mode;
 VAR_15->modes[VAR_2].enable = 1;
 VAR_15->modes[VAR_2].data[0] = FUNC_3(VAR_14->aen_mode);


 VAR_17 = (unsigned char *)VAR_14 + 48;
 VAR_16 = VAR_14->mac_enable;
 VAR_12 = &VAR_15->mac_filter;
 FUNC_7(&VAR_15->lock, VAR_18);
 VAR_19 = &VAR_12->bitmap;
 for (VAR_20 = 0; VAR_20 < VAR_14->mac_cnt; VAR_20++, VAR_17 += 6) {
  if (!(VAR_16 & (0x1 << VAR_20)))
   FUNC_0(VAR_20, VAR_19);
  else
   FUNC_5(VAR_20, VAR_19);

  FUNC_1(&VAR_12->addrs[VAR_20 * VAR_1], VAR_17, VAR_1);
 }
 FUNC_8(&VAR_15->lock, VAR_18);


 VAR_16 = FUNC_4(VAR_14->vlan_enable);
 VAR_11 = &VAR_15->vlan_filter;
 VAR_19 = &VAR_11->bitmap;
 FUNC_7(&VAR_15->lock, VAR_18);
 for (VAR_20 = 0; VAR_20 < VAR_14->vlan_cnt; VAR_20++, VAR_17 += 2) {
  if (!(VAR_16 & (0x1 << VAR_20)))
   FUNC_0(VAR_20, VAR_19);
  else
   FUNC_5(VAR_20, VAR_19);

  VAR_11->vids[VAR_20] = FUNC_4(*(__be16 *)VAR_17);
 }
 FUNC_8(&VAR_15->lock, VAR_18);

 return 0;
}
