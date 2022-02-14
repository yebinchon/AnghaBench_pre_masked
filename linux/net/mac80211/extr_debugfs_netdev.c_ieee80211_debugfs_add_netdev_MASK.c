
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* debugfs_dir; } ;
struct TYPE_10__ {void* subdir_stations; } ;
struct ieee80211_sub_if_data {char* name; TYPE_1__ vif; TYPE_5__ debugfs; TYPE_4__* local; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct TYPE_9__ {TYPE_3__ hw; } ;
struct TYPE_7__ {void* debugfsdir; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 void* FUNC_1 (char*,void*) ;
 int FUNC_2 (char*,char*,char*) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_1)
{
 char VAR_2[10+VAR_0];

 FUNC_2(VAR_2, "netdev:%s", VAR_1->name);
 VAR_1->vif.debugfs_dir = FUNC_1(VAR_2,
  VAR_1->local->hw.wiphy->debugfsdir);
 VAR_1->debugfs.subdir_stations = FUNC_1("stations",
       VAR_1->vif.debugfs_dir);
 FUNC_0(VAR_1);
}
