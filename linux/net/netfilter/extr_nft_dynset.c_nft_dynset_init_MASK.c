
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_set {int flags; scalar_t__ dtype; int size; scalar_t__ timeout; TYPE_3__* ops; int dlen; int klen; } ;
struct nft_expr {int dummy; } ;
struct nft_dynset {int invert; int op; struct nft_set* expr; struct nft_set* set; int binding; scalar_t__ timeout; int tmpl; void* sreg_data; void* sreg_key; } ;
struct nft_ctx {int table; TYPE_4__* net; } ;
struct TYPE_6__ {int commit_mutex; } ;
struct TYPE_9__ {TYPE_1__ nft; } ;
struct TYPE_8__ {int size; int (* gc_init ) (struct nft_set*) ;TYPE_2__* type; int * update; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nft_set*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct nft_set*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nft_ctx const*,struct nft_set*,int *) ;
 int FUNC_6 (struct nft_ctx const*,struct nft_set*) ;
 struct nft_set* FUNC_7 (struct nft_ctx const*,struct nlattr const* const) ;
 struct nft_dynset* FUNC_8 (struct nft_expr const*) ;
 int FUNC_9 (TYPE_4__*) ;
 void* FUNC_10 (struct nlattr const* const) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 struct nft_set* FUNC_14 (TYPE_4__*,int ,struct nlattr const* const,struct nlattr const* const,int ) ;
 int FUNC_15 (void*,int ) ;
 int FUNC_16 (struct nlattr const* const) ;
 int FUNC_17 (struct nlattr const* const) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (struct nft_set*) ;

__attribute__((used)) static int FUNC_20(const struct nft_ctx *VAR_23,
      const struct nft_expr *VAR_24,
      const struct nlattr * const VAR_25[])
{
 struct nft_dynset *VAR_26 = FUNC_8(VAR_24);
 u8 VAR_27 = FUNC_9(VAR_23->net);
 struct nft_set *VAR_28;
 u64 VAR_29;
 int VAR_30;

 FUNC_3(&VAR_23->net->nft.commit_mutex);

 if (VAR_25[VAR_7] == ((void*)0) ||
     VAR_25[VAR_5] == ((void*)0) ||
     VAR_25[VAR_9] == ((void*)0))
  return -VAR_1;

 if (VAR_25[VAR_4]) {
  u32 VAR_31 = FUNC_18(FUNC_16(VAR_25[VAR_4]));

  if (VAR_31 & ~VAR_12)
   return -VAR_1;
  if (VAR_31 & VAR_12)
   VAR_26->invert = 1;
 }

 VAR_28 = FUNC_14(VAR_23->net, VAR_23->table,
        VAR_25[VAR_7],
        VAR_25[VAR_6], VAR_27);
 if (FUNC_0(VAR_28))
  return FUNC_1(VAR_28);

 if (VAR_28->ops->update == ((void*)0))
  return -VAR_2;

 if (VAR_28->flags & VAR_15)
  return -VAR_0;

 VAR_26->op = FUNC_18(FUNC_16(VAR_25[VAR_5]));
 switch (VAR_26->op) {
 case 130:
 case 129:
  break;
 case 128:
  if (!(VAR_28->flags & VAR_22))
   return -VAR_2;
  break;
 default:
  return -VAR_2;
 }

 VAR_29 = 0;
 if (VAR_25[VAR_10] != ((void*)0)) {
  if (!(VAR_28->flags & VAR_22))
   return -VAR_1;
  VAR_29 = FUNC_4(FUNC_2(FUNC_17(
      VAR_25[VAR_10])));
 }

 VAR_26->sreg_key = FUNC_10(VAR_25[VAR_9]);
 VAR_30 = FUNC_15(VAR_26->sreg_key, VAR_28->klen);
 if (VAR_30 < 0)
  return VAR_30;

 if (VAR_25[VAR_8] != ((void*)0)) {
  if (!(VAR_28->flags & VAR_21))
   return -VAR_1;
  if (VAR_28->dtype == VAR_11)
   return -VAR_2;

  VAR_26->sreg_data = FUNC_10(VAR_25[VAR_8]);
  VAR_30 = FUNC_15(VAR_26->sreg_data, VAR_28->dlen);
  if (VAR_30 < 0)
   return VAR_30;
 } else if (VAR_28->flags & VAR_21)
  return -VAR_1;

 if (VAR_25[VAR_3] != ((void*)0)) {
  if (!(VAR_28->flags & VAR_16))
   return -VAR_1;

  VAR_26->expr = FUNC_7(VAR_23, VAR_25[VAR_3]);
  if (FUNC_0(VAR_26->expr))
   return FUNC_1(VAR_26->expr);

  VAR_30 = -VAR_2;
  if (!(VAR_26->expr->ops->type->flags & VAR_14))
   goto err1;

  if (VAR_26->expr->ops->type->flags & VAR_13) {
   if (VAR_28->flags & VAR_22)
    goto err1;
   if (!VAR_28->ops->gc_init)
    goto err1;
   VAR_28->ops->gc_init(VAR_28);
  }
 }

 FUNC_13(&VAR_26->tmpl);
 FUNC_12(&VAR_26->tmpl, VAR_20, VAR_28->klen);
 if (VAR_28->flags & VAR_21)
  FUNC_12(&VAR_26->tmpl, VAR_17, VAR_28->dlen);
 if (VAR_26->expr != ((void*)0))
  FUNC_12(&VAR_26->tmpl, VAR_19,
           VAR_26->expr->ops->size);
 if (VAR_28->flags & VAR_22) {
  if (VAR_29 || VAR_28->timeout)
   FUNC_11(&VAR_26->tmpl, VAR_18);
 }

 VAR_26->timeout = VAR_29;

 VAR_30 = FUNC_5(VAR_23, VAR_28, &VAR_26->binding);
 if (VAR_30 < 0)
  goto err1;

 if (VAR_28->size == 0)
  VAR_28->size = 0xffff;

 VAR_26->set = VAR_28;
 return 0;

err1:
 if (VAR_26->expr != ((void*)0))
  FUNC_6(VAR_23, VAR_26->expr);
 return VAR_30;
}
