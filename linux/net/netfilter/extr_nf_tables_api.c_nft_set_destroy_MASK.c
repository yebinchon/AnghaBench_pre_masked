
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_set {scalar_t__ use; int name; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* destroy ) (struct nft_set*) ;} ;
struct TYPE_3__ {int owner; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nft_set*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nft_set*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct nft_set *VAR_0)
{
 if (FUNC_0(VAR_0->use > 0))
  return;

 VAR_0->ops->destroy(VAR_0);
 FUNC_3(FUNC_5(VAR_0->ops)->owner);
 FUNC_1(VAR_0->name);
 FUNC_2(VAR_0);
}
