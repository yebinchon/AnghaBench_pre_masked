
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_trans {int dummy; } ;
struct nft_object {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* update ) (struct nft_object*,struct nft_object*) ;} ;


 int FUNC_0 (struct nft_object*) ;
 struct nft_object* FUNC_1 (struct nft_trans*) ;
 struct nft_object* FUNC_2 (struct nft_trans*) ;
 int FUNC_3 (struct nft_object*,struct nft_object*) ;

__attribute__((used)) static void FUNC_4(struct nft_trans *VAR_0)
{
 struct nft_object *VAR_1;
 struct nft_object *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_0);

 if (VAR_2->ops->update)
  VAR_2->ops->update(VAR_2, VAR_1);

 FUNC_0(VAR_1);
}
