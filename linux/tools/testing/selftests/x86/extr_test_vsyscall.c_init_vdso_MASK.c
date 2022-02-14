
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vgettime_t ;
typedef scalar_t__ time_func_t ;
typedef scalar_t__ gtod_t ;
typedef scalar_t__ getcpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (void*,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(void)
{
 void *VAR_7 = FUNC_0("linux-vdso.so.1", VAR_0 | VAR_1 | VAR_2);
 if (!VAR_7)
  VAR_7 = FUNC_0("linux-gate.so.1", VAR_0 | VAR_1 | VAR_2);
 if (!VAR_7) {
  FUNC_2("[WARN]\tfailed to find vDSO\n");
  return;
 }

 VAR_5 = (gtod_t)FUNC_1(VAR_7, "__vdso_gettimeofday");
 if (!VAR_5)
  FUNC_2("[WARN]\tfailed to find gettimeofday in vDSO\n");

 VAR_4 = (vgettime_t)FUNC_1(VAR_7, "__vdso_clock_gettime");
 if (!VAR_4)
  FUNC_2("[WARN]\tfailed to find clock_gettime in vDSO\n");

 VAR_6 = (time_func_t)FUNC_1(VAR_7, "__vdso_time");
 if (!VAR_6)
  FUNC_2("[WARN]\tfailed to find time in vDSO\n");

 VAR_3 = (getcpu_t)FUNC_1(VAR_7, "__vdso_getcpu");
 if (!VAR_3) {

  FUNC_2("[%s]\tfailed to find getcpu in vDSO\n",
         sizeof(long) == 8 ? "WARN" : "NOTE");
 }
}
