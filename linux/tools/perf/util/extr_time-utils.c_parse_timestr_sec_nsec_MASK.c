
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_time_interval {int end; int start; } ;


 scalar_t__ FUNC_0 (char*,int *) ;

__attribute__((used)) static int FUNC_1(struct perf_time_interval *VAR_0,
      char *VAR_1, char *VAR_2)
{
 if (VAR_1 && (*VAR_1 != '\0') &&
     (FUNC_0(VAR_1, &VAR_0->start) != 0)) {
  return -1;
 }

 if (VAR_2 && (*VAR_2 != '\0') &&
     (FUNC_0(VAR_2, &VAR_0->end) != 0)) {
  return -1;
 }

 return 0;
}
