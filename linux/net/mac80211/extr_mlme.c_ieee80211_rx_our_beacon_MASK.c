
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfg80211_bss {TYPE_1__* transmitted_bss; int bssid; } ;
struct TYPE_2__ {int bssid; } ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static bool FUNC_1(const u8 *VAR_0,
        struct cfg80211_bss *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1->bssid))
  return 1;
 if (!VAR_1->transmitted_bss)
  return 0;
 return FUNC_0(VAR_0, VAR_1->transmitted_bss->bssid);
}
