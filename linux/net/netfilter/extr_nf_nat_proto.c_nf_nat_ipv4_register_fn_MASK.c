
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_ops {int pf; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ,struct nf_hook_ops const*,int ,int ) ;

int FUNC_2(struct net *VAR_1, const struct nf_hook_ops *VAR_2)
{
 return FUNC_1(VAR_1, VAR_2->pf, VAR_2, VAR_0,
      FUNC_0(VAR_0));
}
