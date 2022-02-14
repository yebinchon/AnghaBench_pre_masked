
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_table {int chains_ht; } ;
struct nft_chain {int list; int rhlhead; struct nft_table* table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct nft_chain *VAR_1)
{
 struct nft_table *VAR_2 = VAR_1->table;

 FUNC_0(FUNC_2(&VAR_2->chains_ht, &VAR_1->rhlhead,
         VAR_0));
 FUNC_1(&VAR_1->list);
}
