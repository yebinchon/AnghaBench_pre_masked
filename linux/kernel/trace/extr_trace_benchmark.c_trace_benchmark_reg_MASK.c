
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

int FUNC_4(void)
{
 if (!VAR_3) {
  FUNC_3("trace benchmark cannot be started via kernel command line\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_2(VAR_1,
          ((void*)0), "event_benchmark");
 if (FUNC_0(VAR_2)) {
  FUNC_3("trace benchmark failed to create kernel thread\n");
  return FUNC_1(VAR_2);
 }

 return 0;
}
