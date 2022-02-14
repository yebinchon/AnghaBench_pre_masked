
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const* const) ;
 scalar_t__ FUNC_1 (char*,char const* const,int) ;

__attribute__((used)) static int FUNC_2(char const *const VAR_0)
{
 return FUNC_1(".text", VAR_0, 5) == 0 ||
  FUNC_0(".init.text", VAR_0) == 0 ||
  FUNC_0(".ref.text", VAR_0) == 0 ||
  FUNC_0(".sched.text", VAR_0) == 0 ||
  FUNC_0(".spinlock.text", VAR_0) == 0 ||
  FUNC_0(".irqentry.text", VAR_0) == 0 ||
  FUNC_0(".softirqentry.text", VAR_0) == 0 ||
  FUNC_0(".kprobes.text", VAR_0) == 0 ||
  FUNC_0(".cpuidle.text", VAR_0) == 0;
}
