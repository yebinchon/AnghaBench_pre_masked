
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nft_quota {int flags; int quota; } ;
struct nft_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct nft_quota* FUNC_2 (struct nft_object*) ;

__attribute__((used)) static void FUNC_3(struct nft_object *VAR_0,
     struct nft_object *VAR_1)
{
 struct nft_quota *VAR_2 = FUNC_2(VAR_1);
 struct nft_quota *VAR_3 = FUNC_2(VAR_0);
 u64 VAR_4;

 VAR_4 = FUNC_0(&VAR_2->quota);
 FUNC_1(&VAR_3->quota, VAR_4);
 VAR_3->flags = VAR_2->flags;
}
