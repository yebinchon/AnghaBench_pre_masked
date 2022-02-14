
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct arch_timer_context {scalar_t__ cnt_cval; scalar_t__ cntvoff; scalar_t__ loaded; } ;
typedef enum kvm_arch_timers { ____Placeholder_kvm_arch_timers } kvm_arch_timers ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct arch_timer_context*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct arch_timer_context*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct arch_timer_context *VAR_5)
{
 enum kvm_arch_timers VAR_6;
 u64 VAR_7, VAR_8;

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_5->loaded) {
  u32 VAR_9 = 0;

  switch (VAR_6) {
  case 128:
   VAR_9 = FUNC_3(VAR_4);
   break;
  case 129:
   VAR_9 = FUNC_3(VAR_3);
   break;
  case 130:

   VAR_9 = 0;
   break;
  }

  return (VAR_9 & VAR_0) &&
          (VAR_9 & VAR_2) &&
         !(VAR_9 & VAR_1);
 }

 if (!FUNC_2(VAR_5))
  return 0;

 VAR_7 = VAR_5->cnt_cval;
 VAR_8 = FUNC_1() - VAR_5->cntvoff;

 return VAR_7 <= VAR_8;
}
