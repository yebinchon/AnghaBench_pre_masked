
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_xfrm {int dir; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;


 int FUNC_1 (int ,unsigned int) ;
 struct nft_xfrm* FUNC_2 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_6, const struct nft_expr *VAR_7,
        const struct nft_data **VAR_8)
{
 const struct nft_xfrm *VAR_9 = FUNC_2(VAR_7);
 unsigned int VAR_10;

 switch (VAR_9->dir) {
 case 129:
  VAR_10 = (1 << VAR_1) |
   (1 << VAR_2) |
   (1 << VAR_5);
  break;
 case 128:
  VAR_10 = (1 << VAR_1) |
   (1 << VAR_3) |
   (1 << VAR_4);
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return FUNC_1(VAR_6->chain, VAR_10);
}
