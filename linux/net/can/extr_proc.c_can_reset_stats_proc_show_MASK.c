
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_3__ {scalar_t__ function; } ;
struct TYPE_4__ {TYPE_1__ stattimer; struct can_pkg_stats* pkg_stats; struct can_rcv_lists_stats* rcv_lists_stats; } ;
struct net {TYPE_2__ can; } ;
struct can_rcv_lists_stats {scalar_t__ stats_reset; } ;
struct can_pkg_stats {scalar_t__ jiffies_init; } ;


 int FUNC_0 (struct net*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct net *VAR_5 = VAR_3->private;
 struct can_rcv_lists_stats *VAR_6 = VAR_5->can.rcv_lists_stats;
 struct can_pkg_stats *VAR_7 = VAR_5->can.pkg_stats;

 VAR_2 = 1;

 if (VAR_5->can.stattimer.function == VAR_0) {
  FUNC_1(VAR_3, "Scheduled statistic reset #%ld.\n",
    VAR_6->stats_reset + 1);
 } else {
  if (VAR_7->jiffies_init != VAR_1)
   FUNC_0(VAR_5);

  FUNC_1(VAR_3, "Performed statistic reset #%ld.\n",
    VAR_6->stats_reset);
 }
 return 0;
}
