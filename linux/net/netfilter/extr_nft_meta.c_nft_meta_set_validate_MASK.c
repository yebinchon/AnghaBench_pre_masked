
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_meta {scalar_t__ key; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int family; int chain; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned int) ;
 struct nft_meta* FUNC_1 (struct nft_expr const*) ;

int FUNC_2(const struct nft_ctx *VAR_5,
     const struct nft_expr *VAR_6,
     const struct nft_data **VAR_7)
{
 struct nft_meta *VAR_8 = FUNC_1(VAR_6);
 unsigned int VAR_9;

 if (VAR_8->key != VAR_1)
  return 0;

 switch (VAR_5->family) {
 case 132:
  VAR_9 = 1 << VAR_2;
  break;
 case 128:
  VAR_9 = 1 << VAR_4;
  break;
 case 130:
 case 129:
 case 131:
  VAR_9 = 1 << VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_5->chain, VAR_9);
}
