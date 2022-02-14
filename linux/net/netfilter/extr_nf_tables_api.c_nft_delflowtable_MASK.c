
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_flowtable {int dummy; } ;
struct nft_ctx {TYPE_1__* table; int net; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nft_flowtable*) ;
 int FUNC_1 (struct nft_ctx*,int ,struct nft_flowtable*) ;

__attribute__((used)) static int FUNC_2(struct nft_ctx *VAR_1,
       struct nft_flowtable *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_1->net, VAR_2);
 VAR_1->table->use--;

 return VAR_3;
}
