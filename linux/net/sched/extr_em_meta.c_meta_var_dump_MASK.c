
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct meta_value {scalar_t__ val; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,int,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, struct meta_value *VAR_1, int VAR_2)
{
 if (VAR_1->val && VAR_1->len &&
     FUNC_0(VAR_0, VAR_2, VAR_1->len, (void *) VAR_1->val))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
