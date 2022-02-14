
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* type; } ;
struct nft_flowtable {TYPE_2__ data; struct nft_flowtable* name; struct nft_flowtable* ops; } ;
struct TYPE_3__ {int owner; int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct nft_flowtable*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct nft_flowtable *VAR_0)
{
 FUNC_0(VAR_0->ops);
 FUNC_0(VAR_0->name);
 VAR_0->data.type->free(&VAR_0->data);
 FUNC_1(VAR_0->data.type->owner);
 FUNC_0(VAR_0);
}
