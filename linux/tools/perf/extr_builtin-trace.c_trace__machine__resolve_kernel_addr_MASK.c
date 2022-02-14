
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int kptr_restrict_warned; } ;
struct TYPE_2__ {scalar_t__ kptr_restrict; } ;


 char* FUNC_0 (void*,unsigned long long*,char**) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static char *FUNC_2(void *VAR_1, unsigned long long *VAR_2, char **VAR_3)
{
 struct machine *VAR_4 = VAR_1;

 if (VAR_4->kptr_restrict_warned)
  return ((void*)0);

 if (VAR_0.kptr_restrict) {
  FUNC_1("Kernel address maps (/proc/{kallsyms,modules}) are restricted.\n\n"
      "Check /proc/sys/kernel/kptr_restrict and /proc/sys/kernel/perf_event_paranoid.\n\n"
      "Kernel samples will not be resolved.\n");
  VAR_4->kptr_restrict_warned = 1;
  return ((void*)0);
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
