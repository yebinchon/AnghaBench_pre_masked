
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int active; scalar_t__ source; int intid; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct vgic_irq*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct vgic_irq *VAR_0)
{

 if (FUNC_2(VAR_0->intid) && VAR_0->source)
  return FUNC_0(VAR_0->source) + VAR_0->active;

 return FUNC_1(VAR_0) || VAR_0->active;
}
