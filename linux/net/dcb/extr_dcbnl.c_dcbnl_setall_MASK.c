
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
struct TYPE_2__ {int (* setall ) (struct net_device*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,size_t,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, struct nlmsghdr *VAR_6,
   u32 VAR_7, struct nlattr **VAR_8, struct sk_buff *VAR_9)
{
 int VAR_10;

 if (!VAR_8[VAR_0])
  return -VAR_2;

 if (!VAR_5->dcbnl_ops->setall)
  return -VAR_3;

 VAR_10 = FUNC_1(VAR_9, VAR_0,
    VAR_5->dcbnl_ops->setall(VAR_5));
 FUNC_0(VAR_5, VAR_4, VAR_1, VAR_7, 0);

 return VAR_10;
}
