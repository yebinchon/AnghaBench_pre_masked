
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {int dummy; } ;


 int FUNC_0 (struct perf_evlist*) ;
 struct perf_evlist* FUNC_1 (int) ;

struct perf_evlist *FUNC_2(void)
{
 struct perf_evlist *VAR_0 = FUNC_1(sizeof(*VAR_0));

 if (VAR_0 != ((void*)0))
  FUNC_0(VAR_0);

 return VAR_0;
}
