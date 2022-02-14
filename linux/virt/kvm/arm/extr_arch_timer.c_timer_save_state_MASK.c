
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_timer_cpu {int enabled; } ;
struct arch_timer_context {int loaded; void* cnt_cval; void* cnt_ctl; int vcpu; } ;
typedef enum kvm_arch_timers { ____Placeholder_kvm_arch_timers } kvm_arch_timers ;


 int FUNC_0 () ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct arch_timer_context*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct arch_timer_context*) ;
 struct arch_timer_cpu* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct arch_timer_context *VAR_4)
{
 struct arch_timer_cpu *VAR_5 = FUNC_7(VAR_4->vcpu);
 enum kvm_arch_timers VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;

 if (!VAR_5->enabled)
  return;

 FUNC_4(VAR_7);

 if (!VAR_4->loaded)
  goto out;

 switch (VAR_6) {
 case 128:
  VAR_4->cnt_ctl = FUNC_5(VAR_2);
  VAR_4->cnt_cval = FUNC_5(VAR_3);


  FUNC_8(0, VAR_2);
  FUNC_2();

  break;
 case 129:
  VAR_4->cnt_ctl = FUNC_5(VAR_0);
  VAR_4->cnt_cval = FUNC_5(VAR_1);


  FUNC_8(0, VAR_0);
  FUNC_2();

  break;
 case 130:
  FUNC_0();
 }

 FUNC_6(VAR_4);

 VAR_4->loaded = 0;
out:
 FUNC_3(VAR_7);
}
