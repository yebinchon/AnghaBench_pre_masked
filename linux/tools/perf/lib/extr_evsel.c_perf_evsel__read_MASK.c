
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;
struct perf_counts_values {int values; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_evsel*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_counts_values*,int ,int) ;
 size_t FUNC_2 (struct perf_evsel*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,size_t) ;

int FUNC_4(struct perf_evsel *VAR_2, int VAR_3, int VAR_4,
       struct perf_counts_values *VAR_5)
{
 size_t VAR_6 = FUNC_2(VAR_2);

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 if (FUNC_0(VAR_2, VAR_3, VAR_4) < 0)
  return -VAR_0;

 if (FUNC_3(FUNC_0(VAR_2, VAR_3, VAR_4), VAR_5->values, VAR_6) <= 0)
  return -VAR_1;

 return 0;
}
