
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_ftrace {char const* tracer; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct perf_ftrace *VAR_3 = VAR_2;

 if (!FUNC_2(VAR_0, "ftrace."))
  return 0;

 if (FUNC_1(VAR_0, "ftrace.tracer"))
  return -1;

 if (!FUNC_1(VAR_1, "function_graph") ||
     !FUNC_1(VAR_1, "function")) {
  VAR_3->tracer = VAR_1;
  return 0;
 }

 FUNC_0("Please select \"function_graph\" (default) or \"function\"\n");
 return -1;
}
