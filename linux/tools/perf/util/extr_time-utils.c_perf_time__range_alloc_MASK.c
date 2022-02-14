
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_time_interval {int dummy; } ;


 struct perf_time_interval* FUNC_0 (int,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

struct perf_time_interval *FUNC_3(const char *VAR_0, int *VAR_1)
{
 const char *VAR_2, *VAR_3;
 int VAR_4 = 1;
 struct perf_time_interval *VAR_5;




 if (!VAR_0)
  goto alloc;

 VAR_2 = VAR_0;
 while (VAR_2 < VAR_0 + FUNC_2(VAR_0)) {
  VAR_3 = FUNC_1(VAR_2, ',');
  if (!VAR_3)
   break;

  VAR_2 = VAR_3 + 1;
  VAR_4++;
 }

alloc:
 *VAR_1 = VAR_4;
 VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
 return VAR_5;
}
