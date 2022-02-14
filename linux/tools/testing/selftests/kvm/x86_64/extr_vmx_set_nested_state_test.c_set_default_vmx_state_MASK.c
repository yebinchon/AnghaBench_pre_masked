
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; } ;
struct TYPE_5__ {int vmxon_pa; int vmcs12_pa; TYPE_1__ smm; } ;
struct TYPE_6__ {TYPE_2__ vmx; } ;
struct kvm_nested_state {int flags; int size; TYPE_3__ hdr; scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct kvm_nested_state*,int ,int) ;
 int FUNC_1 (struct kvm_nested_state*,int ) ;

void FUNC_2(struct kvm_nested_state *VAR_5, int VAR_6)
{
 FUNC_0(VAR_5, 0, VAR_6);
 VAR_5->flags = VAR_1 |
   VAR_2;
 if (VAR_4)
  VAR_5->flags |= VAR_0;
 VAR_5->format = 0;
 VAR_5->size = VAR_6;
 VAR_5->hdr.vmx.vmxon_pa = 0x1000;
 VAR_5->hdr.vmx.vmcs12_pa = 0x2000;
 VAR_5->hdr.vmx.smm.flags = 0;
 FUNC_1(VAR_5, VAR_3);
}
