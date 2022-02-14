
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_bridge_info {scalar_t__ orig_proto; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct nf_bridge_info* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sk_buff *VAR_2)
{
 const struct nf_bridge_info *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->orig_proto == VAR_0)
  return VAR_1;
 return 0;
}
