
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_ctx {TYPE_1__* table; } ;
struct TYPE_2__ {scalar_t__ use; struct TYPE_2__* name; int chains_ht; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nft_ctx *VAR_0)
{
 if (FUNC_0(VAR_0->table->use > 0))
  return;

 FUNC_2(&VAR_0->table->chains_ht);
 FUNC_1(VAR_0->table->name);
 FUNC_1(VAR_0->table);
}
