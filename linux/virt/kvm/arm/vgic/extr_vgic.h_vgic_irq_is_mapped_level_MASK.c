
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {scalar_t__ config; scalar_t__ hw; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct vgic_irq *VAR_1)
{
 return VAR_1->config == VAR_0 && VAR_1->hw;
}
