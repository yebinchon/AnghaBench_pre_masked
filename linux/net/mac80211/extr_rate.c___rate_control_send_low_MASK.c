
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int skip_table; TYPE_3__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_4__ control; } ;
struct ieee80211_supported_band {size_t band; int n_bitrates; TYPE_2__* bitrates; } ;
struct ieee80211_sta {int* supp_rates; int * addr; } ;
struct TYPE_5__ {int chandef; } ;
struct ieee80211_hw {int max_rate_tries; TYPE_1__ conf; } ;
struct TYPE_7__ {int idx; int count; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int,char*,int *,int,size_t,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_sta*,size_t,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4,
        struct ieee80211_supported_band *VAR_5,
        struct ieee80211_sta *VAR_6,
        struct ieee80211_tx_info *VAR_7,
        u32 VAR_8)
{
 int VAR_9;
 u32 VAR_10 =
  FUNC_2(&VAR_4->conf.chandef);

 if ((VAR_5->band == VAR_3) &&
     (VAR_7->flags & VAR_2))
  VAR_10 |= VAR_0;

 VAR_7->control.rates[0].idx = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5->n_bitrates; VAR_9++) {
  if (!(VAR_8 & FUNC_0(VAR_9)))
   continue;

  if ((VAR_10 & VAR_5->bitrates[VAR_9].flags) != VAR_10)
   continue;

  if (!FUNC_3(VAR_6, VAR_5->band, VAR_9))
   continue;

  VAR_7->control.rates[0].idx = VAR_9;
  break;
 }
 FUNC_1(VAR_9 == VAR_5->n_bitrates,
    "no supported rates for sta %pM (0x%x, band %d) in rate_mask 0x%x with flags 0x%x\n",
    VAR_6 ? VAR_6->addr : ((void*)0),
    VAR_6 ? VAR_6->supp_rates[VAR_5->band] : -1,
    VAR_5->band,
    VAR_8, VAR_10);

 VAR_7->control.rates[0].count =
  (VAR_7->flags & VAR_1) ?
  1 : VAR_4->max_rate_tries;

 VAR_7->control.skip_table = 1;
}
