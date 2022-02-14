
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct minstrel_rate_stats {scalar_t__ prob_ewma; int retry_count; int retry_count_rtscts; int retry_updated; } ;
struct minstrel_priv {int* cck_rates; } ;
struct minstrel_ht_sta {TYPE_1__* sta; } ;
struct mcs_group {int flags; int streams; } ;
struct ieee80211_sta_rates {TYPE_2__* rate; } ;
struct TYPE_4__ {int count; int count_rts; int count_cts; int idx; int flags; } ;
struct TYPE_3__ {scalar_t__ smps_mode; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct minstrel_priv*,struct minstrel_ht_sta*,int) ;
 struct minstrel_rate_stats* FUNC_3 (struct minstrel_ht_sta*,int) ;
 struct mcs_group* VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct minstrel_priv *VAR_6, struct minstrel_ht_sta *VAR_7,
                     struct ieee80211_sta_rates *VAR_8, int VAR_9, int VAR_10)
{
 const struct mcs_group *VAR_11 = &VAR_5[VAR_10 / VAR_3];
 struct minstrel_rate_stats *VAR_12;
 u8 VAR_13;
 u16 VAR_14 = VAR_11->flags;

 VAR_12 = FUNC_3(VAR_7, VAR_10);
 if (!VAR_12->retry_updated)
  FUNC_2(VAR_6, VAR_7, VAR_10);

 if (VAR_12->prob_ewma < FUNC_1(20, 100) || !VAR_12->retry_count) {
  VAR_8->rate[VAR_9].count = 2;
  VAR_8->rate[VAR_9].count_rts = 2;
  VAR_8->rate[VAR_9].count_cts = 2;
 } else {
  VAR_8->rate[VAR_9].count = VAR_12->retry_count;
  VAR_8->rate[VAR_9].count_cts = VAR_12->retry_count;
  VAR_8->rate[VAR_9].count_rts = VAR_12->retry_count_rtscts;
 }

 if (VAR_10 / VAR_3 == VAR_4)
  VAR_13 = VAR_6->cck_rates[VAR_10 % FUNC_0(VAR_6->cck_rates)];
 else if (VAR_14 & VAR_2)
  VAR_13 = ((VAR_11->streams - 1) << 4) |
        ((VAR_10 % VAR_3) & 0xF);
 else
  VAR_13 = VAR_10 % VAR_3 + (VAR_11->streams - 1) * 8;





 if (VAR_9 > 0 ||
     (VAR_7->sta->smps_mode == VAR_0 &&
      VAR_11->streams > 1)) {
  VAR_8->rate[VAR_9].count = VAR_8->rate[VAR_9].count_rts;
  VAR_14 |= VAR_1;
 }

 VAR_8->rate[VAR_9].idx = VAR_13;
 VAR_8->rate[VAR_9].flags = VAR_14;
}
