
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct xfrm_if {TYPE_1__ p; } ;
struct net_device {int dummy; } ;


 struct xfrm_if* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_0)
{
 struct xfrm_if *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->p.link;
}
