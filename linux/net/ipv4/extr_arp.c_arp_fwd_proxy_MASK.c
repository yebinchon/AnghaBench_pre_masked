
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct in_device*) ;
 struct in_device* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_3(struct in_device *VAR_0,
    struct net_device *VAR_1, struct rtable *VAR_2)
{
 struct in_device *VAR_3;
 int VAR_4, VAR_5 = -1;

 if (VAR_2->dst.dev == VAR_1)
  return 0;

 if (!FUNC_1(VAR_0))
  return 0;
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 == 0)
  return 1;
 if (VAR_4 == -1)
  return 0;



 VAR_3 = FUNC_2(VAR_2->dst.dev);
 if (VAR_3)
  VAR_5 = FUNC_0(VAR_3);

 return VAR_5 != VAR_4 && VAR_5 != -1;
}
