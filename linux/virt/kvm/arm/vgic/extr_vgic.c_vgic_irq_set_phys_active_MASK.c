
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int host_irq; int hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct vgic_irq *VAR_1, bool VAR_2)
{

 FUNC_0(!VAR_1->hw);
 FUNC_1(FUNC_2(VAR_1->host_irq,
          VAR_0,
          VAR_2));
}
