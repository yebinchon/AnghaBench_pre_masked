
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_fib {int result; int flags; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned int) ;
 struct nft_fib* FUNC_1 (struct nft_expr const*) ;

int FUNC_2(const struct nft_ctx *VAR_8, const struct nft_expr *VAR_9,
       const struct nft_data **VAR_10)
{
 const struct nft_fib *VAR_11 = FUNC_1(VAR_9);
 unsigned int VAR_12;

 switch (VAR_11->result) {
 case 129:
 case 128:
  VAR_12 = (1 << VAR_7);
  break;
 case 130:
  if (VAR_11->flags & VAR_1)
   VAR_12 = (1 << VAR_7) |
    (1 << VAR_4) |
    (1 << VAR_3);
  else if (VAR_11->flags & VAR_2)
   VAR_12 = (1 << VAR_5) |
    (1 << VAR_6) |
    (1 << VAR_3);
  else
   VAR_12 = (1 << VAR_4) |
    (1 << VAR_5) |
    (1 << VAR_3) |
    (1 << VAR_7) |
    (1 << VAR_6);

  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_8->chain, VAR_12);
}
