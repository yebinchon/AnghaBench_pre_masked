
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifinfomsg {unsigned int ifi_flags; int ifi_change; } ;


 unsigned int FUNC_0 (struct net_device const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct net_device *VAR_0,
        const struct ifinfomsg *VAR_1)
{
 unsigned int VAR_2 = VAR_1->ifi_flags;


 if (VAR_1->ifi_change)
  VAR_2 = (VAR_2 & VAR_1->ifi_change) |
   (FUNC_0(VAR_0) & ~VAR_1->ifi_change);

 return VAR_2;
}
