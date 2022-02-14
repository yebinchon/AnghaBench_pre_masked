
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int tdls_wider_bw_prohibited; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct ieee80211_sub_if_data *VAR_0, const char *VAR_1, int VAR_2)
{
 struct ieee80211_if_managed *VAR_3 = &VAR_0->u.mgd;
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->tdls_wider_bw_prohibited = !VAR_4;
 return VAR_2;
}
