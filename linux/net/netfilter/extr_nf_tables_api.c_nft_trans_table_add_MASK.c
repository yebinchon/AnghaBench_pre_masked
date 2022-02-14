
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_trans_table {int dummy; } ;
struct nft_trans {int list; } ;
struct nft_ctx {TYPE_2__* net; int table; } ;
struct TYPE_3__ {int commit_list; } ;
struct TYPE_4__ {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct nft_trans* FUNC_2 (struct nft_ctx*,int,int) ;

__attribute__((used)) static int FUNC_3(struct nft_ctx *VAR_2, int VAR_3)
{
 struct nft_trans *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3, sizeof(struct nft_trans_table));
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (VAR_3 == VAR_1)
  FUNC_1(VAR_2->net, VAR_2->table);

 FUNC_0(&VAR_4->list, &VAR_2->net->nft.commit_list);
 return 0;
}
