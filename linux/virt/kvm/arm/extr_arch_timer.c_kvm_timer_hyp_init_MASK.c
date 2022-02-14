
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cc; } ;
struct arch_timer_kvm_info {scalar_t__ virtual_irq; scalar_t__ physical_irq; TYPE_1__ timecounter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct arch_timer_kvm_info* FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_12 ;

int FUNC_11(bool VAR_13)
{
 struct arch_timer_kvm_info *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_0();
 VAR_12 = &VAR_14->timecounter;

 if (!VAR_12->cc) {
  FUNC_7("kvm_arch_timer: uninitialized timecounter\n");
  return -VAR_1;
 }



 if (VAR_14->virtual_irq <= 0) {
  FUNC_7("kvm_arch_timer: invalid virtual timer IRQ: %d\n",
   VAR_14->virtual_irq);
  return -VAR_1;
 }
 VAR_7 = VAR_14->virtual_irq;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 != VAR_2 &&
     VAR_8 != VAR_3) {
  FUNC_7("Invalid trigger for vtimer IRQ%d, assuming level low\n",
   VAR_7);
  VAR_8 = VAR_3;
 }

 VAR_15 = FUNC_9(VAR_7, VAR_9,
     "kvm guest vtimer", FUNC_8());
 if (VAR_15) {
  FUNC_7("kvm_arch_timer: can't request vtimer interrupt %d (%d)\n",
   VAR_7, VAR_15);
  return VAR_15;
 }

 if (VAR_13) {
  VAR_15 = FUNC_5(VAR_7,
         FUNC_8());
  if (VAR_15) {
   FUNC_7("kvm_arch_timer: error setting vcpu affinity\n");
   goto out_free_irq;
  }

  FUNC_10(&VAR_4);
 }

 FUNC_6("virtual timer IRQ%d\n", VAR_7);



 if (VAR_14->physical_irq > 0) {
  VAR_5 = VAR_14->physical_irq;
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 != VAR_2 &&
      VAR_6 != VAR_3) {
   FUNC_7("Invalid trigger for ptimer IRQ%d, assuming level low\n",
    VAR_5);
   VAR_6 = VAR_3;
  }

  VAR_15 = FUNC_9(VAR_5, VAR_9,
      "kvm guest ptimer", FUNC_8());
  if (VAR_15) {
   FUNC_7("kvm_arch_timer: can't request ptimer interrupt %d (%d)\n",
    VAR_5, VAR_15);
   return VAR_15;
  }

  if (VAR_13) {
   VAR_15 = FUNC_5(VAR_5,
          FUNC_8());
   if (VAR_15) {
    FUNC_7("kvm_arch_timer: error setting vcpu affinity\n");
    goto out_free_irq;
   }
  }

  FUNC_6("physical timer IRQ%d\n", VAR_5);
 } else if (FUNC_3()) {
  FUNC_7("kvm_arch_timer: invalid physical timer IRQ: %d\n",
   VAR_14->physical_irq);
  VAR_15 = -VAR_1;
  goto out_free_irq;
 }

 FUNC_1(VAR_0,
     "kvm/arm/timer:starting", VAR_11,
     VAR_10);
 return 0;
out_free_irq:
 FUNC_2(VAR_7, FUNC_8());
 return VAR_15;
}
