
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (struct net_device const*,struct net*) ;
 int FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct net const*,struct net*) ;

__attribute__((used)) static bool FUNC_3(const struct net_device *VAR_0,
      struct net *VAR_1,
      const struct net_device *VAR_2,
      struct net *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = FUNC_1(VAR_2);
 const struct net *VAR_6;
 const struct net *VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_1);
 VAR_7 = FUNC_0(VAR_2, VAR_3);

 if (!VAR_4 || !VAR_5)
  return 0;

 return (VAR_4 == VAR_2->ifindex) &&
        (VAR_5 == VAR_0->ifindex) &&
        FUNC_2(VAR_6, VAR_3) &&
        FUNC_2(VAR_7, VAR_1);
}
