
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int in6; } ;
struct hash_ipmac6_elem {int ether; TYPE_1__ ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;

__attribute__((used)) static bool
FUNC_2(struct sk_buff *VAR_3, const struct hash_ipmac6_elem *VAR_4)
{
 if (FUNC_1(VAR_3, VAR_2, &VAR_4->ip.in6) ||
     FUNC_0(VAR_3, VAR_1, VAR_0, VAR_4->ether))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
