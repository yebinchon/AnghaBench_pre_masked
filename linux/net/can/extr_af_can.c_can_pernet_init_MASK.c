
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* rx_alldev_list; TYPE_2__* pkg_stats; int stattimer; void* rcv_lists_stats; int rcvlists_lock; } ;
struct net {TYPE_1__ can; } ;
struct TYPE_4__ {scalar_t__ jiffies_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_7)
{
 FUNC_6(&VAR_7->can.rcvlists_lock);
 VAR_7->can.rx_alldev_list =
  FUNC_3(sizeof(*VAR_7->can.rx_alldev_list), VAR_2);
 if (!VAR_7->can.rx_alldev_list)
  goto out;
 VAR_7->can.pkg_stats = FUNC_3(sizeof(*VAR_7->can.pkg_stats), VAR_2);
 if (!VAR_7->can.pkg_stats)
  goto out_free_rx_alldev_list;
 VAR_7->can.rcv_lists_stats = FUNC_3(sizeof(*VAR_7->can.rcv_lists_stats), VAR_2);
 if (!VAR_7->can.rcv_lists_stats)
  goto out_free_pkg_stats;

 if (FUNC_0(VAR_0)) {

  if (VAR_6) {
   FUNC_7(&VAR_7->can.stattimer, VAR_4,
        0);
   FUNC_4(&VAR_7->can.stattimer,
      FUNC_5(VAR_5 + VAR_3));
  }
  VAR_7->can.pkg_stats->jiffies_init = VAR_5;
  FUNC_1(VAR_7);
 }

 return 0;

 out_free_pkg_stats:
 FUNC_2(VAR_7->can.pkg_stats);
 out_free_rx_alldev_list:
 FUNC_2(VAR_7->can.rx_alldev_list);
 out:
 return -VAR_1;
}
