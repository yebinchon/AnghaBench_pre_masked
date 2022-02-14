
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_hardif_neigh_node {TYPE_2__* if_incoming; int addr; scalar_t__ last_seen; } ;
struct TYPE_4__ {TYPE_1__* net_dev; } ;
struct TYPE_3__ {unsigned int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_10, u32 VAR_11, u32 VAR_12,
          struct batadv_hardif_neigh_node *VAR_13)
{
 void *VAR_14;
 unsigned int VAR_15;

 VAR_15 = FUNC_3(VAR_9 - VAR_13->last_seen);

 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12, &VAR_8,
     VAR_7, VAR_3);
 if (!VAR_14)
  return -VAR_5;

 if (FUNC_4(VAR_10, VAR_2, VAR_6,
      VAR_13->addr) ||
     FUNC_5(VAR_10, VAR_0,
   VAR_13->if_incoming->net_dev->ifindex) ||
     FUNC_5(VAR_10, VAR_1,
   VAR_15))
  goto nla_put_failure;

 FUNC_1(VAR_10, VAR_14);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_10, VAR_14);
 return -VAR_4;
}
