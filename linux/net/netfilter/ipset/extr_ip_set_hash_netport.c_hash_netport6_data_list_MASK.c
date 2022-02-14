
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int in6; } ;
struct hash_netport6_elem {scalar_t__ proto; scalar_t__ cidr; int port; TYPE_1__ ip; scalar_t__ nomatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_6,
   const struct hash_netport6_elem *VAR_7)
{
 u32 VAR_8 = VAR_7->nomatch ? VAR_5 : 0;

 if (FUNC_1(VAR_6, VAR_2, &VAR_7->ip.in6) ||
     FUNC_2(VAR_6, VAR_3, VAR_7->port) ||
     FUNC_4(VAR_6, VAR_1, VAR_7->cidr + 1) ||
     FUNC_4(VAR_6, VAR_4, VAR_7->proto) ||
     (VAR_8 &&
      FUNC_3(VAR_6, VAR_0, FUNC_0(VAR_8))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
