
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* setstate ) (struct net_device*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,size_t,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct nlmsghdr *VAR_4,
     u32 VAR_5, struct nlattr **VAR_6, struct sk_buff *VAR_7)
{
 u8 VAR_8;

 if (!VAR_6[VAR_0])
  return -VAR_1;

 if (!VAR_3->dcbnl_ops->setstate)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_6[VAR_0]);

 return FUNC_1(VAR_7, VAR_0,
     VAR_3->dcbnl_ops->setstate(VAR_3, VAR_8));
}
