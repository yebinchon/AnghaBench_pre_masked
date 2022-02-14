
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * default_mgmt_key; } ;
struct ieee80211_sub_if_data {TYPE_1__ debugfs; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->debugfs.default_mgmt_key);
 VAR_0->debugfs.default_mgmt_key = ((void*)0);
}
