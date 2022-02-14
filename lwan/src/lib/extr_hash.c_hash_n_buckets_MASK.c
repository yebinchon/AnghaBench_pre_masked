
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash {unsigned int n_buckets_mask; } ;



__attribute__((used)) static __attribute__((pure)) inline unsigned int
FUNC_0(const struct hash *VAR_0)
{
    return VAR_0->n_buckets_mask + 1;
}
