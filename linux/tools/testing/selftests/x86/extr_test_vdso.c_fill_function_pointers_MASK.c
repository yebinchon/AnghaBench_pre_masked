
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vgtod_t ;
typedef scalar_t__ vgettime_t ;
typedef void* getcpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (void*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4()
{
 void *VAR_7 = FUNC_0("linux-vdso.so.1",
       VAR_0 | VAR_1 | VAR_2);
 if (!VAR_7)
  VAR_7 = FUNC_0("linux-gate.so.1",
         VAR_0 | VAR_1 | VAR_2);
 if (!VAR_7) {
  FUNC_2("[WARN]\tfailed to find vDSO\n");
  return;
 }

 VAR_4 = (getcpu_t)FUNC_1(VAR_7, "__vdso_getcpu");
 if (!VAR_4)
  FUNC_2("Warning: failed to find getcpu in vDSO\n");

 VAR_6 = (getcpu_t) FUNC_3();

 VAR_3 = (vgettime_t)FUNC_1(VAR_7, "__vdso_clock_gettime");
 if (!VAR_3)
  FUNC_2("Warning: failed to find clock_gettime in vDSO\n");

 VAR_5 = (vgtod_t)FUNC_1(VAR_7, "__vdso_gettimeofday");
 if (!VAR_5)
  FUNC_2("Warning: failed to find gettimeofday in vDSO\n");

}
