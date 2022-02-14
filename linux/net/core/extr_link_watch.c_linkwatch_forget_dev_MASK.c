
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int link_watch_list; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_3(&VAR_0, VAR_2);
 if (!FUNC_2(&VAR_1->link_watch_list)) {
  FUNC_1(&VAR_1->link_watch_list);
  VAR_3 = 1;
 }
 FUNC_4(&VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1);
}
