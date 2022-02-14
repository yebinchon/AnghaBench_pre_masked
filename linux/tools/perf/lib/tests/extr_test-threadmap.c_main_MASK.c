
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct perf_thread_map*) ;
 struct perf_thread_map* FUNC_2 () ;
 int FUNC_3 (struct perf_thread_map*) ;

int FUNC_4(int VAR_3, char **VAR_4)
{
 struct perf_thread_map *VAR_5;

 VAR_1;

 FUNC_0(VAR_2);

 VAR_5 = FUNC_2();
 if (!VAR_5)
  return -1;

 FUNC_1(VAR_5);
 FUNC_3(VAR_5);
 FUNC_3(VAR_5);

 VAR_0;
 return 0;
}
