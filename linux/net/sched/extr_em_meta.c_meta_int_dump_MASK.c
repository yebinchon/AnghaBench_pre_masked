
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct meta_value {int len; int val; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,int,int,int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct meta_value *VAR_1, int VAR_2)
{
 if (VAR_1->len == sizeof(unsigned long)) {
  if (FUNC_0(VAR_0, VAR_2, sizeof(unsigned long), &VAR_1->val))
   goto nla_put_failure;
 } else if (VAR_1->len == sizeof(u32)) {
  if (FUNC_1(VAR_0, VAR_2, VAR_1->val))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -1;
}
