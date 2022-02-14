
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set {int dummy; } ;
struct nft_rhash {int ht; int gc_work; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct nft_rhash* FUNC_1 (struct nft_set const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,void*) ;

__attribute__((used)) static void FUNC_4(const struct nft_set *VAR_1)
{
 struct nft_rhash *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->gc_work);
 FUNC_2();
 FUNC_3(&VAR_2->ht, VAR_0,
        (void *)VAR_1);
}
