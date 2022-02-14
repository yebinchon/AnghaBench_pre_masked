
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_he_operation {int he_mcs_nss_set; int he_oper_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

u8 *FUNC_3(u8 *VAR_5)
{
 struct ieee80211_he_operation *VAR_6;
 u32 VAR_7;

 *VAR_5++ = VAR_3;
 *VAR_5++ = 1 + sizeof(struct ieee80211_he_operation);
 *VAR_5++ = VAR_4;

 VAR_7 = 0;
 VAR_7 |= FUNC_2(1023,
    VAR_2);
 VAR_7 |= FUNC_2(1,
    VAR_1);
 VAR_7 |= FUNC_2(1,
    VAR_0);

 VAR_6 = (struct ieee80211_he_operation *)VAR_5;
 VAR_6->he_oper_params = FUNC_1(VAR_7);


 VAR_6->he_mcs_nss_set = FUNC_0(0xffff);



 return VAR_5 + sizeof(struct ieee80211_vht_operation);
}
