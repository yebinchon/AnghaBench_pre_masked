
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int in6; } ;
struct TYPE_4__ {int in6; } ;
struct hash_ipportnet6_elem {scalar_t__ proto; scalar_t__ cidr; int port; TYPE_1__ ip2; TYPE_2__ ip; scalar_t__ nomatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_7,
     const struct hash_ipportnet6_elem *VAR_8)
{
 u32 VAR_9 = VAR_8->nomatch ? VAR_6 : 0;

 if (FUNC_1(VAR_7, VAR_2, &VAR_8->ip.in6) ||
     FUNC_1(VAR_7, VAR_3, &VAR_8->ip2.in6) ||
     FUNC_2(VAR_7, VAR_4, VAR_8->port) ||
     FUNC_4(VAR_7, VAR_1, VAR_8->cidr + 1) ||
     FUNC_4(VAR_7, VAR_5, VAR_8->proto) ||
     (VAR_9 &&
      FUNC_3(VAR_7, VAR_0, FUNC_0(VAR_9))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
