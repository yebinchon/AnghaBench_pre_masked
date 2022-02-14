
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mpls_route {int dummy; } ;
struct mpls_nh {int nh_via_table; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;



 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,int ) ;
 struct net_device* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct mpls_route*,struct mpls_nh*) ;

__attribute__((used)) static struct net_device *FUNC_7(struct net *VAR_1,
          struct mpls_route *VAR_2,
          struct mpls_nh *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = ((void*)0);

 if (!VAR_4) {
  switch (VAR_3->nh_via_table) {
  case 130:
   VAR_5 = FUNC_5(VAR_1, FUNC_6(VAR_2, VAR_3));
   break;
  case 128:
   VAR_5 = FUNC_4(VAR_1, FUNC_6(VAR_2, VAR_3));
   break;
  case 129:
   break;
  }
 } else {
  VAR_5 = FUNC_2(VAR_1, VAR_4);
 }

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (FUNC_1(VAR_5))
  return VAR_5;


 FUNC_3(VAR_5);

 return VAR_5;
}
