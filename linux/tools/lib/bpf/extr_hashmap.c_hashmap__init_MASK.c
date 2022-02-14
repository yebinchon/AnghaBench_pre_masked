
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {scalar_t__ sz; scalar_t__ cap_bits; scalar_t__ cap; int * buckets; void* ctx; int equal_fn; int hash_fn; } ;
typedef int hashmap_hash_fn ;
typedef int hashmap_equal_fn ;



void FUNC_0(struct hashmap *VAR_0, hashmap_hash_fn VAR_1,
     hashmap_equal_fn VAR_2, void *VAR_3)
{
 VAR_0->hash_fn = VAR_1;
 VAR_0->equal_fn = VAR_2;
 VAR_0->ctx = VAR_3;

 VAR_0->buckets = ((void*)0);
 VAR_0->cap = 0;
 VAR_0->cap_bits = 0;
 VAR_0->sz = 0;
}
