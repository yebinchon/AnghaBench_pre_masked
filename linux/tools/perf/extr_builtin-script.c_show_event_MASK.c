
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread {int filter; int filter_entry_depth; } ;
struct perf_sample {int cpu; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;
struct TYPE_2__ {char* graph_function; } ;


 char* FUNC_0 (struct perf_sample*,struct evsel*,struct thread*,struct addr_location*,int *) ;
 unsigned int FUNC_1 (char const*,char*) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (struct thread*,int ) ;

__attribute__((used)) static bool FUNC_5(struct perf_sample *VAR_1,
         struct evsel *VAR_2,
         struct thread *VAR_3,
         struct addr_location *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3, VAR_1->cpu);

 if (!VAR_0.graph_function)
  return 1;

 if (VAR_3->filter) {
  if (VAR_5 <= VAR_3->filter_entry_depth) {
   VAR_3->filter = 0;
   return 0;
  }
  return 1;
 } else {
  const char *VAR_6 = VAR_0.graph_function;
  u64 VAR_7;
  const char *VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
    &VAR_7);
  unsigned VAR_9;

  if (!VAR_8)
   return 0;
  VAR_9 = FUNC_2(VAR_8);
  while (*VAR_6) {
   unsigned VAR_10 = FUNC_1(VAR_6, ",");
   if (VAR_9 == VAR_10 && !FUNC_3(VAR_8, VAR_6, VAR_10)) {
    VAR_3->filter = 1;
    VAR_3->filter_entry_depth = VAR_5;
    return 1;
   }
   VAR_6 += VAR_10;
   if (*VAR_6 == ',')
    VAR_6++;
  }
  return 0;
 }
}
