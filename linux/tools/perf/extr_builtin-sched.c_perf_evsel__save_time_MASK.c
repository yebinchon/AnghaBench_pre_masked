
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct evsel_runtime {int ncpu; void** last_time; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int) ;
 struct evsel_runtime* FUNC_1 (struct evsel*) ;
 void* FUNC_2 (void**,int) ;

__attribute__((used)) static void FUNC_3(struct evsel *VAR_0,
      u64 VAR_1, u32 VAR_2)
{
 struct evsel_runtime *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == ((void*)0))
  return;

 if ((VAR_2 >= VAR_3->ncpu) || (VAR_3->last_time == ((void*)0))) {
  int VAR_4, VAR_5 = FUNC_0(VAR_2+1);
  void *VAR_6 = VAR_3->last_time;

  VAR_6 = FUNC_2(VAR_3->last_time, VAR_5 * sizeof(u64));
  if (!VAR_6)
   return;

  VAR_3->last_time = VAR_6;
  for (VAR_4 = VAR_3->ncpu; VAR_4 < VAR_5; ++VAR_4)
   VAR_3->last_time[VAR_4] = (u64) 0;

  VAR_3->ncpu = VAR_5;
 }

 VAR_3->last_time[VAR_2] = VAR_1;
}
