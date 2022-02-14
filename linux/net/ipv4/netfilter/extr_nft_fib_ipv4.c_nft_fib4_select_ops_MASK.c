
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr_ops {int dummy; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_fib_result { ____Placeholder_nft_fib_result } nft_fib_result ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_expr_ops const* FUNC_0 (int ) ;
 size_t VAR_2 ;



 struct nft_expr_ops const VAR_3 ;
 struct nft_expr_ops const VAR_4 ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_3(const struct nft_ctx *VAR_5,
      const struct nlattr * const VAR_6[])
{
 enum nft_fib_result VAR_7;

 if (!VAR_6[VAR_2])
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(FUNC_1(VAR_6[VAR_2]));

 switch (VAR_7) {
 case 129:
  return &VAR_3;
 case 128:
  return &VAR_3;
 case 130:
  return &VAR_4;
 default:
  return FUNC_0(-VAR_1);
 }
}
