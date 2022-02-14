
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_cipher_scheme {scalar_t__ cipher; scalar_t__ hdr_len; scalar_t__ pn_len; scalar_t__ pn_off; scalar_t__ key_idx_off; int key_idx_shift; scalar_t__ key_idx_mask; } ;



bool FUNC_0(const struct ieee80211_cipher_scheme *VAR_0)
{
 return !(VAR_0 == ((void*)0) || VAR_0->cipher == 0 ||
   VAR_0->hdr_len < VAR_0->pn_len + VAR_0->pn_off ||
   VAR_0->hdr_len <= VAR_0->key_idx_off ||
   VAR_0->key_idx_shift > 7 ||
   VAR_0->key_idx_mask == 0);
}
