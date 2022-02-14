
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {unsigned long read; int overrun; int entries; } ;


 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct ring_buffer_per_cpu *VAR_0)
{
 return FUNC_0(&VAR_0->entries) -
  (FUNC_0(&VAR_0->overrun) + VAR_0->read);
}
