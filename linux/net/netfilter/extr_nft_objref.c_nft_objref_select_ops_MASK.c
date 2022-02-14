
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct nft_expr_ops const VAR_6 ;
 struct nft_expr_ops const VAR_7 ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_1(const struct nft_ctx *VAR_8,
                      const struct nlattr * const VAR_9[])
{
 if (VAR_9[VAR_5] &&
     (VAR_9[VAR_4] ||
      VAR_9[VAR_3]))
  return &VAR_6;
 else if (VAR_9[VAR_1] &&
   VAR_9[VAR_2])
  return &VAR_7;

 return FUNC_0(-VAR_0);
}
