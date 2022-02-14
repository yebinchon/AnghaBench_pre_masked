
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct evsel_runtime {size_t ncpu; int * last_time; } ;
struct evsel {int dummy; } ;


 struct evsel_runtime* FUNC_0 (struct evsel*) ;

__attribute__((used)) static u64 FUNC_1(struct evsel *VAR_0, u32 VAR_1)
{
 struct evsel_runtime *VAR_2 = FUNC_0(VAR_0);

 if ((VAR_2 == ((void*)0)) || (VAR_2->last_time == ((void*)0)) || (VAR_1 >= VAR_2->ncpu))
  return 0;

 return VAR_2->last_time[VAR_1];
}
