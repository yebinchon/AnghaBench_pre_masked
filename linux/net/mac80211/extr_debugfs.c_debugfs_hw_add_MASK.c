
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* keys; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {int airtime_flags; TYPE_4__* ops; TYPE_3__ debugfs; TYPE_2__ hw; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {scalar_t__ wake_tx_queue; } ;
struct TYPE_5__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 void* FUNC_4 (char*,struct dentry*) ;
 int FUNC_5 (char*,int,struct dentry*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void FUNC_6(struct ieee80211_local *VAR_38)
{
 struct dentry *VAR_39 = VAR_38->hw.wiphy->debugfsdir;
 struct dentry *VAR_40;

 if (!VAR_39)
  return;

 VAR_38->debugfs.keys = FUNC_4("keys", VAR_39);

 FUNC_0(VAR_27);
 FUNC_0(VAR_37);
 FUNC_0(VAR_19);
 FUNC_0(VAR_18);
 FUNC_0(VAR_16);



 FUNC_0(VAR_15);
 FUNC_0(VAR_36);
 FUNC_0(VAR_17);
 FUNC_1(VAR_14, 0600);

 if (VAR_38->ops->wake_tx_queue)
  FUNC_1(VAR_0, 0600);

 FUNC_5("airtime_flags", 0600,
      VAR_39, &VAR_38->airtime_flags);

 VAR_40 = FUNC_4("statistics", VAR_39);


 if (!VAR_40)
  return;
 FUNC_2(VAR_1);
 FUNC_2(VAR_8);
 FUNC_2(VAR_2);
 FUNC_2(VAR_9);
}
