
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chain; } ;
struct nft_trans {TYPE_1__ ctx; } ;
struct nft_base_chain {scalar_t__ policy; } ;


 scalar_t__ VAR_0 ;
 struct nft_base_chain* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nft_trans*) ;

__attribute__((used)) static void FUNC_3(struct nft_trans *VAR_1)
{
 struct nft_base_chain *VAR_2;

 if (FUNC_2(VAR_1) != VAR_0)
  return;

 if (!FUNC_1(VAR_1->ctx.chain))
  return;

 VAR_2 = FUNC_0(VAR_1->ctx.chain);
 VAR_2->policy = VAR_0;
}
