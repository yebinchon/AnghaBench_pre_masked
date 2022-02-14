
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_expr_ops {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 struct nft_expr_ops const* FUNC_0 (int ) ;
 size_t VAR_1 ;


 struct nft_expr_ops const VAR_2 ;
 struct nft_expr_ops const VAR_3 ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_3(const struct nft_ctx *VAR_4,
      const struct nlattr * const VAR_5[])
{
 u32 VAR_6;

 if (!VAR_5[VAR_1])
  return &VAR_2;

 VAR_6 = FUNC_2(FUNC_1(VAR_5[VAR_1]));
 switch (VAR_6) {
 case 128:
  return &VAR_3;
 case 129:
  return &VAR_2;
 default:
  break;
 }
 return FUNC_0(-VAR_0);
}
