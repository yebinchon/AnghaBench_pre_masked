
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_addrtype_info {int invert_source; int invert_dest; scalar_t__ dest; scalar_t__ source; } ;
struct xt_action_param {struct xt_addrtype_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;


 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct net*,int *,int ,scalar_t__) ;
 struct net* FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_1);
 const struct xt_addrtype_info *VAR_3 = VAR_1->matchinfo;
 const struct iphdr *VAR_4 = FUNC_0(VAR_0);
 bool VAR_5 = 1;

 if (VAR_3->source)
  VAR_5 &= FUNC_1(VAR_2, ((void*)0), VAR_4->saddr, VAR_3->source) ^
         VAR_3->invert_source;
 if (VAR_3->dest)
  VAR_5 &= FUNC_1(VAR_2, ((void*)0), VAR_4->daddr, VAR_3->dest) ^
         VAR_3->invert_dest;

 return VAR_5;
}
