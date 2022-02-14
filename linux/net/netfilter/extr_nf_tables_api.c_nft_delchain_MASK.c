
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_trans {int dummy; } ;
struct nft_ctx {int chain; int net; TYPE_1__* table; } ;
struct TYPE_2__ {int use; } ;


 scalar_t__ FUNC_0 (struct nft_trans*) ;
 int VAR_0 ;
 int FUNC_1 (struct nft_trans*) ;
 int FUNC_2 (int ,int ) ;
 struct nft_trans* FUNC_3 (struct nft_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct nft_ctx *VAR_1)
{
 struct nft_trans *VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->table->use--;
 FUNC_2(VAR_1->net, VAR_1->chain);

 return 0;
}
