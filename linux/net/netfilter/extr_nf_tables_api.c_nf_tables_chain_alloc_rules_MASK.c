
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_rules_old {int dummy; } ;
struct nft_rule {int dummy; } ;
struct nft_chain {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct nft_rule** FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static struct nft_rule **FUNC_1(const struct nft_chain *VAR_2,
           unsigned int VAR_3)
{
 if (VAR_3 > VAR_1)
  return ((void*)0);

 VAR_3 += 1;
 if (sizeof(struct nft_rule *) > VAR_1 / VAR_3)
  return ((void*)0);

 VAR_3 *= sizeof(struct nft_rule *);
 VAR_3 += sizeof(struct nft_rules_old);

 return FUNC_0(VAR_3, VAR_0);
}
