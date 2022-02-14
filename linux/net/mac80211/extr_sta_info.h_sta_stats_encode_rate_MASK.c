
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_rx_status {int bw; int enc_flags; int encoding; int nss; int rate_idx; int band; int he_gi; int he_ru; int he_dcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(struct ieee80211_rx_status *VAR_19)
{
 u32 VAR_20;

 VAR_20 = FUNC_0(VAR_0, VAR_19->bw);

 if (VAR_19->enc_flags & VAR_9)
  VAR_20 |= FUNC_0(VAR_10, 1);

 switch (VAR_19->encoding) {
 case 128:
  VAR_20 |= FUNC_0(VAR_16, VAR_15);
  VAR_20 |= FUNC_0(VAR_18, VAR_19->nss);
  VAR_20 |= FUNC_0(VAR_17, VAR_19->rate_idx);
  break;
 case 130:
  VAR_20 |= FUNC_0(VAR_16, VAR_13);
  VAR_20 |= FUNC_0(VAR_6, VAR_19->rate_idx);
  break;
 case 129:
  VAR_20 |= FUNC_0(VAR_16, VAR_14);
  VAR_20 |= FUNC_0(VAR_7, VAR_19->band);
  VAR_20 |= FUNC_0(VAR_8, VAR_19->rate_idx);
  break;
 case 131:
  VAR_20 |= FUNC_0(VAR_16, VAR_12);
  VAR_20 |= FUNC_0(VAR_4, VAR_19->nss);
  VAR_20 |= FUNC_0(VAR_3, VAR_19->rate_idx);
  VAR_20 |= FUNC_0(VAR_2, VAR_19->he_gi);
  VAR_20 |= FUNC_0(VAR_5, VAR_19->he_ru);
  VAR_20 |= FUNC_0(VAR_1, VAR_19->he_dcm);
  break;
 default:
  FUNC_1(1);
  return VAR_11;
 }

 return VAR_20;
}
