
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct brnf_net {scalar_t__ filter_vlan_tagged; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct brnf_net* FUNC_1 (struct net const*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct sk_buff *VAR_2, const struct net *VAR_3)
{
 struct brnf_net *VAR_4 = FUNC_1(VAR_3, VAR_1);

 return FUNC_2(VAR_2) == FUNC_0(VAR_0) && VAR_4->filter_vlan_tagged;
}
