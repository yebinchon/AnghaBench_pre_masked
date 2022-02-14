
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int dummy; } ;
struct ieee80211_cipher_scheme {int hdr_len; } ;
struct cfg80211_crypto_settings {int n_ciphers_pairwise; int cipher_group; int * ciphers_pairwise; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 struct ieee80211_cipher_scheme* FUNC_0 (struct ieee80211_local*,int ,int) ;

int FUNC_1(struct ieee80211_local *VAR_1,
     struct cfg80211_crypto_settings *VAR_2,
     enum nl80211_iftype VAR_3)
{
 const struct ieee80211_cipher_scheme *VAR_4;
 int VAR_5 = VAR_0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->n_ciphers_pairwise; VAR_6++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2->ciphers_pairwise[VAR_6],
          VAR_3);

  if (VAR_4 && VAR_5 < VAR_4->hdr_len)
   VAR_5 = VAR_4->hdr_len;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2->cipher_group, VAR_3);
 if (VAR_4 && VAR_5 < VAR_4->hdr_len)
  VAR_5 = VAR_4->hdr_len;

 return VAR_5;
}
