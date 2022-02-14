
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nlattr const nlattr ;
struct nft_expr_type {int maxattr; int owner; struct nft_expr_type* ops; struct nft_expr_type* (* select_ops ) (struct nft_ctx const*,struct nlattr const* const*) ;int policy; } ;
struct nft_expr_ops {int maxattr; int owner; struct nft_expr_ops* ops; struct nft_expr_type* (* select_ops ) (struct nft_ctx const*,struct nlattr const* const*) ;int policy; } ;
struct nft_expr_info {struct nft_expr_type const* ops; struct nlattr const** tb; } ;
struct nft_ctx {int family; int net; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_expr_type const*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct nft_expr_type const*) ;
 int FUNC_2 (struct nlattr const**,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 struct nft_expr_type* FUNC_4 (int ,int ,struct nlattr const*) ;
 int FUNC_5 (int ,int ,struct nlattr const*) ;
 int FUNC_6 (struct nlattr const**,int,struct nlattr const*,int ,int *) ;
 struct nft_expr_type* FUNC_7 (struct nft_ctx const*,struct nlattr const* const*) ;

__attribute__((used)) static int FUNC_8(const struct nft_ctx *VAR_5,
    const struct nlattr *VAR_6,
    struct nft_expr_info *VAR_7)
{
 const struct nft_expr_type *VAR_8;
 const struct nft_expr_ops *VAR_9;
 struct nlattr *VAR_10[VAR_2 + 1];
 int VAR_11;

 VAR_11 = FUNC_6(VAR_10, VAR_2, VAR_6,
       VAR_4, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8 = FUNC_4(VAR_5->net, VAR_5->family, VAR_10[VAR_3]);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_10[VAR_1]) {
  VAR_11 = FUNC_6(VAR_7->tb, VAR_8->maxattr,
        VAR_10[VAR_1],
        VAR_8->policy, ((void*)0));
  if (VAR_11 < 0)
   goto err1;
 } else
  FUNC_2(VAR_7->tb, 0, sizeof(VAR_7->tb[0]) * (VAR_8->maxattr + 1));

 if (VAR_8->select_ops != ((void*)0)) {
  VAR_9 = VAR_8->select_ops(VAR_5,
           (const struct nlattr * const *)VAR_7->tb);
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);






   goto err1;
  }
 } else
  VAR_9 = VAR_8->ops;

 VAR_7->ops = VAR_9;
 return 0;

err1:
 FUNC_3(VAR_8->owner);
 return VAR_11;
}
