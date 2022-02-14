
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_managed {unsigned long uapsd_max_sp_len; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct ieee80211_sub_if_data *VAR_3, const char *VAR_4, int VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_3->u.mgd;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return -VAR_0;

 if (VAR_7 & ~VAR_2)
  return -VAR_1;

 VAR_6->uapsd_max_sp_len = VAR_7;

 return VAR_5;
}
