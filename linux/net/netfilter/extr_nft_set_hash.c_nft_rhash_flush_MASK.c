
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set {int dummy; } ;
struct nft_rhash_elem {int ext; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net const*,int *) ;
 int FUNC_1 (struct net const*,struct nft_set const*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(const struct net *VAR_0,
       const struct nft_set *VAR_1, void *VAR_2)
{
 struct nft_rhash_elem *VAR_3 = VAR_2;

 if (!FUNC_2(&VAR_3->ext) ||
     !FUNC_0(VAR_0, &VAR_3->ext)) {
  FUNC_1(VAR_0, VAR_1, &VAR_3->ext);
  return 1;
 }
 return 0;
}
