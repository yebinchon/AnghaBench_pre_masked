
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_ops {int dummy; } ;
struct net {int dummy; } ;
struct ebt_table {int valid_hooks; } ;


 int FUNC_0 (struct net*,struct ebt_table*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net*,struct nf_hook_ops const*,int ) ;

void FUNC_3(struct net *VAR_0, struct ebt_table *VAR_1,
     const struct nf_hook_ops *VAR_2)
{
 FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_1->valid_hooks));
 FUNC_0(VAR_0, VAR_1);
}
