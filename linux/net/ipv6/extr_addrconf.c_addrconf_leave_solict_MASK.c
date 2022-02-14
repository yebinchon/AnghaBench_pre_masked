
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_dev {TYPE_1__* dev; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inet6_dev*,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr const*,struct in6_addr*) ;

void FUNC_2(struct inet6_dev *VAR_2, const struct in6_addr *VAR_3)
{
 struct in6_addr VAR_4;

 if (VAR_2->dev->flags&(VAR_0|VAR_1))
  return;

 FUNC_1(VAR_3, &VAR_4);
 FUNC_0(VAR_2, &VAR_4);
}
