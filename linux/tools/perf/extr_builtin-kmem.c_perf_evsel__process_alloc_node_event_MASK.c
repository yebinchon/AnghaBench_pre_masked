
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int cpu; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_2 (struct evsel*,struct perf_sample*) ;

__attribute__((used)) static int FUNC_3(struct evsel *VAR_1,
      struct perf_sample *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (!VAR_3) {
  int VAR_4 = FUNC_0(VAR_2->cpu),
      VAR_5 = FUNC_1(VAR_1, VAR_2, "node");

  if (VAR_4 != VAR_5)
   VAR_0++;
 }

 return VAR_3;
}
