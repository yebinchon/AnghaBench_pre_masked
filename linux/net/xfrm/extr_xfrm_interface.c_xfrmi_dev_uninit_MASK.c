
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrmi_net {int dummy; } ;
struct xfrm_if {int net; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct xfrmi_net* FUNC_1 (int ,int ) ;
 struct xfrm_if* FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct xfrmi_net*,struct xfrm_if*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct xfrm_if *VAR_2 = FUNC_2(VAR_1);
 struct xfrmi_net *VAR_3 = FUNC_1(VAR_2->net, VAR_0);

 FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_1);
}
