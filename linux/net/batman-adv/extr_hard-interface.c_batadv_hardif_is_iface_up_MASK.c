
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const struct batadv_hard_iface *VAR_1)
{
 if (VAR_1->net_dev->flags & VAR_0)
  return 1;

 return 0;
}
