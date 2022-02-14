
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct can_rcv_lists_stats* rcv_lists_stats; struct can_pkg_stats* pkg_stats; } ;
struct net {TYPE_1__ can; } ;
struct can_rcv_lists_stats {int user_reset; int stats_reset; } ;
struct can_pkg_stats {int jiffies_init; } ;


 int VAR_0 ;
 int FUNC_0 (struct can_pkg_stats*,int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct net *VAR_2)
{
 struct can_pkg_stats *VAR_3 = VAR_2->can.pkg_stats;
 struct can_rcv_lists_stats *VAR_4 = VAR_2->can.rcv_lists_stats;





 FUNC_0(VAR_3, 0, sizeof(struct can_pkg_stats));
 VAR_3->jiffies_init = VAR_0;

 VAR_4->stats_reset++;

 if (VAR_1) {
  VAR_1 = 0;
  VAR_4->user_reset++;
 }
}
