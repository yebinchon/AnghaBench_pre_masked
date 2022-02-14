
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_chain_type {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_chain_type const* FUNC_0 (int ) ;
 struct nft_chain_type* FUNC_1 (struct nlattr const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net*,char*,int ,int ,char const*) ;
 scalar_t__ FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (struct nlattr const*) ;

__attribute__((used)) static const struct nft_chain_type *
FUNC_6(struct net *VAR_2, const struct nlattr *VAR_3,
       u8 VAR_4, bool VAR_5)
{
 const struct nft_chain_type *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 != ((void*)0))
  return VAR_6;

 FUNC_2();
 return FUNC_0(-VAR_1);
}
