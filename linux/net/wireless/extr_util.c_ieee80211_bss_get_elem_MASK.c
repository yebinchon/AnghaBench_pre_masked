
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct element {int dummy; } ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {int ies; } ;


 struct element const* FUNC_0 (int ,int ,int ) ;
 struct cfg80211_bss_ies* FUNC_1 (int ) ;

const struct element *FUNC_2(struct cfg80211_bss *VAR_0, u8 VAR_1)
{
 const struct cfg80211_bss_ies *VAR_2;

 VAR_2 = FUNC_1(VAR_0->ies);
 if (!VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2->data, VAR_2->len);
}
