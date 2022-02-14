
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_synproxy {int info; } ;
struct nft_object {int dummy; } ;


 struct nft_synproxy* FUNC_0 (struct nft_object*) ;

__attribute__((used)) static void FUNC_1(struct nft_object *VAR_0,
        struct nft_object *VAR_1)
{
 struct nft_synproxy *VAR_2 = FUNC_0(VAR_1);
 struct nft_synproxy *VAR_3 = FUNC_0(VAR_0);

 VAR_3->info = VAR_2->info;
}
