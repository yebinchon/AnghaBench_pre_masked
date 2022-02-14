
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_nat {int type; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct nft_nat* FUNC_2 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_5,
       const struct nft_expr *VAR_6,
       const struct nft_data **VAR_7)
{
 struct nft_nat *VAR_8 = FUNC_2(VAR_6);
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5->chain, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 switch (VAR_8->type) {
 case 128:
  VAR_9 = FUNC_1(VAR_5->chain,
            (1 << VAR_3) |
            (1 << VAR_1));
  break;
 case 129:
  VAR_9 = FUNC_1(VAR_5->chain,
            (1 << VAR_4) |
            (1 << VAR_2));
  break;
 }

 return VAR_9;
}
