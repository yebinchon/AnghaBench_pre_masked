
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_tim_ie {int dtim_count; int dtim_period; } ;
struct ieee80211_bssid_index {int dtim_count; int dtim_period; } ;
struct cfg80211_bss_ies {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct cfg80211_bss_ies *VAR_2,
          u8 *VAR_3, u8 *VAR_4)
{
 const u8 *VAR_5 = FUNC_0(VAR_1, VAR_2->data, VAR_2->len);
 const u8 *VAR_6 = FUNC_0(VAR_0, VAR_2->data,
      VAR_2->len);
 const struct ieee80211_tim_ie *VAR_7 = ((void*)0);
 const struct ieee80211_bssid_index *VAR_8;
 bool VAR_9 = VAR_5 && VAR_5[1] >= 2;

 if (VAR_9)
  VAR_7 = (void *)(VAR_5 + 2);

 if (VAR_3)
  *VAR_3 = VAR_9 ? VAR_7->dtim_count : 0;

 if (VAR_4)
  *VAR_4 = VAR_9 ? VAR_7->dtim_period : 0;


 if (!VAR_6 || VAR_6[1] < 3)
  return VAR_9;

 VAR_8 = (void *)(VAR_6 + 2);

 if (VAR_3)
  *VAR_3 = VAR_8->dtim_count;

 if (VAR_4)
  *VAR_4 = VAR_8->dtim_period;

 return 1;
}
