
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcv_lists_stats; int pkg_stats; int rx_alldev_list; int stattimer; } ;
struct net {TYPE_1__ can; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net *VAR_2)
{
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_2);
  if (VAR_1)
   FUNC_2(&VAR_2->can.stattimer);
 }

 FUNC_3(VAR_2->can.rx_alldev_list);
 FUNC_3(VAR_2->can.pkg_stats);
 FUNC_3(VAR_2->can.rcv_lists_stats);
}
