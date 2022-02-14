
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int ucall ;
struct ucall {int cmd; } ;
struct kvm_vm {int dummy; } ;
struct TYPE_5__ {int * gprs; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;
struct TYPE_4__ {int icptcode; int ipa; int ipb; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_3__ s; TYPE_1__ s390_sieic; } ;


 scalar_t__ VAR_0 ;
 struct ucall* FUNC_0 (struct kvm_vm*,int ) ;
 int FUNC_1 (struct ucall*,struct ucall*,int) ;
 int FUNC_2 (struct kvm_vm*,int ) ;
 struct kvm_run* FUNC_3 (struct kvm_vm*,int ) ;

uint64_t FUNC_4(struct kvm_vm *VAR_1, uint32_t VAR_2, struct ucall *VAR_3)
{
 struct kvm_run *VAR_4 = FUNC_3(VAR_1, VAR_2);
 struct ucall VAR_5 = {};

 if (VAR_4->exit_reason == VAR_0 &&
     VAR_4->s390_sieic.icptcode == 4 &&
     (VAR_4->s390_sieic.ipa >> 8) == 0x83 &&
     (VAR_4->s390_sieic.ipb >> 16) == 0x501) {
  int VAR_6 = VAR_4->s390_sieic.ipa & 0xf;

  FUNC_1(&VAR_5, FUNC_0(VAR_1, VAR_4->s.regs.gprs[VAR_6]),
         sizeof(VAR_5));

  FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5));
 }

 return VAR_5.cmd;
}
