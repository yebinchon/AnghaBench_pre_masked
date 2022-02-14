
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int link_watch_list; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1, VAR_3);
 if (FUNC_2(&VAR_2->link_watch_list)) {
  FUNC_1(&VAR_2->link_watch_list, &VAR_0);
  FUNC_0(VAR_2);
 }
 FUNC_4(&VAR_1, VAR_3);
}
