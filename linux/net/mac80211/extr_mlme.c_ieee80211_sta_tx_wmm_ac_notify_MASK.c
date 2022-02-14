
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_if_managed {int tx_tspec_wk; struct ieee80211_sta_tx_tspec* tx_tspec; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_sta_tx_tspec {scalar_t__ admitted_time; unsigned long time_slice_start; scalar_t__ consumed_tx_time; int downgraded; int action; } ;
struct ieee80211_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct ieee80211_hdr*) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_4,
        struct ieee80211_hdr *VAR_5,
        u16 VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_4->u.mgd;
 u16 VAR_8 = FUNC_1(VAR_5);
 int VAR_9 = FUNC_0(VAR_8);
 struct ieee80211_sta_tx_tspec *VAR_10 = &VAR_7->tx_tspec[VAR_9];
 unsigned long VAR_11 = VAR_3;

 if (FUNC_2(!VAR_10->admitted_time))
  return;

 if (FUNC_4(VAR_11, VAR_10->time_slice_start + VAR_0)) {
  VAR_10->consumed_tx_time = 0;
  VAR_10->time_slice_start = VAR_11;

  if (VAR_10->downgraded) {
   VAR_10->action = VAR_2;
   FUNC_3(&VAR_7->tx_tspec_wk, 0);
  }
 }

 if (VAR_10->downgraded)
  return;

 VAR_10->consumed_tx_time += VAR_6;

 if (VAR_10->consumed_tx_time >= VAR_10->admitted_time) {
  VAR_10->downgraded = 1;
  VAR_10->action = VAR_1;
  FUNC_3(&VAR_7->tx_tspec_wk, 0);
 }
}
