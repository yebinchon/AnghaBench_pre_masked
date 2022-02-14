
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_mmie_16 {int dummy; } ;
struct ieee80211_mmie {int dummy; } ;
struct TYPE_18__ {int cipher; int keyidx; size_t keylen; int icv_len; int key; int iv_len; scalar_t__ flags; } ;
struct TYPE_13__ {int ** rx_pn; } ;
struct TYPE_12__ {void* tfm; int ** rx_pn; } ;
struct TYPE_11__ {void* tfm; int * rx_pn; } ;
struct TYPE_10__ {void* tfm; int * rx_pn; } ;
struct TYPE_16__ {void* tfm; int ** rx_pn; } ;
struct TYPE_15__ {int txlock; TYPE_5__* rx; } ;
struct TYPE_17__ {TYPE_4__ gen; TYPE_3__ gcmp; TYPE_2__ aes_gmac; TYPE_1__ aes_cmac; TYPE_7__ ccmp; TYPE_6__ tkip; } ;
struct ieee80211_key {int list; TYPE_9__ conf; scalar_t__ flags; TYPE_8__ u; } ;
struct ieee80211_cipher_scheme {size_t pn_len; int mic_len; int hdr_len; } ;
struct TYPE_14__ {int iv16; int iv32; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_key* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 void* FUNC_7 (int const*,size_t) ;
 void* FUNC_8 (int const*,size_t) ;
 void* FUNC_9 (int const*,size_t) ;
 void* FUNC_10 (int const*,size_t,void*) ;
 int FUNC_11 (struct ieee80211_key*) ;
 struct ieee80211_key* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int const*,size_t) ;
 int FUNC_14 (int *) ;

struct ieee80211_key *
FUNC_15(u32 VAR_22, int VAR_23, size_t VAR_24,
      const u8 *VAR_25,
      size_t VAR_26, const u8 *VAR_27,
      const struct ieee80211_cipher_scheme *VAR_28)
{
 struct ieee80211_key *VAR_29;
 int VAR_30, VAR_31, VAR_32;

 if (FUNC_4(VAR_23 < 0 || VAR_23 >= VAR_20 + VAR_21))
  return FUNC_0(-VAR_0);

 VAR_29 = FUNC_12(sizeof(struct ieee80211_key) + VAR_24, VAR_2);
 if (!VAR_29)
  return FUNC_0(-VAR_1);





 VAR_29->conf.flags = 0;
 VAR_29->flags = 0;

 VAR_29->conf.cipher = VAR_22;
 VAR_29->conf.keyidx = VAR_23;
 VAR_29->conf.keylen = VAR_24;
 switch (VAR_22) {
 case 128:
 case 129:
  VAR_29->conf.iv_len = VAR_18;
  VAR_29->conf.icv_len = VAR_17;
  break;
 case 130:
  VAR_29->conf.iv_len = VAR_16;
  VAR_29->conf.icv_len = VAR_15;
  if (VAR_27) {
   for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
    VAR_29->u.tkip.rx[VAR_30].iv32 =
     FUNC_6(&VAR_27[2]);
    VAR_29->u.tkip.rx[VAR_30].iv16 =
     FUNC_5(VAR_27);
   }
  }
  FUNC_14(&VAR_29->u.tkip.txlock);
  break;
 case 134:
  VAR_29->conf.iv_len = VAR_6;
  VAR_29->conf.icv_len = VAR_7;
  if (VAR_27) {
   for (VAR_30 = 0; VAR_30 < VAR_14 + 1; VAR_30++)
    for (VAR_31 = 0; VAR_31 < VAR_8; VAR_31++)
     VAR_29->u.ccmp.rx_pn[VAR_30][VAR_31] =
      VAR_27[VAR_8 - VAR_31 - 1];
  }




  VAR_29->u.ccmp.tfm = FUNC_10(
   VAR_25, VAR_24, VAR_7);
  if (FUNC_2(VAR_29->u.ccmp.tfm)) {
   VAR_32 = FUNC_3(VAR_29->u.ccmp.tfm);
   FUNC_11(VAR_29);
   return FUNC_0(VAR_32);
  }
  break;
 case 133:
  VAR_29->conf.iv_len = VAR_3;
  VAR_29->conf.icv_len = VAR_4;
  for (VAR_30 = 0; VAR_27 && VAR_30 < VAR_14 + 1; VAR_30++)
   for (VAR_31 = 0; VAR_31 < VAR_5; VAR_31++)
    VAR_29->u.ccmp.rx_pn[VAR_30][VAR_31] =
     VAR_27[VAR_5 - VAR_31 - 1];



  VAR_29->u.ccmp.tfm = FUNC_10(
   VAR_25, VAR_24, VAR_4);
  if (FUNC_2(VAR_29->u.ccmp.tfm)) {
   VAR_32 = FUNC_3(VAR_29->u.ccmp.tfm);
   FUNC_11(VAR_29);
   return FUNC_0(VAR_32);
  }
  break;
 case 138:
 case 137:
  VAR_29->conf.iv_len = 0;
  if (VAR_22 == 138)
   VAR_29->conf.icv_len = sizeof(struct ieee80211_mmie);
  else
   VAR_29->conf.icv_len = sizeof(struct ieee80211_mmie_16);
  if (VAR_27)
   for (VAR_31 = 0; VAR_31 < VAR_9; VAR_31++)
    VAR_29->u.aes_cmac.rx_pn[VAR_31] =
     VAR_27[VAR_9 - VAR_31 - 1];




  VAR_29->u.aes_cmac.tfm =
   FUNC_7(VAR_25, VAR_24);
  if (FUNC_2(VAR_29->u.aes_cmac.tfm)) {
   VAR_32 = FUNC_3(VAR_29->u.aes_cmac.tfm);
   FUNC_11(VAR_29);
   return FUNC_0(VAR_32);
  }
  break;
 case 136:
 case 135:
  VAR_29->conf.iv_len = 0;
  VAR_29->conf.icv_len = sizeof(struct ieee80211_mmie_16);
  if (VAR_27)
   for (VAR_31 = 0; VAR_31 < VAR_13; VAR_31++)
    VAR_29->u.aes_gmac.rx_pn[VAR_31] =
     VAR_27[VAR_13 - VAR_31 - 1];



  VAR_29->u.aes_gmac.tfm =
   FUNC_9(VAR_25, VAR_24);
  if (FUNC_2(VAR_29->u.aes_gmac.tfm)) {
   VAR_32 = FUNC_3(VAR_29->u.aes_gmac.tfm);
   FUNC_11(VAR_29);
   return FUNC_0(VAR_32);
  }
  break;
 case 132:
 case 131:
  VAR_29->conf.iv_len = VAR_10;
  VAR_29->conf.icv_len = VAR_11;
  for (VAR_30 = 0; VAR_27 && VAR_30 < VAR_14 + 1; VAR_30++)
   for (VAR_31 = 0; VAR_31 < VAR_12; VAR_31++)
    VAR_29->u.gcmp.rx_pn[VAR_30][VAR_31] =
     VAR_27[VAR_12 - VAR_31 - 1];



  VAR_29->u.gcmp.tfm = FUNC_8(VAR_25,
              VAR_24);
  if (FUNC_2(VAR_29->u.gcmp.tfm)) {
   VAR_32 = FUNC_3(VAR_29->u.gcmp.tfm);
   FUNC_11(VAR_29);
   return FUNC_0(VAR_32);
  }
  break;
 default:
  if (VAR_28) {
   if (VAR_26 && VAR_26 != VAR_28->pn_len) {
    FUNC_11(VAR_29);
    return FUNC_0(-VAR_0);
   }

   VAR_29->conf.iv_len = VAR_28->hdr_len;
   VAR_29->conf.icv_len = VAR_28->mic_len;
   for (VAR_30 = 0; VAR_30 < VAR_14 + 1; VAR_30++)
    for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++)
     VAR_29->u.gen.rx_pn[VAR_30][VAR_31] =
       VAR_27[VAR_26 - VAR_31 - 1];
   VAR_29->flags |= VAR_19;
  }
 }
 FUNC_13(VAR_29->conf.key, VAR_25, VAR_24);
 FUNC_1(&VAR_29->list);

 return VAR_29;
}
