
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrmi_net {int dummy; } ;
struct xfrm_if_parms {int dummy; } ;
struct xfrm_if {int dev; struct net* net; } ;
struct net {int dummy; } ;


 struct xfrmi_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xfrm_if*,struct xfrm_if_parms*) ;
 int FUNC_4 (struct xfrmi_net*,struct xfrm_if*) ;
 int VAR_0 ;
 int FUNC_5 (struct xfrmi_net*,struct xfrm_if*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_if *VAR_1, struct xfrm_if_parms *VAR_2)
{
 struct net *VAR_3 = VAR_1->net;
 struct xfrmi_net *VAR_4 = FUNC_0(VAR_3, VAR_0);
 int VAR_5;

 FUNC_5(VAR_4, VAR_1);
 FUNC_2();
 VAR_5 = FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_4, VAR_1);
 FUNC_1(VAR_1->dev);
 return VAR_5;
}
