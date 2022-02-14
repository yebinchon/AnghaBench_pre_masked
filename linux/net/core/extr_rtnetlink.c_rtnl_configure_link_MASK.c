
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int flags; scalar_t__ rtnl_link_state; } ;
struct ifinfomsg {scalar_t__ ifi_change; scalar_t__ ifi_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int *) ;
 int FUNC_1 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct net_device*,struct ifinfomsg const*) ;

int FUNC_3(struct net_device *VAR_1, const struct ifinfomsg *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->flags;
 if (VAR_2 && (VAR_2->ifi_flags || VAR_2->ifi_change)) {
  VAR_4 = FUNC_0(VAR_1, FUNC_2(VAR_1, VAR_2),
      ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (VAR_1->rtnl_link_state == VAR_0) {
  FUNC_1(VAR_1, VAR_3, (VAR_3 ^ VAR_1->flags));
 } else {
  VAR_1->rtnl_link_state = VAR_0;
  FUNC_1(VAR_1, VAR_3, ~0U);
 }
 return 0;
}
