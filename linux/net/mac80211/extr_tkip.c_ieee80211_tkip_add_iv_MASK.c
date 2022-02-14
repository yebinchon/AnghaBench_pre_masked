
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ieee80211_key_conf {int keyidx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *,int ) ;

u8 *FUNC_4(u8 *VAR_0, struct ieee80211_key_conf *VAR_1, u64 VAR_2)
{
 VAR_0 = FUNC_3(VAR_0, FUNC_0(VAR_2));
 *VAR_0++ = (VAR_1->keyidx << 6) | (1 << 5) ;
 FUNC_2(FUNC_1(VAR_2), VAR_0);
 return VAR_0 + 4;
}
