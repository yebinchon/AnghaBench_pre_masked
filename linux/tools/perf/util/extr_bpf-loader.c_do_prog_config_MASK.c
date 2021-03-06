
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_probe_event {int dummy; } ;
struct TYPE_3__ {int (* func ) (char const*,struct perf_probe_event*) ;int desc; int usage; int key; } ;


 unsigned int ARRAY_SIZE (TYPE_1__*) ;
 int BPF_LOADER_ERRNO__PROGCONF_TERM ;
 TYPE_1__* bpf_prog_config_terms ;
 int pr_debug (char*,...) ;
 scalar_t__ strcmp (char const*,int ) ;
 int stub1 (char const*,struct perf_probe_event*) ;

__attribute__((used)) static int
do_prog_config(const char *key, const char *value,
        struct perf_probe_event *pev)
{
 unsigned int i;

 pr_debug("config bpf program: %s=%s\n", key, value);
 for (i = 0; i < ARRAY_SIZE(bpf_prog_config_terms); i++)
  if (strcmp(key, bpf_prog_config_terms[i].key) == 0)
   return bpf_prog_config_terms[i].func(value, pev);

 pr_debug("BPF: ERROR: invalid program config option: %s=%s\n",
   key, value);

 pr_debug("\nHint: Valid options are:\n");
 for (i = 0; i < ARRAY_SIZE(bpf_prog_config_terms); i++)
  pr_debug("\t%s:\t%s\n", bpf_prog_config_terms[i].usage,
    bpf_prog_config_terms[i].desc);
 pr_debug("\n");

 return -BPF_LOADER_ERRNO__PROGCONF_TERM;
}
