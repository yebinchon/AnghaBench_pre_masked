
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity {int nr_sets; unsigned int* set_size; } ;



__attribute__((used)) static void FUNC_0(struct irq_affinity *VAR_0, unsigned int VAR_1)
{
 VAR_0->nr_sets = 1;
 VAR_0->set_size[0] = VAR_1;
}
