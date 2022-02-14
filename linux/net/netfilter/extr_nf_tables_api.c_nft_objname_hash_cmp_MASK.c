
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhashtable_compare_arg {struct nft_object_hash_key* key; } ;
struct nft_object_hash_key {scalar_t__ table; int name; } ;
struct TYPE_2__ {scalar_t__ table; int name; } ;
struct nft_object {TYPE_1__ key; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rhashtable_compare_arg *VAR_0,
    const void *VAR_1)
{
 const struct nft_object_hash_key *VAR_2 = VAR_0->key;
 const struct nft_object *VAR_3 = VAR_1;

 if (VAR_3->key.table != VAR_2->table)
  return -1;

 return FUNC_0(VAR_3->key.name, VAR_2->name);
}
