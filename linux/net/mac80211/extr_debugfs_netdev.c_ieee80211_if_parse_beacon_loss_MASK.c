
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int assoc; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static ssize_t FUNC_2(
 struct ieee80211_sub_if_data *VAR_1, const char *VAR_2, int VAR_3)
{
 if (!FUNC_1(VAR_1) || !VAR_1->vif.bss_conf.assoc)
  return -VAR_0;

 FUNC_0(&VAR_1->vif);

 return VAR_3;
}
