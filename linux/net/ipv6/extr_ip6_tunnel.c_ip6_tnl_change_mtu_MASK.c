
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int hard_header_len; int mtu; } ;
struct TYPE_2__ {scalar_t__ proto; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ip6_tnl* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_6, int VAR_7)
{
 struct ip6_tnl *VAR_8 = FUNC_0(VAR_6);

 if (VAR_8->parms.proto == VAR_3) {
  if (VAR_7 < VAR_4)
   return -VAR_0;
 } else {
  if (VAR_7 < VAR_1)
   return -VAR_0;
 }
 if (VAR_8->parms.proto == VAR_3 || VAR_8->parms.proto == 0) {
  if (VAR_7 > VAR_2 - VAR_6->hard_header_len)
   return -VAR_0;
 } else {
  if (VAR_7 > VAR_5 - VAR_6->hard_header_len)
   return -VAR_0;
 }
 VAR_6->mtu = VAR_7;
 return 0;
}
