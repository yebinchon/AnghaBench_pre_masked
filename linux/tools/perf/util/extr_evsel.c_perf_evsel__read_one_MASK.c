
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_counts_values {int dummy; } ;
struct evsel {int core; int counts; } ;


 struct perf_counts_values* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,int,int,struct perf_counts_values*) ;

__attribute__((used)) static int
FUNC_2(struct evsel *VAR_0, int VAR_1, int VAR_2)
{
 struct perf_counts_values *VAR_3 = FUNC_0(VAR_0->counts, VAR_1, VAR_2);

 return FUNC_1(&VAR_0->core, VAR_1, VAR_2, VAR_3);
}
