
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_flowtable {int ops_len; TYPE_1__* ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct net*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct net *VAR_0,
            struct nft_flowtable *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ops_len; VAR_2++) {
  if (!VAR_1->ops[VAR_2].dev)
   continue;

  FUNC_0(VAR_0, &VAR_1->ops[VAR_2]);
 }
}
