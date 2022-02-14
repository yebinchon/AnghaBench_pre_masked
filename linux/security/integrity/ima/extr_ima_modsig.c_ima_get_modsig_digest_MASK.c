
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct modsig {int hash_algo; int digest_size; int * digest; } ;
typedef enum hash_algo { ____Placeholder_hash_algo } hash_algo ;



int FUNC_0(const struct modsig *VAR_0, enum hash_algo *VAR_1,
     const u8 **VAR_2, u32 *VAR_3)
{
 *VAR_1 = VAR_0->hash_algo;
 *VAR_2 = VAR_0->digest;
 *VAR_3 = VAR_0->digest_size;

 return 0;
}
