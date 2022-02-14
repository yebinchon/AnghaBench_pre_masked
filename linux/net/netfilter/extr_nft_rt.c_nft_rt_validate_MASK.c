
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_rt {int key; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 struct nft_rt* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_4, const struct nft_expr *VAR_5,
      const struct nft_data **VAR_6)
{
 const struct nft_rt *VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;

 switch (VAR_7->key) {
 case 131:
 case 130:
 case 132:
 case 128:
  return 0;
 case 129:
  VAR_8 = (1 << VAR_1) |
   (1 << VAR_2) |
   (1 << VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_4->chain, VAR_8);
}
