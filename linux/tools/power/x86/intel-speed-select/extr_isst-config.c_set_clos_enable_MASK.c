
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,int*) ;
 int FUNC_3 (int ,int *,int *,int *,int*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_5 = 1;

 if (VAR_0) {
  FUNC_4(VAR_4, "Enable core-power for a package/die\n");
  FUNC_4(VAR_4,
   "\tClos Enable: Specify priority type with [--priority|-p]\n");
  FUNC_4(VAR_4, "\t\t 0: Proportional, 1: Ordered\n");
  FUNC_1(0);
 }

 if (FUNC_0()) {
  FUNC_4(VAR_4,
   "cpufreq subsystem and core-power enable will interfere with each other!\n");
 }

 FUNC_6(VAR_3);
 if (VAR_2)
  FUNC_3(VAR_1, ((void*)0),
        ((void*)0), ((void*)0), &VAR_5);
 else
  FUNC_2(VAR_1, ((void*)0),
            ((void*)0), ((void*)0), &VAR_5);
 FUNC_5(VAR_3);
}
