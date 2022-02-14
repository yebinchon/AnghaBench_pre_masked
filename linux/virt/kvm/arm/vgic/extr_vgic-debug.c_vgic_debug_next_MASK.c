
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void vgic_state_iter ;
struct seq_file {scalar_t__ private; } ;
struct TYPE_3__ {void* iter; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct kvm *VAR_3 = (struct kvm *)VAR_0->private;
 struct vgic_state_iter *VAR_4 = VAR_3->arch.vgic.iter;

 ++*VAR_2;
 FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  VAR_4 = ((void*)0);
 return VAR_4;
}
