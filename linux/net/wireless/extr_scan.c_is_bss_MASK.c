
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {int ies; int bssid; } ;


 int VAR_0 ;
 size_t* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,size_t const*) ;
 scalar_t__ FUNC_2 (size_t const*,size_t const*,size_t) ;
 struct cfg80211_bss_ies* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct cfg80211_bss *VAR_1, const u8 *VAR_2,
     const u8 *VAR_3, size_t VAR_4)
{
 const struct cfg80211_bss_ies *VAR_5;
 const u8 *VAR_6;

 if (VAR_2 && !FUNC_1(VAR_1->bssid, VAR_2))
  return 0;

 if (!VAR_3)
  return 1;

 VAR_5 = FUNC_3(VAR_1->ies);
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_0(VAR_0, VAR_5->data, VAR_5->len);
 if (!VAR_6)
  return 0;
 if (VAR_6[1] != VAR_4)
  return 0;
 return FUNC_2(VAR_6 + 2, VAR_3, VAR_4) == 0;
}
