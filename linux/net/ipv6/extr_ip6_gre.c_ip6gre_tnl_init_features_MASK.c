
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int features; int hw_features; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {int o_flags; } ;
struct ip6_tnl {TYPE_1__ encap; TYPE_2__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ip6_tnl* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{
 struct ip6_tnl *VAR_7 = FUNC_0(VAR_6);

 VAR_6->features |= VAR_0;
 VAR_6->hw_features |= VAR_0;

 if (!(VAR_7->parms.o_flags & VAR_5)) {




  if (!(VAR_7->parms.o_flags & VAR_3) ||
      VAR_7->encap.type == VAR_4) {
   VAR_6->features |= VAR_1;
   VAR_6->hw_features |= VAR_1;
  }




  VAR_6->features |= VAR_2;
 }
}
