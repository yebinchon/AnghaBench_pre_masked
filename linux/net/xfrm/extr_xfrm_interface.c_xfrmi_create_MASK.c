
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrmi_net {int dummy; } ;
struct xfrm_if {int dummy; } ;
struct net_device {int * rtnl_link_ops; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct net* FUNC_1 (struct net_device*) ;
 struct xfrmi_net* FUNC_2 (struct net*,int ) ;
 struct xfrm_if* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct xfrmi_net*,struct xfrm_if*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct xfrm_if *VAR_3 = FUNC_3(VAR_2);
 struct net *VAR_4 = FUNC_1(VAR_2);
 struct xfrmi_net *VAR_5 = FUNC_2(VAR_4, VAR_1);
 int VAR_6;

 VAR_2->rtnl_link_ops = &VAR_0;
 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6 < 0)
  goto out;

 FUNC_0(VAR_2);
 FUNC_5(VAR_5, VAR_3);

 return 0;

out:
 return VAR_6;
}
