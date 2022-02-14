
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_tnl_parm {int name; int proto; int link; int flowinfo; int encap_limit; int hop_limit; int flags; int raddr; int laddr; } ;
struct __ip6_tnl_parm {int name; int proto; int link; int flowinfo; int encap_limit; int hop_limit; int flags; int raddr; int laddr; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ip6_tnl_parm *VAR_0, const struct __ip6_tnl_parm *VAR_1)
{
 VAR_0->laddr = VAR_1->laddr;
 VAR_0->raddr = VAR_1->raddr;
 VAR_0->flags = VAR_1->flags;
 VAR_0->hop_limit = VAR_1->hop_limit;
 VAR_0->encap_limit = VAR_1->encap_limit;
 VAR_0->flowinfo = VAR_1->flowinfo;
 VAR_0->link = VAR_1->link;
 VAR_0->proto = VAR_1->proto;
 FUNC_0(VAR_0->name, VAR_1->name, sizeof(VAR_0->name));
}
