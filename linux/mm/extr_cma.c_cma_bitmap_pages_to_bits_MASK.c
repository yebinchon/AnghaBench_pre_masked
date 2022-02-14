
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma {unsigned long order_per_bit; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(const struct cma *VAR_0,
           unsigned long VAR_1)
{
 return FUNC_0(VAR_1, 1UL << VAR_0->order_per_bit) >> VAR_0->order_per_bit;
}
