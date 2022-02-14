
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcindex_data {int hash; int mask; int shift; } ;



__attribute__((used)) static inline int
FUNC_0(struct tcindex_data *VAR_0)
{
 return VAR_0->hash > (VAR_0->mask >> VAR_0->shift);
}
