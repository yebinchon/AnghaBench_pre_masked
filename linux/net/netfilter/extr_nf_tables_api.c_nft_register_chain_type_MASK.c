
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_chain_type {size_t family; size_t type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct nft_chain_type const*** VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct nft_chain_type *VAR_3)
{
 if (FUNC_0(VAR_3->family >= VAR_1))
  return;

 FUNC_1(VAR_0);
 if (FUNC_0(VAR_2[VAR_3->family][VAR_3->type] != ((void*)0))) {
  FUNC_2(VAR_0);
  return;
 }
 VAR_2[VAR_3->family][VAR_3->type] = VAR_3;
 FUNC_2(VAR_0);
}
