
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int dummy; } ;
struct seq_file {int dummy; } ;
struct kvm_vcpu {int vcpu_id; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct vgic_irq *VAR_1,
    struct kvm_vcpu *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = "SPI ";

 if (VAR_2) {
  VAR_4 = "VCPU";
  VAR_3 = VAR_2->vcpu_id;
 }

 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "%s%2d TYP   ID TGT_ID PLAEHCG     HWID   TARGET SRC PRI VCPU_ID\n", VAR_4, VAR_3);
 FUNC_0(VAR_0, "----------------------------------------------------------------\n");
}
