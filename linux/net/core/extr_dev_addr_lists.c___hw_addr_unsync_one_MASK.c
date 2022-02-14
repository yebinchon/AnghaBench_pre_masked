
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_hw_addr_list {int dummy; } ;
struct netdev_hw_addr {int sync_cnt; int type; int addr; } ;


 int FUNC_0 (struct netdev_hw_addr_list*,struct netdev_hw_addr*,int,int) ;
 int FUNC_1 (struct netdev_hw_addr_list*,int ,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct netdev_hw_addr_list *VAR_0,
     struct netdev_hw_addr_list *VAR_1,
     struct netdev_hw_addr *VAR_2,
     int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2->addr, VAR_3, VAR_2->type,
          0, 1);
 if (VAR_4)
  return;
 VAR_2->sync_cnt--;

 FUNC_0(VAR_1, VAR_2, 0, 0);
}
