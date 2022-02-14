
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int stattimer; struct can_pkg_stats* pkg_stats; } ;
struct net {TYPE_1__ can; } ;
struct can_pkg_stats {unsigned long jiffies_init; int rx_frames; int tx_frames; int matches; int total_rx_match_ratio; int rx_frames_delta; int current_rx_match_ratio; int matches_delta; scalar_t__ current_tx_rate; int tx_frames_delta; scalar_t__ current_rx_rate; scalar_t__ max_tx_rate; scalar_t__ max_rx_rate; int max_rx_match_ratio; void* total_rx_rate; void* total_tx_rate; } ;
struct TYPE_4__ {int stattimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long,int,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct net*) ;
 struct net* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 struct net* VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_5 ;

void FUNC_5(struct timer_list *VAR_6)
{
 struct net *VAR_7 = FUNC_2(VAR_7, VAR_6, VAR_2.stattimer);
 struct can_pkg_stats *VAR_8 = VAR_7->can.pkg_stats;
 unsigned long VAR_9 = VAR_3;


 if (VAR_5)
  FUNC_1(VAR_7);


 if (VAR_9 < VAR_8->jiffies_init)
  FUNC_1(VAR_7);


 if (VAR_8->rx_frames > (VAR_1 / VAR_0))
  FUNC_1(VAR_7);


 if (VAR_8->tx_frames > (VAR_1 / VAR_0))
  FUNC_1(VAR_7);


 if (VAR_8->matches > (VAR_1 / 100))
  FUNC_1(VAR_7);


 if (VAR_8->rx_frames)
  VAR_8->total_rx_match_ratio = (VAR_8->matches * 100) /
   VAR_8->rx_frames;

 VAR_8->total_tx_rate = FUNC_0(VAR_8->jiffies_init, VAR_9,
         VAR_8->tx_frames);
 VAR_8->total_rx_rate = FUNC_0(VAR_8->jiffies_init, VAR_9,
         VAR_8->rx_frames);


 if (VAR_8->rx_frames_delta)
  VAR_8->current_rx_match_ratio =
   (VAR_8->matches_delta * 100) /
   VAR_8->rx_frames_delta;

 VAR_8->current_tx_rate = FUNC_0(0, VAR_0, VAR_8->tx_frames_delta);
 VAR_8->current_rx_rate = FUNC_0(0, VAR_0, VAR_8->rx_frames_delta);


 if (VAR_8->max_tx_rate < VAR_8->current_tx_rate)
  VAR_8->max_tx_rate = VAR_8->current_tx_rate;

 if (VAR_8->max_rx_rate < VAR_8->current_rx_rate)
  VAR_8->max_rx_rate = VAR_8->current_rx_rate;

 if (VAR_8->max_rx_match_ratio < VAR_8->current_rx_match_ratio)
  VAR_8->max_rx_match_ratio = VAR_8->current_rx_match_ratio;


 VAR_8->tx_frames_delta = 0;
 VAR_8->rx_frames_delta = 0;
 VAR_8->matches_delta = 0;


 FUNC_3(&VAR_7->can.stattimer, FUNC_4(VAR_3 + VAR_0));
}
