
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (char*,int*) ;

unsigned long FUNC_3(void)
{
 unsigned long VAR_1;
 int VAR_2;

 if (FUNC_2("kernel/perf_event_mlock_kb", &VAR_2) < 0) {





  VAR_2 = 512;
 } else {
  VAR_2 -= (VAR_0 / 1024);
 }

 VAR_1 = (VAR_2 * 1024) / VAR_0;
 if (!FUNC_0(VAR_1))
  VAR_1 = FUNC_1(VAR_1);

 return VAR_1;
}
