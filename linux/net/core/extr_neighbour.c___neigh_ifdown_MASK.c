
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neigh_table {int proxy_queue; int proxy_timer; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct neigh_table*,struct net_device*,int) ;
 int FUNC_2 (struct neigh_table*,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct neigh_table *VAR_0, struct net_device *VAR_1,
     bool VAR_2)
{
 FUNC_4(&VAR_0->lock);
 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_1);

 FUNC_0(&VAR_0->proxy_timer);
 FUNC_3(&VAR_0->proxy_queue);
 return 0;
}
