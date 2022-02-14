
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_sta_ht_cap {int ampdu_factor; int ampdu_density; int mcs; } ;
struct ieee80211_ht_cap {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

u8 *FUNC_3(u8 *VAR_2, struct ieee80211_sta_ht_cap *VAR_3,
         u16 VAR_4)
{
 __le16 VAR_5;

 *VAR_2++ = VAR_1;
 *VAR_2++ = sizeof(struct ieee80211_ht_cap);
 FUNC_2(VAR_2, 0, sizeof(struct ieee80211_ht_cap));


 VAR_5 = FUNC_0(VAR_4);
 FUNC_1(VAR_2, &VAR_5, sizeof(u16));
 VAR_2 += sizeof(u16);


 *VAR_2++ = VAR_3->ampdu_factor |
   (VAR_3->ampdu_density <<
   VAR_0);


 FUNC_1(VAR_2, &VAR_3->mcs, sizeof(VAR_3->mcs));
 VAR_2 += sizeof(VAR_3->mcs);


 VAR_2 += sizeof(__le16);


 VAR_2 += sizeof(__le32);


 VAR_2 += sizeof(u8);

 return VAR_2;
}
