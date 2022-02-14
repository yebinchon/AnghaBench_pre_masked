
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_table {int flags; } ;
struct nft_chain {int dummy; } ;
struct nf_hook_ops {int dummy; } ;
struct nft_base_chain {TYPE_1__* type; struct nf_hook_ops ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* ops_register ) (struct net*,struct nf_hook_ops const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct nf_hook_ops const*) ;
 struct nft_base_chain* FUNC_1 (struct nft_chain*) ;
 int FUNC_2 (struct nft_chain*) ;
 int FUNC_3 (struct net*,struct nf_hook_ops const*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_1,
       const struct nft_table *VAR_2,
       struct nft_chain *VAR_3)
{
 const struct nft_base_chain *VAR_4;
 const struct nf_hook_ops *VAR_5;

 if (VAR_2->flags & VAR_0 ||
     !FUNC_2(VAR_3))
  return 0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = &VAR_4->ops;

 if (VAR_4->type->ops_register)
  return VAR_4->type->ops_register(VAR_1, VAR_5);

 return FUNC_0(VAR_1, VAR_5);
}
