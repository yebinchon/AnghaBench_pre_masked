
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_expr_ops {int dummy; } ;
struct nft_ctx {int family; } ;


 int VAR_0 ;
 struct nft_expr_ops const* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;



 struct nft_expr_ops const VAR_5 ;
 struct nft_expr_ops const VAR_6 ;
 struct nft_expr_ops const VAR_7 ;
 struct nft_expr_ops const VAR_8 ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_3(const struct nft_ctx *VAR_9,
        const struct nlattr * const VAR_10[])
{
 u32 VAR_11;

 if (!VAR_10[VAR_3])
  return &VAR_6;

 if (VAR_10[VAR_4] && VAR_10[VAR_2])
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_2(FUNC_1(VAR_10[VAR_3]));
 switch (VAR_11) {
 case 128:
  if (VAR_10[VAR_4])
   return &VAR_8;
  if (VAR_10[VAR_2])
   return &VAR_7;
  break;
 case 129:
  if (VAR_10[VAR_2])
   return &VAR_6;
  break;
 case 130:
  if (VAR_9->family != VAR_1) {
   if (VAR_10[VAR_2])
    return &VAR_5;
  }
  break;
 }

 return FUNC_0(-VAR_0);
}
