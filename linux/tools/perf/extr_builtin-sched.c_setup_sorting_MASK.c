
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {int cmp_pid; int sort_list; int sort_order; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (char const* const*,struct option const*,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct perf_sched *VAR_0, const struct option *VAR_1,
     const char * const VAR_2[])
{
 char *VAR_3, *VAR_4, *VAR_5 = FUNC_2(VAR_0->sort_order);

 for (VAR_4 = FUNC_3(VAR_5, ", ", &VAR_3);
   VAR_4; VAR_4 = FUNC_3(((void*)0), ", ", &VAR_3)) {
  if (FUNC_1(VAR_4, &VAR_0->sort_list) < 0) {
   FUNC_4(VAR_2, VAR_1,
     "Unknown --sort key: `%s'", VAR_4);
  }
 }

 FUNC_0(VAR_5);

 FUNC_1("pid", &VAR_0->cmp_pid);
}
