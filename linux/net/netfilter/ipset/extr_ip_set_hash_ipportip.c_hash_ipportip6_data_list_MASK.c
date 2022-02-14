
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int in6; } ;
struct TYPE_3__ {int in6; } ;
struct hash_ipportip6_elem {int proto; int port; TYPE_2__ ip2; TYPE_1__ ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_4,
    const struct hash_ipportip6_elem *VAR_5)
{
 if (FUNC_0(VAR_4, VAR_0, &VAR_5->ip.in6) ||
     FUNC_0(VAR_4, VAR_1, &VAR_5->ip2.in6) ||
     FUNC_1(VAR_4, VAR_2, VAR_5->port) ||
     FUNC_2(VAR_4, VAR_3, VAR_5->proto))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
