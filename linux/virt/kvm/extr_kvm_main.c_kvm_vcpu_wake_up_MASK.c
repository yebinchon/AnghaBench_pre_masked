
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swait_queue_head {int dummy; } ;
struct TYPE_2__ {int halt_wakeup; } ;
struct kvm_vcpu {TYPE_1__ stat; int ready; } ;


 int FUNC_0 (int ,int) ;
 struct swait_queue_head* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct swait_queue_head*) ;
 scalar_t__ FUNC_3 (struct swait_queue_head*) ;

bool FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct swait_queue_head *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_0->ready, 1);
  ++VAR_0->stat.halt_wakeup;
  return 1;
 }

 return 0;
}
