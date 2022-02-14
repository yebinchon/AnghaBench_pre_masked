
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int dst; } ;
struct TYPE_2__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct net *VAR_0, struct rt6_info **VAR_1)
{
 struct rt6_info *VAR_2 = *VAR_1;

 if (FUNC_1(&VAR_2->dst))
  return 1;
 if (VAR_0) {
  VAR_2 = VAR_0->ipv6.ip6_null_entry;
  FUNC_0(&VAR_2->dst);
 } else {
  VAR_2 = ((void*)0);
 }
 *VAR_1 = VAR_2;
 return 0;
}
