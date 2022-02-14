
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
struct kvm_run {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int phys_addr_t ;
typedef int gfn_t ;
struct TYPE_3__ {int srcu; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*,int,int*) ;
 struct kvm_memory_slot* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_run*,int) ;
 int FUNC_5 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_19 (struct kvm_vcpu*) ;
 unsigned long FUNC_20 (struct kvm_vcpu*) ;
 int FUNC_21 (struct kvm_vcpu*) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct kvm_vcpu*,int,struct kvm_memory_slot*,unsigned long,unsigned long) ;
 int * FUNC_28 (struct kvm_vcpu*) ;

int FUNC_29(struct kvm_vcpu *VAR_5, struct kvm_run *VAR_6)
{
 unsigned long VAR_7;
 phys_addr_t VAR_8;
 struct kvm_memory_slot *VAR_9;
 unsigned long VAR_10;
 bool VAR_11, VAR_12, VAR_13;
 gfn_t VAR_14;
 int VAR_15, VAR_16;

 VAR_7 = FUNC_20(VAR_5);

 VAR_8 = FUNC_15(VAR_5);
 VAR_11 = FUNC_22(VAR_5);


 if (FUNC_14(VAR_5)) {




  if (!FUNC_6(VAR_8, FUNC_17(VAR_5)))
   return 1;

  if (FUNC_26(!VAR_11)) {
   FUNC_8(VAR_5);
   return 1;
  }
 }

 FUNC_25(*FUNC_28(VAR_5), FUNC_17(VAR_5),
         FUNC_16(VAR_5), VAR_8);


 if (VAR_7 != VAR_2 && VAR_7 != VAR_3 &&
     VAR_7 != VAR_1) {
  FUNC_5("Unsupported FSC: EC=%#x xFSC=%#lx ESR_EL2=%#lx\n",
   FUNC_18(VAR_5),
   (unsigned long)FUNC_19(VAR_5),
   (unsigned long)FUNC_17(VAR_5));
  return -VAR_0;
 }

 VAR_16 = FUNC_23(&VAR_5->kvm->srcu);

 VAR_14 = VAR_8 >> VAR_4;
 VAR_9 = FUNC_2(VAR_5->kvm, VAR_14);
 VAR_10 = FUNC_1(VAR_9, VAR_14, &VAR_13);
 VAR_12 = FUNC_10(VAR_5);
 if (FUNC_9(VAR_10) || (VAR_12 && !VAR_13)) {
  if (VAR_11) {

   FUNC_7(VAR_5, FUNC_16(VAR_5));
   VAR_15 = 1;
   goto out_unlock;
  }
  if (FUNC_13(VAR_5)) {
   FUNC_12(VAR_5, FUNC_21(VAR_5));
   VAR_15 = 1;
   goto out_unlock;
  }







  VAR_8 |= FUNC_16(VAR_5) & ((1 << 12) - 1);
  VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_8);
  goto out_unlock;
 }


 FUNC_0(VAR_8 >= FUNC_11(VAR_5->kvm));

 if (VAR_7 == VAR_1) {
  FUNC_3(VAR_5, VAR_8);
  VAR_15 = 1;
  goto out_unlock;
 }

 VAR_15 = FUNC_27(VAR_5, VAR_8, VAR_9, VAR_10, VAR_7);
 if (VAR_15 == 0)
  VAR_15 = 1;
out_unlock:
 FUNC_24(&VAR_5->kvm->srcu, VAR_16);
 return VAR_15;
}
