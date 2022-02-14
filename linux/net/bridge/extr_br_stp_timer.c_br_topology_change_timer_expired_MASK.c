
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_bridge {int lock; scalar_t__ topology_change_detected; } ;


 int FUNC_0 (struct net_bridge*,int ) ;
 struct net_bridge* VAR_0 ;
 int FUNC_1 (struct net_bridge*,char*) ;
 struct net_bridge* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);

 FUNC_1(VAR_3, "topo change timer expired\n");
 FUNC_3(&VAR_3->lock);
 VAR_3->topology_change_detected = 0;
 FUNC_0(VAR_3, 0);
 FUNC_4(&VAR_3->lock);
}
