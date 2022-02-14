
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_hw_addr_list {int count; int list; } ;
struct netdev_hw_addr {unsigned char type; int refcount; int global_use; int synced; int list; scalar_t__ sync_cnt; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netdev_hw_addr* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(struct netdev_hw_addr_list *VAR_3,
          const unsigned char *VAR_4, int VAR_5,
          unsigned char VAR_6, bool VAR_7,
          bool VAR_8)
{
 struct netdev_hw_addr *VAR_9;
 int VAR_10;

 VAR_10 = sizeof(*VAR_9);
 if (VAR_10 < VAR_2)
  VAR_10 = VAR_2;
 VAR_9 = FUNC_0(VAR_10, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 FUNC_2(VAR_9->addr, VAR_4, VAR_5);
 VAR_9->type = VAR_6;
 VAR_9->refcount = 1;
 VAR_9->global_use = VAR_7;
 VAR_9->synced = VAR_8 ? 1 : 0;
 VAR_9->sync_cnt = 0;
 FUNC_1(&VAR_9->list, &VAR_3->list);
 VAR_3->count++;

 return 0;
}
