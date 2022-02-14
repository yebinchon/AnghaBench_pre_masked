
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct net_device {scalar_t__ type; int mc; int uc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct netlink_callback*,struct net_device*,int*,int *) ;

int FUNC_3(struct sk_buff *VAR_2,
        struct netlink_callback *VAR_3,
        struct net_device *VAR_4,
        struct net_device *VAR_5,
        int *VAR_6)
{
 int VAR_7;

 if (VAR_4->type != VAR_0)
  return -VAR_1;

 FUNC_0(VAR_4);
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6, &VAR_4->uc);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6, &VAR_4->mc);
out:
 FUNC_1(VAR_4);
 return VAR_7;
}
