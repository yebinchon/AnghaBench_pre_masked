
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma {unsigned int order_per_bit; } ;



__attribute__((used)) static unsigned long FUNC_0(const struct cma *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_1 <= VAR_0->order_per_bit)
  return 0;
 return (1UL << (VAR_1 - VAR_0->order_per_bit)) - 1;
}
