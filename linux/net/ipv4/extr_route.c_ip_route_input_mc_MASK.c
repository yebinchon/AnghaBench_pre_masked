
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int input; int output; int tclassid; } ;
struct rtable {int rt_is_input; TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int loopback_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct in_device*,int ) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct in_device* FUNC_3 (struct net_device*) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,struct net_device*,struct in_device*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 struct rtable* FUNC_7 (int ,unsigned int,int ,int ,int,int) ;
 int FUNC_8 (struct sk_buff*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, __be32 VAR_9, __be32 VAR_10,
        u8 VAR_11, struct net_device *VAR_12, int VAR_13)
{
 struct in_device *VAR_14 = FUNC_3(VAR_12);
 unsigned int VAR_15 = VAR_3;
 struct rtable *VAR_16;
 u32 VAR_17 = 0;
 int VAR_18;

 VAR_18 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_14, &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (VAR_13)
  VAR_15 |= VAR_2;

 VAR_16 = FUNC_7(FUNC_4(VAR_12)->loopback_dev, VAR_15, VAR_4,
      FUNC_0(VAR_14, VAR_1), 0, 0);
 if (!VAR_16)
  return -VAR_0;




 VAR_16->dst.output = VAR_7;
 VAR_16->rt_is_input= 1;





 FUNC_2(VAR_5);

 FUNC_8(VAR_8, &VAR_16->dst);
 return 0;
}
