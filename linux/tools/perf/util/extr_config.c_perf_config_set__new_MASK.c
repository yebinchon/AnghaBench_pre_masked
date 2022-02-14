
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_config_set {int sections; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_config_set*) ;
 struct perf_config_set* FUNC_2 (int) ;

struct perf_config_set *FUNC_3(void)
{
 struct perf_config_set *VAR_0 = FUNC_2(sizeof(*VAR_0));

 if (VAR_0) {
  FUNC_0(&VAR_0->sections);
  FUNC_1(VAR_0);
 }

 return VAR_0;
}
