
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xt_match {int me; int matchsize; } ;
struct nlattr {int dummy; } ;
struct nft_xt_match_priv {int dummy; } ;
typedef struct nft_expr_ops {unsigned int size; int dump; int destroy; int init; int eval; struct xt_match* data; int validate; int * type; } const nft_expr_ops ;
struct nft_ctx {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nft_expr_ops const* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct xt_match*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_7 ;
 int FUNC_3 (int ) ;
 struct nft_expr_ops const* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct nlattr const* const) ;
 int FUNC_8 (struct nlattr const* const) ;
 int FUNC_9 (int ) ;
 struct xt_match* FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_11(const struct nft_ctx *VAR_18,
       const struct nlattr * const VAR_19[])
{
 struct nft_expr_ops *VAR_20;
 struct xt_match *VAR_21;
 unsigned int VAR_22;
 char *VAR_23;
 u32 VAR_24, VAR_25;
 int VAR_26;

 if (VAR_19[VAR_5] == ((void*)0) ||
     VAR_19[VAR_6] == ((void*)0) ||
     VAR_19[VAR_4] == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_23 = FUNC_6(VAR_19[VAR_5]);
 VAR_24 = FUNC_9(FUNC_7(VAR_19[VAR_6]));
 VAR_25 = VAR_18->family;

 VAR_21 = FUNC_10(VAR_25, VAR_23, VAR_24);
 if (FUNC_1(VAR_21))
  return FUNC_0(-VAR_1);

 if (VAR_21->matchsize > FUNC_8(VAR_19[VAR_4])) {
  VAR_26 = -VAR_0;
  goto err;
 }

 VAR_20 = FUNC_4(sizeof(struct nft_expr_ops), VAR_3);
 if (!VAR_20) {
  VAR_26 = -VAR_2;
  goto err;
 }

 VAR_20->type = &VAR_16;
 VAR_20->eval = VAR_10;
 VAR_20->init = VAR_11;
 VAR_20->destroy = VAR_8;
 VAR_20->dump = VAR_9;
 VAR_20->validate = VAR_17;
 VAR_20->data = VAR_21;

 VAR_22 = FUNC_2(FUNC_3(VAR_21->matchsize));
 if (VAR_22 > VAR_7) {
  VAR_22 = FUNC_2(sizeof(struct nft_xt_match_priv));

  VAR_20->eval = VAR_14;
  VAR_20->init = VAR_15;
  VAR_20->destroy = VAR_12;
  VAR_20->dump = VAR_13;
 }

 VAR_20->size = VAR_22;

 return VAR_20;
err:
 FUNC_5(VAR_21->me);
 return FUNC_0(VAR_26);
}
