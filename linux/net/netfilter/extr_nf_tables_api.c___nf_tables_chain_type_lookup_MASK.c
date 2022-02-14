
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nlattr {int dummy; } ;
struct nft_chain_type {int name; } ;


 int VAR_0 ;
 struct nft_chain_type const*** VAR_1 ;
 int FUNC_0 (struct nlattr const*,int ) ;

__attribute__((used)) static const struct nft_chain_type *
FUNC_1(const struct nlattr *VAR_2, u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_3][VAR_4] != ((void*)0) &&
      !FUNC_0(VAR_2, VAR_1[VAR_3][VAR_4]->name))
   return VAR_1[VAR_3][VAR_4];
 }
 return ((void*)0);
}
