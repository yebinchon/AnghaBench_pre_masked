
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xt_target {scalar_t__ targetsize; int me; int target; } ;
struct nlattr {int dummy; } ;
typedef struct nft_expr_ops {int eval; struct xt_target* data; int validate; int dump; int destroy; int init; int size; int * type; } const nft_expr_ops ;
struct nft_ctx {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nft_expr_ops const* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct xt_target*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 char* VAR_8 ;
 char* VAR_9 ;
 struct nft_expr_ops const* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct nlattr const* const) ;
 scalar_t__ FUNC_8 (struct nlattr const* const) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 struct xt_target* FUNC_11 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_12(const struct nft_ctx *VAR_17,
        const struct nlattr * const VAR_18[])
{
 struct nft_expr_ops *VAR_19;
 struct xt_target *VAR_20;
 char *VAR_21;
 u32 VAR_22, VAR_23;
 int VAR_24;

 if (VAR_18[VAR_6] == ((void*)0) ||
     VAR_18[VAR_7] == ((void*)0) ||
     VAR_18[VAR_5] == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_21 = FUNC_6(VAR_18[VAR_6]);
 VAR_22 = FUNC_9(FUNC_7(VAR_18[VAR_7]));
 VAR_23 = VAR_17->family;

 if (FUNC_10(VAR_21, VAR_8) == 0 ||
     FUNC_10(VAR_21, VAR_9) == 0 ||
     FUNC_10(VAR_21, "standard") == 0)
  return FUNC_0(-VAR_0);

 VAR_20 = FUNC_11(VAR_23, VAR_21, VAR_22);
 if (FUNC_1(VAR_20))
  return FUNC_0(-VAR_1);

 if (!VAR_20->target) {
  VAR_24 = -VAR_0;
  goto err;
 }

 if (VAR_20->targetsize > FUNC_8(VAR_18[VAR_5])) {
  VAR_24 = -VAR_0;
  goto err;
 }

 VAR_19 = FUNC_4(sizeof(struct nft_expr_ops), VAR_3);
 if (!VAR_19) {
  VAR_24 = -VAR_2;
  goto err;
 }

 VAR_19->type = &VAR_15;
 VAR_19->size = FUNC_2(FUNC_3(VAR_20->targetsize));
 VAR_19->init = VAR_14;
 VAR_19->destroy = VAR_10;
 VAR_19->dump = VAR_11;
 VAR_19->validate = VAR_16;
 VAR_19->data = VAR_20;

 if (VAR_23 == VAR_4)
  VAR_19->eval = VAR_12;
 else
  VAR_19->eval = VAR_13;

 return VAR_19;
err:
 FUNC_5(VAR_20->me);
 return FUNC_0(VAR_24);
}
