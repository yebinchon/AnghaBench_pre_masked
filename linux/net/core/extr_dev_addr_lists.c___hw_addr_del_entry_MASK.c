
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_hw_addr_list {int count; } ;
struct netdev_hw_addr {int global_use; int list; scalar_t__ refcount; int synced; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdev_hw_addr*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct netdev_hw_addr_list *VAR_2,
          struct netdev_hw_addr *VAR_3, bool VAR_4,
          bool VAR_5)
{
 if (VAR_4 && !VAR_3->global_use)
  return -VAR_0;

 if (VAR_5 && !VAR_3->synced)
  return -VAR_0;

 if (VAR_4)
  VAR_3->global_use = 0;

 if (VAR_5)
  VAR_3->synced--;

 if (--VAR_3->refcount)
  return 0;
 FUNC_1(&VAR_3->list);
 FUNC_0(VAR_3, VAR_1);
 VAR_2->count--;
 return 0;
}
