
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nft_entry {int dummy; } nft_entry ;
typedef int u16 ;
struct xt_mtchk_param {int dummy; } ;
struct xt_match {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {scalar_t__* nla; } ;
struct TYPE_2__ {struct xt_match* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct xt_match*,int ,void*) ;
 int FUNC_2 (struct xt_mtchk_param*,struct nft_ctx const*,struct xt_match*,void*,union nft_entry*,int ,int) ;
 int FUNC_3 (scalar_t__,int *,int*) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 int FUNC_6 (struct xt_mtchk_param*,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_7(const struct nft_ctx *VAR_2, const struct nft_expr *VAR_3,
   const struct nlattr * const VAR_4[],
   void *VAR_5)
{
 struct xt_match *VAR_6 = VAR_3->ops->data;
 struct xt_mtchk_param VAR_7;
 size_t VAR_8 = FUNC_0(FUNC_5(VAR_4[VAR_0]));
 u16 VAR_9 = 0;
 bool VAR_10 = 0;
 union nft_entry VAR_11 = {};
 int VAR_12;

 FUNC_1(VAR_6, FUNC_4(VAR_4[VAR_0]), VAR_5);

 if (VAR_2->nla[VAR_1]) {
  VAR_12 = FUNC_3(VAR_2->nla[VAR_1], &VAR_9, &VAR_10);
  if (VAR_12 < 0)
   return VAR_12;
 }

 FUNC_2(&VAR_7, VAR_2, VAR_6, VAR_5, &VAR_11, VAR_9, VAR_10);

 return FUNC_6(&VAR_7, VAR_8, VAR_9, VAR_10);
}
