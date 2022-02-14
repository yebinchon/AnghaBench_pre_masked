
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_chain {int dummy; } ;
struct TYPE_2__ {int hooknum; } ;
struct nft_base_chain {TYPE_1__ ops; } ;


 int VAR_0 ;
 struct nft_base_chain* FUNC_0 (struct nft_chain const*) ;
 scalar_t__ FUNC_1 (struct nft_chain const*) ;

int FUNC_2(const struct nft_chain *VAR_1,
        unsigned int VAR_2)
{
 struct nft_base_chain *VAR_3;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_0(VAR_1);

  if ((1 << VAR_3->ops.hooknum) & VAR_2)
   return 0;

  return -VAR_0;
 }

 return 0;
}
