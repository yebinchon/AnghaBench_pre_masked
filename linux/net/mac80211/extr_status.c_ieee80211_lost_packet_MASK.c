
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lost_packets; scalar_t__ last_tdls_pkt_time; } ;
struct TYPE_7__ {int addr; scalar_t__ tdls; } ;
struct sta_info {TYPE_4__ status_stats; TYPE_3__ sta; TYPE_2__* sdata; TYPE_1__* local; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sta_info *VAR_8,
      struct ieee80211_tx_info *VAR_9)
{



 if (FUNC_1(&VAR_8->local->hw, VAR_3))
  return;


 if ((VAR_9->flags & VAR_1) &&
     !(VAR_9->flags & VAR_2))
  return;

 VAR_8->status_stats.lost_packets++;
 if (!VAR_8->sta.tdls &&
     VAR_8->status_stats.lost_packets < VAR_4)
  return;







 if (VAR_8->sta.tdls &&
     (VAR_8->status_stats.lost_packets < VAR_5 ||
      FUNC_2(VAR_7,
    VAR_8->status_stats.last_tdls_pkt_time +
    VAR_6)))
  return;

 FUNC_0(VAR_8->sdata->dev, VAR_8->sta.addr,
        VAR_8->status_stats.lost_packets, VAR_0);
 VAR_8->status_stats.lost_packets = 0;
}
