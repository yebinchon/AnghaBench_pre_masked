
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_dir; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int FUNC_0 (char*,int,int ,struct ieee80211_sub_if_data*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_sub_if_data *VAR_1)
{

 FUNC_0("num_mcast_sta", 0400, VAR_1->vif.debugfs_dir,
       VAR_1, &VAR_0);
}
