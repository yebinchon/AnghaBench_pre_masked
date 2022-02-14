
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chanctx_data_size; } ;
struct ieee80211_local {TYPE_1__ hw; int chanctx_mtx; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_4__ {int rx_chains_static; int rx_chains_dynamic; int radar_enabled; struct cfg80211_chan_def def; } ;
struct ieee80211_chanctx {int mode; TYPE_2__ conf; int reserved_vifs; int assigned_vifs; } ;
typedef enum ieee80211_chanctx_mode { ____Placeholder_ieee80211_chanctx_mode } ieee80211_chanctx_mode ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ieee80211_chanctx *
FUNC_4(struct ieee80211_local *VAR_1,
   const struct cfg80211_chan_def *VAR_2,
   enum ieee80211_chanctx_mode VAR_3)
{
 struct ieee80211_chanctx *VAR_4;

 FUNC_3(&VAR_1->chanctx_mtx);

 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_1->hw.chanctx_data_size, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->assigned_vifs);
 FUNC_0(&VAR_4->reserved_vifs);
 VAR_4->conf.def = *VAR_2;
 VAR_4->conf.rx_chains_static = 1;
 VAR_4->conf.rx_chains_dynamic = 1;
 VAR_4->mode = VAR_3;
 VAR_4->conf.radar_enabled = 0;
 FUNC_1(VAR_1, VAR_4);

 return VAR_4;
}
