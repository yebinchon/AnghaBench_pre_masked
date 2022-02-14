
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ip4_elem {int ip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct sk_buff *VAR_1, const struct hash_ip4_elem *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_0, VAR_2->ip))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
