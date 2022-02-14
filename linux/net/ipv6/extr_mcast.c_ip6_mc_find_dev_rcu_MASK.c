
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct rt6_info {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_dev {int lock; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;


 struct inet6_dev* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct rt6_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct rt6_info* FUNC_5 (struct net*,struct in6_addr const*,int *,int ,int *,int ) ;

__attribute__((used)) static struct inet6_dev *FUNC_6(struct net *VAR_0,
          const struct in6_addr *VAR_1,
          int VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 struct inet6_dev *VAR_4 = ((void*)0);

 if (VAR_2 == 0) {
  struct rt6_info *VAR_5 = FUNC_5(VAR_0, VAR_1, ((void*)0), 0, ((void*)0), 0);

  if (VAR_5) {
   VAR_3 = VAR_5->dst.dev;
   FUNC_2(VAR_5);
  }
 } else
  VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_3(&VAR_4->lock);
 if (VAR_4->dead) {
  FUNC_4(&VAR_4->lock);
  return ((void*)0);
 }
 return VAR_4;
}
