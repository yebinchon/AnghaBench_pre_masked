
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma {unsigned long count; unsigned long order_per_bit; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct cma *VAR_0)
{
 return VAR_0->count >> VAR_0->order_per_bit;
}
