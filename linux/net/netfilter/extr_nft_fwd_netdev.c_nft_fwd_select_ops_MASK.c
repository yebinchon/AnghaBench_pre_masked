
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr_ops {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 struct nft_expr_ops const* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct nft_expr_ops const VAR_3 ;
 struct nft_expr_ops const VAR_4 ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_1(const struct nft_ctx *VAR_5,
     const struct nlattr * const VAR_6[])
{
 if (VAR_6[VAR_1])
  return &VAR_3;
 if (VAR_6[VAR_2])
  return &VAR_4;

        return FUNC_0(-VAR_0);
}
