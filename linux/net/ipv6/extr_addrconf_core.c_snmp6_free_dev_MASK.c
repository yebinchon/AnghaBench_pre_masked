
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipv6; int icmpv6dev; int icmpv6msgdev; } ;
struct inet6_dev {TYPE_1__ stats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inet6_dev *VAR_0)
{
 FUNC_1(VAR_0->stats.icmpv6msgdev);
 FUNC_1(VAR_0->stats.icmpv6dev);
 FUNC_0(VAR_0->stats.ipv6);
}
