
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_hw_addr_list {int dummy; } ;
struct netdev_hw_addr {int refcount; int sync_cnt; int type; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdev_hw_addr_list*,int ,int,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct netdev_hw_addr_list *VAR_1,
          struct netdev_hw_addr *VAR_2,
          int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2->addr, VAR_3, VAR_2->type,
          0, 1, VAR_2->sync_cnt);
 if (VAR_4 && VAR_4 != -VAR_0)
  return VAR_4;

 if (!VAR_4) {
  VAR_2->sync_cnt++;
  VAR_2->refcount++;
 }

 return 0;
}
