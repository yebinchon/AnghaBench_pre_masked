
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ifindex; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 struct net* FUNC_1 (struct net_device const*,struct net*) ;
 scalar_t__ FUNC_2 (struct net_device const*,struct net*,struct net_device*,struct net*) ;
 scalar_t__ FUNC_3 (struct net_device const*) ;
 scalar_t__ FUNC_4 (struct net_device const*) ;
 struct net* FUNC_5 (struct net_device const*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool FUNC_7(const struct net_device *VAR_0)
{
 struct net *VAR_1 = FUNC_5(VAR_0);
 struct net_device *VAR_2;
 struct net *VAR_3;
 bool VAR_4;


 if (FUNC_3(VAR_0))
  return 1;


 if (FUNC_4(VAR_0) == 0 ||
     FUNC_4(VAR_0) == VAR_0->ifindex)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1);


 VAR_2 = FUNC_0((struct net *)VAR_3,
     FUNC_4(VAR_0));

 if (!VAR_2) {
  FUNC_6("Cannot find parent device\n");
  return 0;
 }

 if (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3))
  return 0;

 VAR_4 = FUNC_7(VAR_2);

 return VAR_4;
}
