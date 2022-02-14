
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct in_device*) ;

__attribute__((used)) static inline int FUNC_1(struct in_device *VAR_0,
    struct net_device *VAR_1, struct rtable *VAR_2,
    __be32 VAR_3, __be32 VAR_4)
{

 if (VAR_2->dst.dev != VAR_1)
  return 0;


 if (VAR_3 == VAR_4)
  return 0;

 if (FUNC_0(VAR_0))
  return 1;
 else
  return 0;
}
