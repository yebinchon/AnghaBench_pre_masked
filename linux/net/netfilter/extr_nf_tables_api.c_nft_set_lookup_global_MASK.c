
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_table {int dummy; } ;
struct nft_set {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct nft_set*) ;
 struct nft_set* FUNC_1 (struct nft_table const*,struct nlattr const*,int ) ;
 struct nft_set* FUNC_2 (struct net const*,struct nlattr const*,int ) ;

struct nft_set *FUNC_3(const struct net *VAR_0,
          const struct nft_table *VAR_1,
          const struct nlattr *VAR_2,
          const struct nlattr *VAR_3,
          u8 VAR_4)
{
 struct nft_set *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
 if (FUNC_0(VAR_5)) {
  if (!VAR_3)
   return VAR_5;

  VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
 }
 return VAR_5;
}
