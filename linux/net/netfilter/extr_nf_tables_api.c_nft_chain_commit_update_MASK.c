
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* chain; TYPE_1__* table; } ;
struct nft_trans {TYPE_2__ ctx; } ;
struct nft_base_chain {int policy; } ;
struct TYPE_7__ {int rhlhead; int name; } ;
struct TYPE_5__ {int chains_ht; } ;




 struct nft_base_chain* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (struct nft_trans*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct nft_trans*) ;
 int FUNC_4 (struct nft_trans*) ;
 int FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct nft_trans *VAR_1)
{
 struct nft_base_chain *VAR_2;

 if (FUNC_3(VAR_1)) {
  FUNC_6(&VAR_1->ctx.table->chains_ht,
    &VAR_1->ctx.chain->rhlhead,
    VAR_0);
  FUNC_7(VAR_1->ctx.chain->name, FUNC_3(VAR_1));
  FUNC_5(&VAR_1->ctx.table->chains_ht,
        VAR_1->ctx.chain->name,
        &VAR_1->ctx.chain->rhlhead,
        VAR_0);
 }

 if (!FUNC_2(VAR_1->ctx.chain))
  return;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_1->ctx.chain);

 switch (FUNC_4(VAR_1)) {
 case 128:
 case 129:
  VAR_2->policy = FUNC_4(VAR_1);
  break;
 }
}
