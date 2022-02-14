
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_exthdr {int type; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;




 struct nft_exthdr* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_ctx const*,struct nft_expr const*,struct nlattr const* const*) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_1,
    const struct nft_expr *VAR_2,
    const struct nlattr * const VAR_3[])
{
 struct nft_exthdr *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_4->type) {
 case 128:
 case 131:
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
