
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_wmm_ac {void* aifsn; int cot; void* cw_max; void* cw_min; } ;


 void* FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const struct ieee80211_wmm_ac *VAR_2,
        const struct ieee80211_wmm_ac *VAR_3,
        struct ieee80211_wmm_ac *VAR_4)
{
 VAR_4->cw_min = FUNC_0(VAR_0, VAR_2->cw_min, VAR_3->cw_min);
 VAR_4->cw_max = FUNC_0(VAR_0, VAR_2->cw_max, VAR_3->cw_max);
 VAR_4->cot = FUNC_1(VAR_0, VAR_2->cot, VAR_3->cot);
 VAR_4->aifsn = FUNC_0(VAR_1, VAR_2->aifsn, VAR_3->aifsn);
}
