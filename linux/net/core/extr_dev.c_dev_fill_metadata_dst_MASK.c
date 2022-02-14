
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct ip_tunnel_info {int mode; } ;
struct TYPE_2__ {int (* ndo_fill_metadata_dst ) (struct net_device*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ip_tunnel_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct net_device *VAR_3, struct sk_buff *VAR_4)
{
 struct ip_tunnel_info *VAR_5;

 if (!VAR_3->netdev_ops || !VAR_3->netdev_ops->ndo_fill_metadata_dst)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_1;
 if (FUNC_2(!(VAR_5->mode & VAR_2)))
  return -VAR_0;

 return VAR_3->netdev_ops->ndo_fill_metadata_dst(VAR_3, VAR_4);
}
