
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_3__ {int* variable; int capab_info; } ;
struct TYPE_4__ {TYPE_1__ assoc_resp; } ;
struct ieee80211_mgmt {int* sa; int* da; TYPE_2__ u; } ;
struct ieee80211_mgd_assoc_data {int* fils_nonces; int fils_kek_len; int fils_kek; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*,size_t,int,int const**,size_t*,int*) ;
 int* FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,int*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_5,
       u8 *VAR_6, size_t *VAR_7,
       struct ieee80211_mgd_assoc_data *VAR_8)
{
 struct ieee80211_mgmt *VAR_9 = (void *)VAR_6;
 u8 *VAR_10, *VAR_11, *VAR_12;
 const u8 *VAR_13[5 + 1], *VAR_14;
 size_t VAR_15[5 + 1];
 int VAR_16;
 size_t VAR_17;

 if (*VAR_7 < 24 + 6)
  return -VAR_1;

 VAR_10 = (u8 *)&VAR_9->u.assoc_resp.capab_info;
 VAR_11 = VAR_9->u.assoc_resp.variable;
 VAR_14 = FUNC_1(VAR_4,
           VAR_11, VAR_6 + *VAR_7 - VAR_11);
 if (!VAR_14 || VAR_14[1] != 1 + 8) {
  FUNC_2(VAR_5,
    "No (valid) FILS Session element in (Re)Association Response frame from %pM",
    VAR_9->sa);
  return -VAR_1;
 }

 VAR_12 = (u8 *)VAR_14 + 2 + 1 + 8;




 VAR_13[0] = VAR_9->sa;
 VAR_15[0] = VAR_2;

 VAR_13[1] = VAR_9->da;
 VAR_15[1] = VAR_2;

 VAR_13[2] = &VAR_8->fils_nonces[VAR_3];
 VAR_15[2] = VAR_3;

 VAR_13[3] = VAR_8->fils_nonces;
 VAR_15[3] = VAR_3;



 VAR_13[4] = VAR_10;
 VAR_15[4] = VAR_12 - VAR_10;

 VAR_17 = VAR_6 + *VAR_7 - VAR_12;
 if (VAR_17 < VAR_0) {
  FUNC_2(VAR_5,
    "Not enough room for AES-SIV data after FILS Session element in (Re)Association Response frame from %pM",
    VAR_9->sa);
  return -VAR_1;
 }
 VAR_16 = FUNC_0(VAR_8->fils_kek, VAR_8->fils_kek_len,
         VAR_12, VAR_17, 5, VAR_13, VAR_15, VAR_12);
 if (VAR_16 != 0) {
  FUNC_2(VAR_5,
    "AES-SIV decryption of (Re)Association Response frame from %pM failed",
    VAR_9->sa);
  return VAR_16;
 }
 *VAR_7 -= VAR_0;
 return 0;
}
