
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int unreg_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0, struct list_head *VAR_1)
{
 FUNC_0();

 if (VAR_1) {
  FUNC_1(&VAR_0->unreg_list, VAR_1);
 } else {
  FUNC_3(VAR_0);

  FUNC_2(VAR_0);
 }
}
