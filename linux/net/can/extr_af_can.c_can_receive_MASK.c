
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct can_dev_rcv_lists* rx_alldev_list; struct can_pkg_stats* pkg_stats; } ;
struct net {TYPE_1__ can; } ;
struct can_pkg_stats {int matches_delta; int matches; int rx_frames_delta; int rx_frames; } ;
struct can_dev_rcv_lists {int dummy; } ;
struct TYPE_4__ {scalar_t__ skbcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct can_dev_rcv_lists* FUNC_1 (struct net*,struct net_device*) ;
 int FUNC_2 (struct can_dev_rcv_lists*,struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct net* FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct can_dev_rcv_lists *VAR_3;
 struct net *VAR_4 = FUNC_5(VAR_2);
 struct can_pkg_stats *VAR_5 = VAR_4->can.pkg_stats;
 int VAR_6;


 VAR_5->rx_frames++;
 VAR_5->rx_frames_delta++;


 while (!(FUNC_3(VAR_1)->skbcnt))
  FUNC_3(VAR_1)->skbcnt = FUNC_0(&VAR_0);

 FUNC_6();


 VAR_6 = FUNC_2(VAR_4->can.rx_alldev_list, VAR_1);


 VAR_3 = FUNC_1(VAR_4, VAR_2);
 VAR_6 += FUNC_2(VAR_3, VAR_1);

 FUNC_7();


 FUNC_4(VAR_1);

 if (VAR_6 > 0) {
  VAR_5->matches++;
  VAR_5->matches_delta++;
 }
}
