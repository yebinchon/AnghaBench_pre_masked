
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_irq {scalar_t__ config; TYPE_2__* vcpu; int priority; int source; int mpidr; int hwintid; int group; int hw; int enabled; int active; int line_level; int pending_latch; TYPE_1__* target_vcpu; int intid; } ;
struct seq_file {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int vcpu_id; } ;
struct TYPE_3__ {int vcpu_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,struct vgic_irq*,struct kvm_vcpu*) ;
 int FUNC_1 (struct seq_file*,char*,char*,int ,int,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_4, struct vgic_irq *VAR_5,
       struct kvm_vcpu *VAR_6)
{
 char *VAR_7;
 if (VAR_5->intid < VAR_3)
  VAR_7 = "SGI";
 else if (VAR_5->intid < VAR_2)
  VAR_7 = "PPI";
 else if (VAR_5->intid < VAR_1)
  VAR_7 = "SPI";
 else
  VAR_7 = "LPI";

 if (VAR_5->intid ==0 || VAR_5->intid == VAR_2)
  FUNC_0(VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_4, "       %s %4d "
        "    %2d "
        "%d%d%d%d%d%d%d "
        "%8d "
        "%8x "
        " %2x "
        "%3d "
        "     %2d "
        "\n",
   VAR_7, VAR_5->intid,
   (VAR_5->target_vcpu) ? VAR_5->target_vcpu->vcpu_id : -1,
   VAR_5->pending_latch,
   VAR_5->line_level,
   VAR_5->active,
   VAR_5->enabled,
   VAR_5->hw,
   VAR_5->config == VAR_0,
   VAR_5->group,
   VAR_5->hwintid,
   VAR_5->mpidr,
   VAR_5->source,
   VAR_5->priority,
   (VAR_5->vcpu) ? VAR_5->vcpu->vcpu_id : -1);
}
