
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_ampdu_tx {scalar_t__ stop_initiator; scalar_t__ tx_stop; int state; } ;
struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; int lock; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,char*,int ,int) ;
 int FUNC_1 (struct sta_info*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ,int,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct sta_info *VAR_3, int VAR_4,
        struct tid_ampdu_tx *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = VAR_3->sdata;
 bool VAR_7 = 0;

 FUNC_0(VAR_6, "Stopping Tx BA session for %pM tid %d\n",
        VAR_3->sta.addr, VAR_4);

 FUNC_3(&VAR_3->lock);

 if (!FUNC_5(VAR_0, &VAR_5->state)) {
  FUNC_0(VAR_6,
         "unexpected callback to A-MPDU stop for %pM tid %d\n",
         VAR_3->sta.addr, VAR_4);
  goto unlock_sta;
 }

 if (VAR_5->stop_initiator == VAR_1 && VAR_5->tx_stop)
  VAR_7 = 1;

 FUNC_1(VAR_3, VAR_4);

 unlock_sta:
 FUNC_4(&VAR_3->lock);

 if (VAR_7)
  FUNC_2(VAR_6, VAR_3->sta.addr, VAR_4,
   VAR_1, VAR_2);
}
