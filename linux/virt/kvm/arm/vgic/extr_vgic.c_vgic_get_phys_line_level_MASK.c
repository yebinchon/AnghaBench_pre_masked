
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int (* get_input_level ) (int ) ;int host_irq; int intid; int hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct vgic_irq *VAR_1)
{
 bool VAR_2;

 FUNC_0(!VAR_1->hw);

 if (VAR_1->get_input_level)
  return VAR_1->get_input_level(VAR_1->intid);

 FUNC_1(FUNC_2(VAR_1->host_irq,
          VAR_0,
          &VAR_2));
 return VAR_2;
}
