
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oom_control {scalar_t__ constraint; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct oom_control*,int *) ;
 scalar_t__ FUNC_1 (struct oom_control*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct oom_control *VAR_2)
{
 if (FUNC_2(!VAR_1))
  return;
 if (VAR_1 != 2) {





  if (VAR_2->constraint != VAR_0)
   return;
 }

 if (FUNC_1(VAR_2))
  return;
 FUNC_0(VAR_2, ((void*)0));
 FUNC_3("Out of memory: %s panic_on_oom is enabled\n",
  VAR_1 == 2 ? "compulsory" : "system-wide");
}
