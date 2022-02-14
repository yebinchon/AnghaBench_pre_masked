
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_ap_settings {int ht_required; int vht_required; } ;


 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cfg80211_ap_settings *VAR_2,
         const u8 *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3[1]; VAR_4++) {
  if (VAR_3[2 + VAR_4] == VAR_0)
   VAR_2->ht_required = 1;
  if (VAR_3[2 + VAR_4] == VAR_1)
   VAR_2->vht_required = 1;
 }
}
