
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,struct perf_probe_event*) ;
 char* FUNC_3 (char const*,struct perf_probe_event*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, const char **VAR_2,
    bool *VAR_3, struct perf_probe_event *VAR_4)
{
 int VAR_5;
 const char *VAR_6 = FUNC_3(VAR_1, VAR_4);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 *VAR_2 = VAR_6;
 if (!FUNC_5(VAR_6, '=')) {

  const char *VAR_7 = FUNC_5(VAR_6, ':');

  if (!VAR_7) {
   FUNC_4("bpf: '%s' is not a valid tracepoint\n",
     VAR_1);
   return -VAR_0;
  }

  *VAR_3 = 1;
  return 0;
 }

 *VAR_3 = 0;
 VAR_5 = FUNC_2(VAR_6, VAR_4);
 if (VAR_5 < 0) {
  FUNC_4("bpf: '%s' is not a valid config string\n",
    VAR_1);

  return -VAR_0;
 }
 return 0;
}
