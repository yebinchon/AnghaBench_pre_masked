
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int hw; int * get_input_level; scalar_t__ hwintid; } ;



__attribute__((used)) static inline void FUNC_0(struct vgic_irq *VAR_0)
{
 VAR_0->hw = 0;
 VAR_0->hwintid = 0;
 VAR_0->get_input_level = ((void*)0);
}
