
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct batadv_hard_iface {int * debug_dir; int net_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct net* FUNC_1 (int ) ;
 struct net VAR_1 ;

void FUNC_2(struct batadv_hard_iface *VAR_2)
{
 struct net *VAR_3 = FUNC_1(VAR_2->net_dev);

 if (VAR_3 != &VAR_1)
  return;

 if (VAR_0) {
  FUNC_0(VAR_2->debug_dir);
  VAR_2->debug_dir = ((void*)0);
 }
}
