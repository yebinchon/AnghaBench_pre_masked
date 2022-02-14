
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
struct TYPE_5__ {int band; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ieee80211_chanctx_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_sub_if_data *VAR_0,
     struct sk_buff *VAR_1, int VAR_2)
{
 struct ieee80211_chanctx_conf *VAR_3;

 FUNC_4();
 VAR_3 = FUNC_3(VAR_0->vif.chanctx_conf);
 if (FUNC_0(!VAR_3)) {
  FUNC_5();
  FUNC_2(VAR_1);
  return;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3->def.chan->band, 0);
 FUNC_5();
}
