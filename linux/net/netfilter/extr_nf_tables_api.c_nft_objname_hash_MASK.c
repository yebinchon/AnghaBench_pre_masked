
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_object_hash_key {int name; int table; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct nft_object_hash_key *VAR_3 = VAR_0;

 VAR_2 ^= FUNC_0(VAR_3->table, 32);

 return FUNC_1(VAR_3->name, FUNC_2(VAR_3->name), VAR_2);
}
