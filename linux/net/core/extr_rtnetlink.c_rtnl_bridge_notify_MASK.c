
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* ndo_bridge_getlink ) (struct sk_buff*,int ,int ,struct net_device*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int ,int ,struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct net *VAR_6 = FUNC_2(VAR_5);
 struct sk_buff *VAR_7;
 int VAR_8 = -VAR_2;

 if (!VAR_5->netdev_ops->ndo_bridge_getlink)
  return 0;

 VAR_7 = FUNC_4(FUNC_1(), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto errout;
 }

 VAR_8 = VAR_5->netdev_ops->ndo_bridge_getlink(VAR_7, 0, 0, VAR_5, 0, 0);
 if (VAR_8 < 0)
  goto errout;

 if (!VAR_7->len)
  goto errout;

 FUNC_5(VAR_7, VAR_6, 0, VAR_4, ((void*)0), VAR_3);
 return 0;
errout:
 FUNC_0(VAR_8 == -VAR_0);
 FUNC_3(VAR_7);
 if (VAR_8)
  FUNC_6(VAR_6, VAR_4, VAR_8);
 return VAR_8;
}
