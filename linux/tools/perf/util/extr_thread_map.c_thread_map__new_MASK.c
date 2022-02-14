
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct perf_thread_map {int dummy; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 struct perf_thread_map* FUNC_0 (int) ;
 struct perf_thread_map* FUNC_1 (int) ;
 struct perf_thread_map* FUNC_2 (scalar_t__) ;

struct perf_thread_map *FUNC_3(pid_t VAR_1, pid_t VAR_2, uid_t VAR_3)
{
 if (VAR_1 != -1)
  return FUNC_0(VAR_1);

 if (VAR_2 == -1 && VAR_3 != VAR_0)
  return FUNC_2(VAR_3);

 return FUNC_1(VAR_2);
}
