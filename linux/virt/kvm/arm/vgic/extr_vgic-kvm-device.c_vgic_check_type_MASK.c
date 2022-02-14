
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vgic_model; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm *VAR_1, int VAR_2)
{
 if (VAR_1->arch.vgic.vgic_model != VAR_2)
  return -VAR_0;
 else
  return 0;
}
