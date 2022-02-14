
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; } ;
struct arch_timer_context {int hrtimer; int vcpu; TYPE_1__ irq; } ;


 int FUNC_0 (struct arch_timer_context*) ;
 int FUNC_1 (struct arch_timer_context*) ;
 int FUNC_2 (struct arch_timer_context*) ;
 int FUNC_3 (int ,int,struct arch_timer_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct arch_timer_context*,int) ;

__attribute__((used)) static void FUNC_7(struct arch_timer_context *VAR_0)
{
 bool VAR_1 = FUNC_2(VAR_0);

 FUNC_6(VAR_0, VAR_1);

 if (VAR_1 != VAR_0->irq.level) {
  FUNC_3(VAR_0->vcpu, VAR_1, VAR_0);
  return;
 }






 if (!FUNC_1(VAR_0)) {
  FUNC_4(&VAR_0->hrtimer);
  return;
 }

 FUNC_5(&VAR_0->hrtimer, FUNC_0(VAR_0));
}
