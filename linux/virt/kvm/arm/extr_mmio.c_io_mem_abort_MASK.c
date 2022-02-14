
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int mmio_exit_user; int mmio_exit_kernel; } ;
struct TYPE_5__ {unsigned long rt; } ;
struct TYPE_6__ {TYPE_1__ mmio_decode; } ;
struct kvm_vcpu {int mmio_needed; TYPE_4__ stat; TYPE_2__ arch; } ;
struct TYPE_7__ {int is_write; int len; int data; int phys_addr; } ;
struct kvm_run {int exit_reason; TYPE_3__ mmio; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ,int,int *) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ,int,int *) ;
 int FUNC_5 (int *,int,unsigned long) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int,int ,unsigned long*) ;
 unsigned long FUNC_9 (struct kvm_vcpu*,int ,int) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned long) ;

int FUNC_11(struct kvm_vcpu *VAR_5, struct kvm_run *VAR_6,
   phys_addr_t VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 bool VAR_11;
 int VAR_12;
 u8 VAR_13[8];






 if (FUNC_6(VAR_5)) {
  VAR_10 = FUNC_0(VAR_5, &VAR_11, &VAR_12);
  if (VAR_10)
   return VAR_10;
 } else {
  FUNC_1("load/store instruction decoding not implemented\n");
  return -VAR_0;
 }

 VAR_9 = VAR_5->arch.mmio_decode.rt;

 if (VAR_11) {
  VAR_8 = FUNC_9(VAR_5, FUNC_10(VAR_5, VAR_9),
            VAR_12);

  FUNC_8(VAR_4, VAR_12, VAR_7, &VAR_8);
  FUNC_5(VAR_13, VAR_12, VAR_8);

  VAR_10 = FUNC_4(VAR_5, VAR_2, VAR_7, VAR_12,
           VAR_13);
 } else {
  FUNC_8(VAR_3, VAR_12,
          VAR_7, ((void*)0));

  VAR_10 = FUNC_3(VAR_5, VAR_2, VAR_7, VAR_12,
          VAR_13);
 }


 VAR_6->mmio.is_write = VAR_11;
 VAR_6->mmio.phys_addr = VAR_7;
 VAR_6->mmio.len = VAR_12;
 VAR_5->mmio_needed = 1;

 if (!VAR_10) {

  if (!VAR_11)
   FUNC_7(VAR_6->mmio.data, VAR_13, VAR_12);
  VAR_5->stat.mmio_exit_kernel++;
  FUNC_2(VAR_5, VAR_6);
  return 1;
 }

 if (VAR_11)
  FUNC_7(VAR_6->mmio.data, VAR_13, VAR_12);
 VAR_5->stat.mmio_exit_user++;
 VAR_6->exit_reason = VAR_1;
 return 0;
}
