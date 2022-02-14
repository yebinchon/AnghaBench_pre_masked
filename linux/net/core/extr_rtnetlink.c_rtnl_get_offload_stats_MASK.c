
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_get_offload_stats ) (int,struct net_device*,void*) ;int (* ndo_has_offload_stats ) (struct net_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (int,struct net_device*,void*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, struct net_device *VAR_6,
      int *VAR_7)
{
 struct nlattr *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 void *VAR_11;
 int VAR_12;

 if (!(VAR_6->netdev_ops && VAR_6->netdev_ops->ndo_has_offload_stats &&
       VAR_6->netdev_ops->ndo_get_offload_stats))
  return -VAR_1;

 for (VAR_9 = VAR_2;
      VAR_9 <= VAR_3; VAR_9++) {
  if (VAR_9 < *VAR_7)
   continue;

  VAR_10 = FUNC_3(VAR_9);
  if (!VAR_10)
   continue;

  if (!VAR_6->netdev_ops->ndo_has_offload_stats(VAR_6, VAR_9))
   continue;

  VAR_8 = FUNC_2(VAR_5, VAR_9, VAR_10,
      VAR_4);
  if (!VAR_8)
   goto nla_put_failure;

  VAR_11 = FUNC_1(VAR_8);
  FUNC_0(VAR_11, 0, VAR_10);
  VAR_12 = VAR_6->netdev_ops->ndo_get_offload_stats(VAR_9, VAR_6,
            VAR_11);
  if (VAR_12)
   goto get_offload_stats_failure;
 }

 if (!VAR_8)
  return -VAR_1;

 *VAR_7 = 0;
 return 0;

nla_put_failure:
 VAR_12 = -VAR_0;
get_offload_stats_failure:
 *VAR_7 = VAR_9;
 return VAR_12;
}
