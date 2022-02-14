
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_match {unsigned int hooks; int table; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;
struct nf_hook_ops {int hooknum; } ;
struct nft_base_chain {struct nf_hook_ops ops; } ;
struct TYPE_2__ {struct xt_match* data; } ;


 int VAR_0 ;
 struct nft_base_chain* FUNC_0 (int ) ;
 int FUNC_1 (struct nft_ctx const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_1,
         const struct nft_expr *VAR_2,
         const struct nft_data **VAR_3)
{
 struct xt_match *VAR_4 = VAR_2->ops->data;
 unsigned int VAR_5 = 0;
 int VAR_6;

 if (FUNC_2(VAR_1->chain)) {
  const struct nft_base_chain *VAR_7 =
      FUNC_0(VAR_1->chain);
  const struct nf_hook_ops *VAR_8 = &VAR_7->ops;

  VAR_5 = 1 << VAR_8->hooknum;
  if (VAR_4->hooks && !(VAR_5 & VAR_4->hooks))
   return -VAR_0;

  VAR_6 = FUNC_1(VAR_1, VAR_4->table);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
