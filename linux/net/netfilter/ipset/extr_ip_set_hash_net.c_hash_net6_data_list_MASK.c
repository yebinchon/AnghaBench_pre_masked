
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int in6; } ;
struct hash_net6_elem {int cidr; TYPE_1__ ip; scalar_t__ nomatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(struct sk_buff *VAR_4, const struct hash_net6_elem *VAR_5)
{
 u32 VAR_6 = VAR_5->nomatch ? VAR_3 : 0;

 if (FUNC_1(VAR_4, VAR_2, &VAR_5->ip.in6) ||
     FUNC_3(VAR_4, VAR_1, VAR_5->cidr) ||
     (VAR_6 &&
      FUNC_2(VAR_4, VAR_0, FUNC_0(VAR_6))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
