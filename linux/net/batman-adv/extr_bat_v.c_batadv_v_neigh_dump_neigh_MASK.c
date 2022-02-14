
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int throughput; } ;
struct batadv_hardif_neigh_node {TYPE_3__* if_incoming; int addr; TYPE_1__ bat_v; scalar_t__ last_seen; } ;
struct TYPE_6__ {TYPE_2__* net_dev; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int,int,int *,int ,int ) ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_11, u32 VAR_12, u32 VAR_13,
     struct batadv_hardif_neigh_node *VAR_14)
{
 void *VAR_15;
 unsigned int VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_4(VAR_10 - VAR_14->last_seen);
 VAR_17 = FUNC_0(&VAR_14->bat_v.throughput);
 VAR_17 = VAR_17 * 100;

 VAR_15 = FUNC_3(VAR_11, VAR_12, VAR_13, &VAR_9, VAR_8,
     VAR_4);
 if (!VAR_15)
  return -VAR_6;

 if (FUNC_5(VAR_11, VAR_2, VAR_7,
      VAR_14->addr) ||
     FUNC_6(VAR_11, VAR_0,
   VAR_14->if_incoming->net_dev->ifindex) ||
     FUNC_6(VAR_11, VAR_1,
   VAR_16) ||
     FUNC_6(VAR_11, VAR_3, VAR_17))
  goto nla_put_failure;

 FUNC_2(VAR_11, VAR_15);
 return 0;

 nla_put_failure:
 FUNC_1(VAR_11, VAR_15);
 return -VAR_5;
}
