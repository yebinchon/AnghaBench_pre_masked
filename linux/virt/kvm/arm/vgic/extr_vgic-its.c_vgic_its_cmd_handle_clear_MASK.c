
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {TYPE_1__* irq; } ;
struct TYPE_2__ {int pending_latch; int host_irq; scalar_t__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct its_ite* FUNC_0 (struct vgic_its*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_2, struct vgic_its *VAR_3,
         u64 *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = FUNC_3(VAR_4);
 struct its_ite *VAR_7;


 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (!VAR_7)
  return VAR_0;

 VAR_7->irq->pending_latch = 0;

 if (VAR_7->irq->hw)
  return FUNC_1(VAR_7->irq->host_irq,
          VAR_1, 0);

 return 0;
}
