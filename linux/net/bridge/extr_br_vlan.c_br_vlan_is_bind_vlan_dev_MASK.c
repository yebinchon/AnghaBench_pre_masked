
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_1)
{
 return FUNC_0(VAR_1) &&
  !!(FUNC_1(VAR_1)->flags & VAR_0);
}
