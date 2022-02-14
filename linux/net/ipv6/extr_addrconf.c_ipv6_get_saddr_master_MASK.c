
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_saddr_score {int dummy; } ;
struct ipv6_saddr_dst {int dummy; } ;
struct inet6_dev {int dummy; } ;


 struct inet6_dev* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net*,struct ipv6_saddr_dst*,struct inet6_dev*,struct ipv6_saddr_score*,int) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0,
     const struct net_device *VAR_1,
     const struct net_device *VAR_2,
     struct ipv6_saddr_dst *VAR_3,
     struct ipv6_saddr_score *VAR_4,
     int VAR_5)
{
 struct inet6_dev *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6)
  VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_6,
         VAR_4, VAR_5);

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6)
  VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_6,
         VAR_4, VAR_5);

 return VAR_5;
}
