
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_12__ {int addr; } ;
struct sta_info {int debugfs_dir; TYPE_6__ sta; int driver_buffered_tids; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct TYPE_7__ {struct dentry* subdir_stations; } ;
struct ieee80211_sub_if_data {TYPE_1__ debugfs; } ;
struct TYPE_9__ {int wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; TYPE_2__* ops; } ;
struct dentry {int dummy; } ;
typedef int mac ;
struct TYPE_11__ {int fragments; int num_duplicates; } ;
struct TYPE_10__ {int filtered; } ;
struct TYPE_8__ {scalar_t__ wake_tx_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct dentry*) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,TYPE_6__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__ VAR_13 ;
 int FUNC_6 (int *,int,char*,int ) ;
 TYPE_4__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (int ,int ) ;

void FUNC_8(struct sta_info *VAR_17)
{
 struct ieee80211_local *VAR_18 = VAR_17->local;
 struct ieee80211_sub_if_data *VAR_19 = VAR_17->sdata;
 struct dentry *VAR_20 = VAR_17->sdata->debugfs.subdir_stations;
 u8 VAR_21[3*VAR_0];

 if (!VAR_20)
  return;

 FUNC_6(VAR_21, sizeof(VAR_21), "%pM", VAR_17->sta.addr);
 VAR_17->debugfs_dir = FUNC_2(VAR_21, VAR_20);

 FUNC_0(VAR_6);
 FUNC_0(VAR_3);
 FUNC_0(VAR_10);
 FUNC_0(VAR_9);
 FUNC_0(VAR_2);
 FUNC_0(VAR_8);
 FUNC_0(VAR_16);
 FUNC_0(VAR_7);

 FUNC_1(VAR_11, VAR_13.num_duplicates);
 FUNC_1(VAR_12, VAR_13.fragments);
 FUNC_1(VAR_15, VAR_14.filtered);

 if (VAR_18->ops->wake_tx_queue)
  FUNC_0(VAR_5);

 if (FUNC_7(VAR_18->hw.wiphy,
        VAR_1))
  FUNC_0(VAR_4);

 if (sizeof(VAR_17->driver_buffered_tids) == sizeof(u32))
  FUNC_3("driver_buffered_tids", 0400,
       VAR_17->debugfs_dir,
       (u32 *)&VAR_17->driver_buffered_tids);
 else
  FUNC_4("driver_buffered_tids", 0400,
       VAR_17->debugfs_dir,
       (u64 *)&VAR_17->driver_buffered_tids);

 FUNC_5(VAR_18, VAR_19, &VAR_17->sta, VAR_17->debugfs_dir);
}
