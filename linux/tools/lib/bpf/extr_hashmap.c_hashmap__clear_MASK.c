
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {scalar_t__ sz; scalar_t__ cap_bits; scalar_t__ cap; int buckets; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hashmap *VAR_0)
{
 FUNC_0(VAR_0->buckets);
 VAR_0->cap = VAR_0->cap_bits = VAR_0->sz = 0;
}
