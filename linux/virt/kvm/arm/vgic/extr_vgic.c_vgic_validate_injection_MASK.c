
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {void* owner; int config; int line_level; } ;





__attribute__((used)) static bool FUNC_0(struct vgic_irq *VAR_0, bool VAR_1, void *VAR_2)
{
 if (VAR_0->owner != VAR_2)
  return 0;

 switch (VAR_0->config) {
 case 128:
  return VAR_0->line_level != VAR_1;
 case 129:
  return VAR_1;
 }

 return 0;
}
