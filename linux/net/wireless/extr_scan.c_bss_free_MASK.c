
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proberesp_ies; int hidden_beacon_bss; int beacon_ies; } ;
struct cfg80211_internal_bss {int hidden_list; TYPE_1__ pub; int hold; } ;
struct cfg80211_bss_ies {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfg80211_internal_bss*) ;
 int FUNC_3 (struct cfg80211_bss_ies*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct cfg80211_internal_bss *VAR_1)
{
 struct cfg80211_bss_ies *VAR_2;

 if (FUNC_0(FUNC_1(&VAR_1->hold)))
  return;

 VAR_2 = (void *)FUNC_6(VAR_1->pub.beacon_ies);
 if (VAR_2 && !VAR_1->pub.hidden_beacon_bss)
  FUNC_3(VAR_2, VAR_0);
 VAR_2 = (void *)FUNC_6(VAR_1->pub.proberesp_ies);
 if (VAR_2)
  FUNC_3(VAR_2, VAR_0);





 if (!FUNC_5(&VAR_1->hidden_list))
  FUNC_4(&VAR_1->hidden_list);

 FUNC_2(VAR_1);
}
