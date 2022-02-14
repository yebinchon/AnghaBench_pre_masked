
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_data {char* path; int is_dir; } ;


 scalar_t__ FUNC_0 (struct perf_data*) ;
 scalar_t__ FUNC_1 (struct perf_data*) ;
 int FUNC_2 (struct perf_data*) ;
 int FUNC_3 (struct perf_data*) ;
 int FUNC_4 (struct perf_data*) ;
 scalar_t__ FUNC_5 (struct perf_data*) ;
 scalar_t__ FUNC_6 (struct perf_data*) ;

int FUNC_7(struct perf_data *VAR_0)
{
 if (FUNC_1(VAR_0))
  return 0;

 if (!VAR_0->path)
  VAR_0->path = "perf.data";

 if (FUNC_0(VAR_0))
  return -1;

 if (FUNC_6(VAR_0))
  VAR_0->is_dir = FUNC_2(VAR_0);

 return FUNC_5(VAR_0) ?
        FUNC_3(VAR_0) : FUNC_4(VAR_0);
}
