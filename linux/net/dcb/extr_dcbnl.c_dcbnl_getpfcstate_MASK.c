
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* getpfcstate ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct nlmsghdr *VAR_3,
        u32 VAR_4, struct nlattr **VAR_5, struct sk_buff *VAR_6)
{
 if (!VAR_2->dcbnl_ops->getpfcstate)
  return -VAR_1;

 return FUNC_0(VAR_6, VAR_0,
     VAR_2->dcbnl_ops->getpfcstate(VAR_2));
}
