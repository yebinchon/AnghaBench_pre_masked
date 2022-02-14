
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmem_altmap {unsigned long reserve; unsigned long free; } ;



unsigned long FUNC_0(struct vmem_altmap *VAR_0)
{

 if (VAR_0)
  return VAR_0->reserve + VAR_0->free;
 return 0;
}
