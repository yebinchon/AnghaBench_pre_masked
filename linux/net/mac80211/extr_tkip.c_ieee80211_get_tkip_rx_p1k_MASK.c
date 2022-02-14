
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tkip_ctx {int p1k; } ;
struct ieee80211_key_conf {int * key; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int const*,struct tkip_ctx*,int const*,int ) ;

void FUNC_2(struct ieee80211_key_conf *VAR_1,
          const u8 *VAR_2, u32 VAR_3, u16 *VAR_4)
{
 const u8 *VAR_5 = &VAR_1->key[VAR_0];
 struct tkip_ctx VAR_6;

 FUNC_1(VAR_5, &VAR_6, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_6.p1k, sizeof(VAR_6.p1k));
}
