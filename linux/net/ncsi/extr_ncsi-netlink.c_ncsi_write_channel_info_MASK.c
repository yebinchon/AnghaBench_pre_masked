
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_vlan_filter {int n_vids; scalar_t__* vids; int bitmap; } ;
struct ncsi_channel_mode {int * data; } ;
struct TYPE_4__ {int fw_name; int alpha2; int version; } ;
struct ncsi_channel {scalar_t__ state; struct ncsi_channel_vlan_filter vlan_filter; TYPE_2__ version; TYPE_1__* package; struct ncsi_channel_mode* modes; int id; } ;
struct TYPE_3__ {struct ncsi_channel* preferred_channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_12,
       struct ncsi_dev_priv *VAR_13,
       struct ncsi_channel *VAR_14)
{
 struct ncsi_channel_vlan_filter *VAR_15;
 struct ncsi_channel_mode *VAR_16;
 struct nlattr *VAR_17;
 int VAR_18;

 FUNC_6(VAR_12, VAR_4, VAR_14->id);
 VAR_16 = &VAR_14->modes[VAR_11];
 FUNC_6(VAR_12, VAR_5, VAR_16->data[2]);
 if (VAR_14->state == VAR_1)
  FUNC_3(VAR_12, VAR_2);
 if (VAR_14 == VAR_14->package->preferred_channel)
  FUNC_3(VAR_12, VAR_3);

 FUNC_6(VAR_12, VAR_6, VAR_14->version.version);
 FUNC_6(VAR_12, VAR_7, VAR_14->version.alpha2);
 FUNC_4(VAR_12, VAR_8, VAR_14->version.fw_name);

 VAR_17 = FUNC_2(VAR_12, VAR_10);
 if (!VAR_17)
  return -VAR_0;
 VAR_15 = &VAR_14->vlan_filter;
 VAR_18 = -1;
 while ((VAR_18 = FUNC_0((void *)&VAR_15->bitmap, VAR_15->n_vids,
      VAR_18 + 1)) < VAR_15->n_vids) {
  if (VAR_15->vids[VAR_18])
   FUNC_5(VAR_12, VAR_9,
        VAR_15->vids[VAR_18]);
 }
 FUNC_1(VAR_12, VAR_17);

 return 0;
}
