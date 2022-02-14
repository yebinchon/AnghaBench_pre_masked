
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
 size_t VAR_2 ;
 size_t VAR_3 ;


 struct nft_expr_ops const VAR_4 ;
 struct nft_expr_ops const VAR_5 ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_3(const struct nft_ctx *VAR_6, const struct nlattr * const VAR_7[])
{
 u32 VAR_8;

 if (!VAR_7[VAR_1] ||
     !VAR_7[VAR_2] ||
     !VAR_7[VAR_3])
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(FUNC_1(VAR_7[VAR_3]));

 switch (VAR_8) {
 case 129:
  return &VAR_4;
 case 128:
  return &VAR_5;
 }

 return FUNC_0(-VAR_0);
}
