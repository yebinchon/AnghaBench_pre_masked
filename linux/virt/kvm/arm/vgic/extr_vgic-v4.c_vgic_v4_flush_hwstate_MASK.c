
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int irq; } ;
struct TYPE_5__ {TYPE_4__ its_vpe; } ;
struct TYPE_6__ {TYPE_1__ vgic_v3; } ;
struct TYPE_7__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(struct kvm_vcpu *VAR_1)
{
 int VAR_2 = VAR_1->arch.vgic_cpu.vgic_v3.its_vpe.irq;
 int VAR_3;

 if (!FUNC_5(VAR_1->kvm))
  return 0;







 VAR_3 = FUNC_1(VAR_2, FUNC_0(FUNC_4()));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(&VAR_1->arch.vgic_cpu.vgic_v3.its_vpe, 1);
 if (VAR_3)
  return VAR_3;





 VAR_3 = FUNC_2(VAR_2, VAR_0, 0);

 return VAR_3;
}
