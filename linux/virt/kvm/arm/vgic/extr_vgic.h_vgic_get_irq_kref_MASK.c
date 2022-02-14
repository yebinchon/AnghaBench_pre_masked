
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {scalar_t__ intid; int refcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct vgic_irq *VAR_1)
{
 if (VAR_1->intid < VAR_0)
  return;

 FUNC_0(&VAR_1->refcount);
}
