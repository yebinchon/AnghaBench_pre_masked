
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef struct net_device net_device ;
struct genl_info {int dummy; } ;
struct TYPE_2__ {int llsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_3, struct genl_info *VAR_4,
      int (*VAR_5)(struct net_device*, struct genl_info*))
{
 struct net_device *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6)
  return -VAR_1;

 if (!FUNC_1(VAR_6)->llsec)
  VAR_7 = -VAR_2;
 else
  VAR_7 = VAR_5(VAR_6, VAR_4);

 FUNC_0(VAR_6);
 return VAR_7;
}
