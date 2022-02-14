
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_counts_values {int dummy; } ;
struct evsel {int * counts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct evsel*,int,int) ;
 int VAR_2 ;
 struct perf_counts_values* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct perf_counts_values*,int,int *) ;
 scalar_t__ FUNC_3 (struct evsel*,int,int) ;
 int FUNC_4 (struct evsel*,int,int,struct perf_counts_values*) ;
 scalar_t__ FUNC_5 (scalar_t__,struct perf_counts_values*,size_t) ;

int FUNC_6(struct evsel *VAR_3,
         int VAR_4, int VAR_5, bool VAR_6)
{
 struct perf_counts_values VAR_7;
 size_t VAR_8 = VAR_6 ? 3 : 1;

 if (FUNC_0(VAR_3, VAR_4, VAR_5) < 0)
  return -VAR_0;

 if (VAR_3->counts == ((void*)0) && FUNC_3(VAR_3, VAR_4 + 1, VAR_5 + 1) < 0)
  return -VAR_1;

 if (FUNC_5(FUNC_0(VAR_3, VAR_4, VAR_5), &VAR_7, VAR_8 * sizeof(u64)) <= 0)
  return -VAR_2;

 FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_7);
 FUNC_2(&VAR_7, VAR_6, ((void*)0));
 *FUNC_1(VAR_3->counts, VAR_4, VAR_5) = VAR_7;
 return 0;
}
