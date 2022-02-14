
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priority; } ;
struct nft_base_chain {TYPE_1__ ops; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct nft_base_chain *VAR_1)
{
 if (VAR_1->ops.priority <= 0 ||
     VAR_1->ops.priority > VAR_0)
  return -1;

 return 0;
}
