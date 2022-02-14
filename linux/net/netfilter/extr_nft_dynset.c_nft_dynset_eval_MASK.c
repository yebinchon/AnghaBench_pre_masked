
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {scalar_t__ timeout; TYPE_1__* ops; } ;
struct TYPE_6__ {void* code; } ;
struct nft_regs {TYPE_3__ verdict; int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {TYPE_2__* ops; } ;
struct nft_dynset {scalar_t__ op; size_t sreg_key; scalar_t__ invert; scalar_t__ timeout; struct nft_set* set; } ;
struct TYPE_5__ {int (* eval ) (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;} ;
struct TYPE_4__ {scalar_t__ (* update ) (struct nft_set*,int *,int ,struct nft_expr const*,struct nft_regs*,struct nft_set_ext const**) ;int (* delete ) (struct nft_set*,int *) ;} ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 struct nft_dynset* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct nft_set_ext const*,int ) ;
 scalar_t__* FUNC_3 (struct nft_set_ext const*) ;
 struct nft_expr* FUNC_4 (struct nft_set_ext const*) ;
 int FUNC_5 (struct nft_set*,int *) ;
 scalar_t__ FUNC_6 (struct nft_set*,int *,int ,struct nft_expr const*,struct nft_regs*,struct nft_set_ext const**) ;
 int FUNC_7 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;

void FUNC_8(const struct nft_expr *VAR_6,
       struct nft_regs *VAR_7, const struct nft_pktinfo *VAR_8)
{
 const struct nft_dynset *VAR_9 = FUNC_1(VAR_6);
 struct nft_set *VAR_10 = VAR_9->set;
 const struct nft_set_ext *VAR_11;
 const struct nft_expr *VAR_12;
 u64 VAR_13;

 if (VAR_9->op == VAR_1) {
  VAR_10->ops->delete(VAR_10, &VAR_7->data[VAR_9->sreg_key]);
  return;
 }

 if (VAR_10->ops->update(VAR_10, &VAR_7->data[VAR_9->sreg_key], VAR_5,
        VAR_6, VAR_7, &VAR_11)) {
  VAR_12 = ((void*)0);
  if (FUNC_2(VAR_11, VAR_4))
   VAR_12 = FUNC_4(VAR_11);

  if (VAR_9->op == VAR_2 &&
      FUNC_2(VAR_11, VAR_3)) {
   VAR_13 = VAR_9->timeout ? : VAR_10->timeout;
   *FUNC_3(VAR_11) = FUNC_0() + VAR_13;
  }

  if (VAR_12 != ((void*)0))
   VAR_12->ops->eval(VAR_12, VAR_7, VAR_8);

  if (VAR_9->invert)
   VAR_7->verdict.code = VAR_0;
  return;
 }

 if (!VAR_9->invert)
  VAR_7->verdict.code = VAR_0;
}
