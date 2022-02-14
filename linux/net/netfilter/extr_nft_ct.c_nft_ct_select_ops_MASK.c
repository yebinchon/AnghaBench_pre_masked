
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
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 struct nft_expr_ops const VAR_5 ;
 struct nft_expr_ops const VAR_6 ;
 struct nft_expr_ops const VAR_7 ;
 scalar_t__ FUNC_2 (struct nlattr const* const) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_3(const struct nft_ctx *VAR_8,
      const struct nlattr * const VAR_9[])
{
 if (VAR_9[VAR_2] == ((void*)0))
  return FUNC_0(-VAR_0);

 if (VAR_9[VAR_1] && VAR_9[VAR_3])
  return FUNC_0(-VAR_0);

 if (VAR_9[VAR_1])
  return &VAR_5;

 if (VAR_9[VAR_3]) {




  return &VAR_6;
 }

 return FUNC_0(-VAR_0);
}
