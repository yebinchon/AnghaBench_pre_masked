
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nft_entry {int dummy; } nft_entry ;
typedef int u16 ;
struct xt_tgchk_param {int dummy; } ;
struct xt_target {int target; } ;
struct nlattr {int dummy; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {scalar_t__* nla; } ;
struct TYPE_2__ {struct xt_target* data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 void* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (scalar_t__,int *,int*) ;
 int FUNC_3 (struct xt_tgchk_param*,struct nft_ctx const*,struct xt_target*,void*,union nft_entry*,int ,int) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 int FUNC_6 (struct xt_target*,int ,void*) ;
 int FUNC_7 (struct xt_tgchk_param*,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_8(const struct nft_ctx *VAR_3, const struct nft_expr *VAR_4,
  const struct nlattr * const VAR_5[])
{
 void *VAR_6 = FUNC_1(VAR_4);
 struct xt_target *VAR_7 = VAR_4->ops->data;
 struct xt_tgchk_param VAR_8;
 size_t VAR_9 = FUNC_0(FUNC_5(VAR_5[VAR_2]));
 u16 VAR_10 = 0;
 bool VAR_11 = 0;
 union nft_entry VAR_12 = {};
 int VAR_13;

 FUNC_6(VAR_7, FUNC_4(VAR_5[VAR_2]), VAR_6);

 if (VAR_3->nla[VAR_1]) {
  VAR_13 = FUNC_2(VAR_3->nla[VAR_1], &VAR_10, &VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
 }

 FUNC_3(&VAR_8, VAR_3, VAR_7, VAR_6, &VAR_12, VAR_10, VAR_11);

 VAR_13 = FUNC_7(&VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;


 if (!VAR_7->target)
  return -VAR_0;

 return 0;
}
