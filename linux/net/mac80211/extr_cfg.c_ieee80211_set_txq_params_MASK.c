
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_txq_params {size_t ac; int txop; int cwmin; int cwmax; int aifs; } ;
struct ieee80211_tx_queue_params {int uapsd; int txop; int cw_min; int cw_max; int aifs; } ;
struct ieee80211_sub_if_data {struct ieee80211_tx_queue_params* tx_conf; } ;
struct TYPE_4__ {scalar_t__ queues; int wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
typedef int p ;
struct TYPE_3__ {int conf_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,size_t,struct ieee80211_tx_queue_params*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_tx_queue_params*,size_t) ;
 int FUNC_4 (struct ieee80211_tx_queue_params*,int ,int) ;
 int FUNC_5 (int ,char*,size_t) ;
 struct ieee80211_local* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_4,
        struct net_device *VAR_5,
        struct ieee80211_txq_params *VAR_6)
{
 struct ieee80211_local *VAR_7 = FUNC_6(VAR_4);
 struct ieee80211_sub_if_data *VAR_8 = FUNC_0(VAR_5);
 struct ieee80211_tx_queue_params VAR_9;

 if (!VAR_7->ops->conf_tx)
  return -VAR_2;

 if (VAR_7->hw.queues < VAR_3)
  return -VAR_2;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.aifs = VAR_6->aifs;
 VAR_9.cw_max = VAR_6->cwmax;
 VAR_9.cw_min = VAR_6->cwmin;
 VAR_9.txop = VAR_6->txop;





 VAR_9.uapsd = 0;

 FUNC_3(VAR_8, &VAR_9, VAR_6->ac);

 VAR_8->tx_conf[VAR_6->ac] = VAR_9;
 if (FUNC_1(VAR_7, VAR_8, VAR_6->ac, &VAR_9)) {
  FUNC_5(VAR_7->hw.wiphy,
       "failed to set TX queue parameters for AC %d\n",
       VAR_6->ac);
  return -VAR_1;
 }

 FUNC_2(VAR_8, VAR_0);

 return 0;
}
