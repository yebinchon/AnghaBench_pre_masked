
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int halt_poll_invalid; int halt_successful_poll; int halt_attempted_poll; } ;
struct kvm_vcpu {scalar_t__ halt_poll_ns; int wq; TYPE_1__ stat; } ;
typedef int ktime_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (scalar_t__,int,int ) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int VAR_2 ;

void FUNC_18(struct kvm_vcpu *VAR_3)
{
 ktime_t VAR_4, VAR_5;
 FUNC_0(VAR_2);
 bool VAR_6 = 0;
 u64 VAR_7;

 FUNC_9(VAR_3);

 VAR_4 = VAR_5 = FUNC_5();
 if (VAR_3->halt_poll_ns && !FUNC_7(VAR_3)) {
  ktime_t VAR_8 = FUNC_3(FUNC_5(), VAR_3->halt_poll_ns);

  ++VAR_3->stat.halt_attempted_poll;
  do {




   if (FUNC_11(VAR_3) < 0) {
    ++VAR_3->stat.halt_successful_poll;
    if (!FUNC_17(VAR_3))
     ++VAR_3->stat.halt_poll_invalid;
    goto out;
   }
   VAR_5 = FUNC_5();
  } while (FUNC_15() && FUNC_4(VAR_5, VAR_8));
 }

 for (;;) {
  FUNC_12(&VAR_3->wq, &VAR_2, VAR_0);

  if (FUNC_11(VAR_3) < 0)
   break;

  VAR_6 = 1;
  FUNC_13();
 }

 FUNC_1(&VAR_3->wq, &VAR_2);
 VAR_5 = FUNC_5();
out:
 FUNC_10(VAR_3);
 VAR_7 = FUNC_6(VAR_5) - FUNC_6(VAR_4);

 if (!FUNC_7(VAR_3)) {
  if (!FUNC_17(VAR_3)) {
   FUNC_14(VAR_3);
  } else if (VAR_1) {
   if (VAR_7 <= VAR_3->halt_poll_ns)
    ;

   else if (VAR_3->halt_poll_ns && VAR_7 > VAR_1)
    FUNC_14(VAR_3);

   else if (VAR_3->halt_poll_ns < VAR_1 &&
    VAR_7 < VAR_1)
    FUNC_2(VAR_3);
  } else {
   VAR_3->halt_poll_ns = 0;
  }
 }

 FUNC_16(VAR_7, VAR_6, FUNC_17(VAR_3));
 FUNC_8(VAR_3);
}
