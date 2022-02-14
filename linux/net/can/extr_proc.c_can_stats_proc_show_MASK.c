
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_3__ {scalar_t__ function; } ;
struct TYPE_4__ {TYPE_1__ stattimer; struct can_rcv_lists_stats* rcv_lists_stats; struct can_pkg_stats* pkg_stats; } ;
struct net {TYPE_2__ can; } ;
struct can_rcv_lists_stats {scalar_t__ user_reset; scalar_t__ stats_reset; scalar_t__ rcv_entries_max; scalar_t__ rcv_entries; } ;
struct can_pkg_stats {scalar_t__ max_rx_rate; scalar_t__ max_tx_rate; scalar_t__ max_rx_match_ratio; scalar_t__ current_rx_rate; scalar_t__ current_tx_rate; scalar_t__ current_rx_match_ratio; scalar_t__ total_rx_rate; scalar_t__ total_tx_rate; scalar_t__ total_rx_match_ratio; scalar_t__ matches; scalar_t__ rx_frames; scalar_t__ tx_frames; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct net *VAR_3 = VAR_1->private;
 struct can_pkg_stats *VAR_4 = VAR_3->can.pkg_stats;
 struct can_rcv_lists_stats *VAR_5 = VAR_3->can.rcv_lists_stats;

 FUNC_1(VAR_1, '\n');
 FUNC_0(VAR_1, " %8ld transmitted frames (TXF)\n", VAR_4->tx_frames);
 FUNC_0(VAR_1, " %8ld received frames (RXF)\n", VAR_4->rx_frames);
 FUNC_0(VAR_1, " %8ld matched frames (RXMF)\n", VAR_4->matches);

 FUNC_1(VAR_1, '\n');

 if (VAR_3->can.stattimer.function == VAR_0) {
  FUNC_0(VAR_1, " %8ld %% total match ratio (RXMR)\n",
    VAR_4->total_rx_match_ratio);

  FUNC_0(VAR_1, " %8ld frames/s total tx rate (TXR)\n",
    VAR_4->total_tx_rate);
  FUNC_0(VAR_1, " %8ld frames/s total rx rate (RXR)\n",
    VAR_4->total_rx_rate);

  FUNC_1(VAR_1, '\n');

  FUNC_0(VAR_1, " %8ld %% current match ratio (CRXMR)\n",
    VAR_4->current_rx_match_ratio);

  FUNC_0(VAR_1, " %8ld frames/s current tx rate (CTXR)\n",
    VAR_4->current_tx_rate);
  FUNC_0(VAR_1, " %8ld frames/s current rx rate (CRXR)\n",
    VAR_4->current_rx_rate);

  FUNC_1(VAR_1, '\n');

  FUNC_0(VAR_1, " %8ld %% max match ratio (MRXMR)\n",
    VAR_4->max_rx_match_ratio);

  FUNC_0(VAR_1, " %8ld frames/s max tx rate (MTXR)\n",
    VAR_4->max_tx_rate);
  FUNC_0(VAR_1, " %8ld frames/s max rx rate (MRXR)\n",
    VAR_4->max_rx_rate);

  FUNC_1(VAR_1, '\n');
 }

 FUNC_0(VAR_1, " %8ld current receive list entries (CRCV)\n",
   VAR_5->rcv_entries);
 FUNC_0(VAR_1, " %8ld maximum receive list entries (MRCV)\n",
   VAR_5->rcv_entries_max);

 if (VAR_5->stats_reset)
  FUNC_0(VAR_1, "\n %8ld statistic resets (STR)\n",
    VAR_5->stats_reset);

 if (VAR_5->user_reset)
  FUNC_0(VAR_1, " %8ld user statistic resets (USTR)\n",
    VAR_5->user_reset);

 FUNC_1(VAR_1, '\n');
 return 0;
}
