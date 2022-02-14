
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set {int dummy; } ;
struct nft_rhash {int gc_work; } ;


 int FUNC_0 (struct nft_set const*) ;
 struct nft_rhash* FUNC_1 (struct nft_set const*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const struct nft_set *VAR_1)
{
 struct nft_rhash *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_0, &VAR_2->gc_work,
      FUNC_0(VAR_1));
}
