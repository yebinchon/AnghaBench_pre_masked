
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ipmark4_elem {int mark; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_2,
         const struct hash_ipmark4_elem *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_0, VAR_3->ip) ||
     FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_3->mark)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
