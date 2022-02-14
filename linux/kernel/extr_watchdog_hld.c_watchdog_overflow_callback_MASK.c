
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ interrupts; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct pt_regs*,char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct pt_regs*) ;
 int FUNC_9 () ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(struct perf_event *VAR_6,
           struct perf_sample_data *VAR_7,
           struct pt_regs *VAR_8)
{

 VAR_6->hw.interrupts = 0;

 if (FUNC_0(VAR_5) == 1) {
  FUNC_1(VAR_5, 0);
  return;
 }

 if (!FUNC_12())
  return;







 if (FUNC_3()) {
  int VAR_9 = FUNC_9();


  if (FUNC_0(VAR_1) == 1)
   return;

  FUNC_5("Watchdog detected hard LOCKUP on cpu %d\n",
    VAR_9);
  FUNC_7();
  FUNC_6(VAR_0);
  if (VAR_8)
   FUNC_8(VAR_8);
  else
   FUNC_2();





  if (VAR_4 &&
    !FUNC_10(0, &VAR_2))
   FUNC_11();

  if (VAR_3)
   FUNC_4(VAR_8, "Hard LOCKUP");

  FUNC_1(VAR_1, 1);
  return;
 }

 FUNC_1(VAR_1, 0);
 return;
}
