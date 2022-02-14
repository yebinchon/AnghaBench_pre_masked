
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nf_hook_entries {int dummy; } ;
struct TYPE_2__ {int * hooks_ipv6; int * hooks_ipv4; int * hooks_bridge; } ;
struct net {TYPE_1__ nf; } ;





 int FUNC_0 (int) ;
 struct nf_hook_entries* FUNC_1 (int ) ;

__attribute__((used)) static struct nf_hook_entries *FUNC_2(const struct net *VAR_0, u8 VAR_1, u8 VAR_2)
{
 switch (VAR_1) {




 case 129:
  return FUNC_1(VAR_0->nf.hooks_ipv4[VAR_2]);
 case 128:
  return FUNC_1(VAR_0->nf.hooks_ipv6[VAR_2]);
 default:
  FUNC_0(1);
  return ((void*)0);
 }

 return ((void*)0);
}
