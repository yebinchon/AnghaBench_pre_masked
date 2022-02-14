
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mpls_link_stats {int dummy; } ;
struct mpls_dev {int dummy; } ;


 struct mpls_dev* FUNC_0 (struct net_device const*) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct net_device *VAR_0)
{
 struct mpls_dev *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;

 return FUNC_1(sizeof(struct mpls_link_stats));
}
