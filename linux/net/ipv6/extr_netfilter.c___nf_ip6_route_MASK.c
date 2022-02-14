
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct ipv6_pinfo {int dummy; } ;
struct TYPE_3__ {int sk_bound_dev_if; } ;
struct inet_sock {struct ipv6_pinfo* pinet6; TYPE_1__ sk; } ;
struct TYPE_4__ {int ip6; } ;
struct flowi {TYPE_2__ u; } ;
struct dst_entry {int error; } ;


 int FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct net*,void const*,int *) ;

int FUNC_2(struct net *VAR_0, struct dst_entry **VAR_1,
     struct flowi *VAR_2, bool VAR_3)
{
 static const struct ipv6_pinfo VAR_4;
 static const struct inet_sock VAR_5 = {

  .sk.sk_bound_dev_if = 1,
  .pinet6 = (struct ipv6_pinfo *) &VAR_4,
 };
 const void *VAR_6 = VAR_3 ? &VAR_5 : ((void*)0);
 struct dst_entry *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_0, VAR_6, &VAR_2->u.ip6);
 VAR_8 = VAR_7->error;
 if (VAR_8)
  FUNC_0(VAR_7);
 else
  *VAR_1 = VAR_7;
 return VAR_8;
}
