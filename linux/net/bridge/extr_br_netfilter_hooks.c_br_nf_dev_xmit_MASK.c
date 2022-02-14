
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_bridge_info {scalar_t__ bridged_dnat; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0)
{
 const struct nf_bridge_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 && VAR_1->bridged_dnat) {
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
