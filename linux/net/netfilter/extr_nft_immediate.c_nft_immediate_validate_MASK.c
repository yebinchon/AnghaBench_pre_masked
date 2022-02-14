
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; int chain; } ;
struct nft_data {TYPE_1__ verdict; } ;
struct nft_immediate_expr {scalar_t__ dreg; struct nft_data data; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int level; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nft_ctx const*,int ) ;
 struct nft_immediate_expr* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_1,
      const struct nft_expr *VAR_2,
      const struct nft_data **VAR_3)
{
 const struct nft_immediate_expr *VAR_4 = FUNC_1(VAR_2);
 struct nft_ctx *VAR_5 = (struct nft_ctx *)VAR_1;
 const struct nft_data *VAR_6;
 int VAR_7;

 if (VAR_4->dreg != VAR_0)
  return 0;

 VAR_6 = &VAR_4->data;

 switch (VAR_6->verdict.code) {
 case 128:
 case 129:
  VAR_5->level++;
  VAR_7 = FUNC_0(VAR_1, VAR_6->verdict.chain);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->level--;
  break;
 default:
  break;
 }

 return 0;
}
