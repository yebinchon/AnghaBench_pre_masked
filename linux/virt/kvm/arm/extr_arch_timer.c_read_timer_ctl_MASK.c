
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arch_timer_context {int cnt_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct arch_timer_context*) ;

__attribute__((used)) static u64 FUNC_1(struct arch_timer_context *VAR_1)
{






 if (!FUNC_0(VAR_1))
  return VAR_1->cnt_ctl | VAR_0;
 else
  return VAR_1->cnt_ctl;
}
