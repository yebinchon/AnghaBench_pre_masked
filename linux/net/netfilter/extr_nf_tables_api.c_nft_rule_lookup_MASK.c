
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_rule {int dummy; } ;
struct nft_chain {int dummy; } ;


 int VAR_0 ;
 struct nft_rule* FUNC_0 (int ) ;
 struct nft_rule* FUNC_1 (struct nft_chain const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr const*) ;

__attribute__((used)) static struct nft_rule *FUNC_4(const struct nft_chain *VAR_1,
     const struct nlattr *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, FUNC_2(FUNC_3(VAR_2)));
}
