
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_sub_if_data {int ** rc_rateidx_vht_mcs_mask; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(
    const struct ieee80211_sub_if_data *VAR_2,
    char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 const u16 *VAR_7 = VAR_2->rc_rateidx_vht_mcs_mask[VAR_0];

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_6 += FUNC_0(VAR_3 + VAR_6, VAR_4 - VAR_6, "%04x ", VAR_7[VAR_5]);
 VAR_6 += FUNC_0(VAR_3 + VAR_6, VAR_4 - VAR_6, "\n");

 return VAR_6;
}
