
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int radar_enabled; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;
struct ieee80211_local {int _oper_chandef; int use_chanctx; TYPE_2__ hw; int chanctx_mtx; int mtx; } ;
struct TYPE_6__ {int def; int radar_enabled; } ;
struct ieee80211_chanctx {TYPE_3__ conf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_1 (struct ieee80211_local*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_local *VAR_1,
     struct ieee80211_chanctx *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 FUNC_4(&VAR_1->mtx);
 FUNC_4(&VAR_1->chanctx_mtx);

 if (!VAR_1->use_chanctx)
  VAR_1->hw.conf.radar_enabled = VAR_2->conf.radar_enabled;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  FUNC_1(VAR_1, VAR_3);

 if (!VAR_1->use_chanctx) {
  VAR_1->_oper_chandef = VAR_2->conf.def;
  FUNC_1(VAR_1, VAR_0);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_1);
   return VAR_4;
  }
 }

 return 0;
}
