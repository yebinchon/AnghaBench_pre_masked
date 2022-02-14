
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_match {int matchsize; } ;
struct nlattr {int dummy; } ;
struct nft_xt_match_priv {int info; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_2__ {struct xt_match* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nft_ctx const*,struct nft_expr const*,struct nlattr const* const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct nft_xt_match_priv* FUNC_4 (struct nft_expr const*) ;

__attribute__((used)) static int
FUNC_5(const struct nft_ctx *VAR_2, const struct nft_expr *VAR_3,
       const struct nlattr * const VAR_4[])
{
 struct nft_xt_match_priv *VAR_5 = FUNC_4(VAR_3);
 struct xt_match *VAR_6 = VAR_3->ops->data;
 int VAR_7;

 VAR_5->info = FUNC_3(FUNC_0(VAR_6->matchsize), VAR_1);
 if (!VAR_5->info)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5->info);
 if (VAR_7)
  FUNC_2(VAR_5->info);
 return VAR_7;
}
