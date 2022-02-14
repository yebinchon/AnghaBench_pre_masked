
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
typedef int perm_addr ;
struct TYPE_2__ {int (* getpermhwaddr ) (struct net_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,int,int *) ;
 int FUNC_2 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct nlmsghdr *VAR_4,
    u32 VAR_5, struct nlattr **VAR_6, struct sk_buff *VAR_7)
{
 u8 VAR_8[VAR_2];

 if (!VAR_3->dcbnl_ops->getpermhwaddr)
  return -VAR_1;

 FUNC_0(VAR_8, 0, sizeof(VAR_8));
 VAR_3->dcbnl_ops->getpermhwaddr(VAR_3, VAR_8);

 return FUNC_1(VAR_7, VAR_0, sizeof(VAR_8), VAR_8);
}
