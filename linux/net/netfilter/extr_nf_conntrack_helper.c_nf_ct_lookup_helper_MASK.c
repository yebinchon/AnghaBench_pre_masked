
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_conntrack_helper {int dummy; } ;
struct nf_conn {TYPE_2__* tuplehash; } ;
struct TYPE_3__ {int auto_assign_helper_warned; int sysctl_auto_assign_helper; } ;
struct net {TYPE_1__ ct; } ;
struct TYPE_4__ {int tuple; } ;


 size_t VAR_0 ;
 struct nf_conntrack_helper* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct nf_conntrack_helper *
FUNC_2(struct nf_conn *VAR_1, struct net *VAR_2)
{
 if (!VAR_2->ct.sysctl_auto_assign_helper) {
  if (VAR_2->ct.auto_assign_helper_warned)
   return ((void*)0);
  if (!FUNC_0(&VAR_1->tuplehash[VAR_0].tuple))
   return ((void*)0);
  FUNC_1("nf_conntrack: default automatic helper assignment "
   "has been turned off for security reasons and CT-based "
   " firewall rule not found. Use the iptables CT target "
   "to attach helpers instead.\n");
  VAR_2->ct.auto_assign_helper_warned = 1;
  return ((void*)0);
 }

 return FUNC_0(&VAR_1->tuplehash[VAR_0].tuple);
}
