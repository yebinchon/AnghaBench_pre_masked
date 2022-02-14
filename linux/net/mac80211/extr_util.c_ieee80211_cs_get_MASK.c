
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int n_cipher_schemes; struct ieee80211_cipher_scheme* cipher_schemes; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_cipher_scheme {scalar_t__ cipher; int iftype; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;

const struct ieee80211_cipher_scheme *
FUNC_1(struct ieee80211_local *VAR_0, u32 VAR_1,
   enum nl80211_iftype VAR_2)
{
 const struct ieee80211_cipher_scheme *VAR_3 = VAR_0->hw.cipher_schemes;
 int VAR_4 = VAR_0->hw.n_cipher_schemes;
 int VAR_5;
 const struct ieee80211_cipher_scheme *VAR_6 = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3[VAR_5].cipher == VAR_1) {
   VAR_6 = &VAR_3[VAR_5];
   break;
  }
 }

 if (!VAR_6 || !(VAR_6->iftype & FUNC_0(VAR_2)))
  return ((void*)0);

 return VAR_6;
}
